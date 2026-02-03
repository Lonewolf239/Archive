import os
import subprocess
import sys
from pathlib import Path

class GitNavigator:
    def __init__(self, root_dir):
        self.root_dir = Path(root_dir).resolve()
        self.projects = []
        self.refresh_projects()

    def refresh_projects(self):
        self.projects = []
        for git_dir in self.root_dir.rglob('git'):
            if git_dir.is_dir() and git_dir.parent != self.root_dir:
                project_path = git_dir.parent
                if len(project_path.relative_to(self.root_dir).parts) <= 3:
                    self.projects.append(project_path)
        self.projects.sort()

    def print_menu(self):
        os.system('clear' if os.name == 'posix' else 'cls')
        print("=== Git Archive Navigator ===\n")
        print("0. Exit")
        for i, project in enumerate(self.projects, 1):
            rel_path = project.relative_to(self.root_dir)
            print(f"{i}. {rel_path}")

    def select_project(self):
        while True:
            self.print_menu()
            try:
                choice = int(input("\nSelect a project: "))
                if choice == 0:
                    os.system('clear' if os.name == 'posix' else 'cls')
                    sys.exit(0)
                elif 1 <= choice <= len(self.projects):
                    project = self.projects[choice - 1]
                    self.show_project_menu(project)
            except ValueError:
                pass
            except (KeyboardInterrupt, EOFError):
                print("\nExit...")
                sys.exit(0)

    def show_project_menu(self, project_path):
        project_name = project_path.name
        git_dir = project_path / 'git'
        os.chdir(str(project_path))
        while True:
            os.system('clear' if os.name == 'posix' else 'cls')
            print(f"📁 {project_name}")
            print("─────────────────────────")
            if git_dir.exists():
                print("1. git log --oneline --all --graph")
                print("2. git log --oneline -10")
                print("3. Change project")
                print("0. Return")
                try:
                    choice = input("\nChoice: ").strip()
                    if choice == '1':
                        self.run_git_simple('git --git-dir=git_dir --work-tree=. log --oneline --all --graph')
                    elif choice == '2':
                        self.run_git_simple('git --git-dir=git_dir --work-tree=. log --oneline -10')
                    elif choice == '3':
                        os.chdir(str(self.root_dir))
                        return
                    elif choice == '0':
                        return
                except (KeyboardInterrupt, EOFError):
                    return
            else:
                print("❌ Git history not found!")
                input("Press Enter...")

    def run_git_simple(self, command):
        try:
            process = subprocess.Popen(
                command, 
                shell=True,
                stdout=subprocess.PIPE, 
                stderr=subprocess.STDOUT,
                universal_newlines=True,
                bufsize=1
            )
            while True:
                output = process.stdout.readline()
                if output == '' and process.poll() is not None:
                    break
                if output:
                    print(output.strip())
            return_code = process.poll()
            if return_code != 0:
                print(f"\n❌ Git returned an error (code {return_code})")
            input("\nPress Enter...")
        except FileNotFoundError:
            print("❌ Git not found in PATH!")
            input("\nPress Enter...")
        except Exception as e:
            print(f"❌ Error: {e}")
            input("\nPress Enter...")



def main():
    root = Path.cwd()
    navigator = GitNavigator(root)
    navigator.select_project()

if __name__ == "__main__":
    main()
