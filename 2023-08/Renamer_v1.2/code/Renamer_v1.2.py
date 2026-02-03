import os

global attach, new_file_name, choice2

choice = 4
while choice > 3 or choice <= 0:
    choice = int(input("|=====================================================|\n"
                       "|             Renamer_v1.2 by.Lonewolf239             |\n"
                       "|                    VK: @1blitz01                    |\n"
                       "|=====================================================|\n"
                       "|                Select renaming mode:                |\n"
                       "|Write 1 for: rename files to 1.file, 2.file, etc.    |\n"
                       "|Write 2 for: renaming while keeping the original name|\n"
                       "|Write 3 for: creating an attachment to files         |\n"
                       "|=====================================================|\n"
                       "Your choice: "))
    os.system('cls')

if choice == 3:
    choice2 = 3
    while choice2 > 2 or choice2 <= 0:
        choice2 = int(input("Where to add a subscription:\n"
                            "To the beginning of the file name -> Write 1\n"
                            "To the end of the file name -> Write 2\n"
                            "Your choice: "))
        os.system('cls')
    attach = input("Enter an attachment to the files: ")
    os.system('cls')
folder_path = input("Enter the path to the folder in which you want to rename the files (example: C:\\test_folder)\n"
                    "Folder path: ")
os.system('cls')
files = os.listdir(folder_path)
files.sort()
for i, file_name in enumerate(files):
    file_name_without_extension, extension = os.path.splitext(file_name)
    if choice == 1:
        new_file_name = f"{i + 1}{extension}"
    elif choice == 2:
        new_file_name = f"{i + 1}) {file_name_without_extension}{extension}"
    elif choice == 3:
        if choice2 == 2:
            new_file_name = f"{i + 1}) {file_name_without_extension}_{attach}{extension}"
        else:
            new_file_name = f"{i + 1}) {attach}_{file_name_without_extension}{extension}"
    os.rename(os.path.join(folder_path, file_name), os.path.join(folder_path, new_file_name))

input("|==============================|\n"
      "| The files have been renamed! |\n"
      "|    Press enter to exit...    |\n"
      "|==============================|\n\n")
