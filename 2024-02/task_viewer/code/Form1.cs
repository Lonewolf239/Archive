using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Diagnostics;
using System.Drawing;
using System.Linq;
using System.Security.Policy;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace task_viever
{
    public partial class Tasker : Form
    {
        public Tasker()
        {
            InitializeComponent();
        }

        private Point lastLocation;
        private readonly int screenWidth = Screen.PrimaryScreen.Bounds.Width;
        private readonly int screenHeight = Screen.PrimaryScreen.Bounds.Height;

        private void exit_btn_MouseClick(object sender, MouseEventArgs e)
        {
            if (e.Button == MouseButtons.Left)
                Application.Exit();
        }

        private void exit_btn_MouseEnter(object sender, EventArgs e)
        {
            exit_btn.BackColor = Color.Red;
        }

        private void exit_btn_MouseLeave(object sender, EventArgs e)
        {
            exit_btn.BackColor = Color.Transparent;
        }

        private void hide_btn_MouseClick(object sender, MouseEventArgs e)
        {
            if (e.Button == MouseButtons.Left)
                WindowState = FormWindowState.Minimized;
        }

        private void hide_btn_MouseEnter(object sender, EventArgs e)
        {
            hide_btn.BackColor = Color.Silver;
        }

        private void hide_btn_MouseLeave(object sender, EventArgs e)
        {
            hide_btn.BackColor = Color.Transparent;
        }

        private void OpenFileDialog1_FileOk(object sender, CancelEventArgs e)
        {
            try
            {
                string selectedFileName = openFileDialog1.FileName;
                Image selectedImage = Image.FromFile(selectedFileName);
                task_picture.Image = selectedImage;
            }
            catch (Exception)
            {
                MessageBox.Show("Incorrect file type!", "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
        }

        private void Tasker_MouseDown(object sender, MouseEventArgs e)
        {
            if (e.Button == MouseButtons.Left)
                lastLocation = e.Location;
        }

        private void Tasker_MouseMove(object sender, MouseEventArgs e)
        {
            if (e.Button == MouseButtons.Left)
            {
                Cursor = Cursors.SizeAll;
                int newX = Location.X + e.X - lastLocation.X,
                 newY = Location.Y + e.Y - lastLocation.Y;
                if (newX < 0)
                    newX = 0;
                if (newY < 0)
                    newY = 0;
                if (newX + Width > screenWidth)
                    newX = screenWidth - Width;
                if (newY + Height > screenHeight)
                    newY = screenHeight - Height;
                Location = new Point(newX, newY);
            }
        }

        private void Tasker_MouseUp(object sender, MouseEventArgs e)
        {
            Cursor = Cursors.Default;
        }

        private void choose_file_MouseClick(object sender, MouseEventArgs e)
        {
            need_label.Visible = false;
            openFileDialog1.ShowDialog();
        }

        private void accept_btn_Click(object sender, EventArgs e)
        {
            Width = (int)x_value.Value;
            Height = (int)y_value.Value;
            task_picture.Size = new Size(Width, Height - 60);
            hide_btn.Location = new Point(Width - 60, 0);
            exit_btn.Location = new Point(Width - 30, 0);
            need_label.Left = (Width - need_label.Width) / 2;
            need_label.Top = (Height - need_label.Height) / 2;
        }

        private void Tasker_Load(object sender, EventArgs e)
        {
            x_value.Value = Width;
            y_value.Value = Height;
            need_label.Left = (Width - need_label.Width) / 2;
            need_label.Top = (Height - need_label.Height) / 2;
        }

        private void developer_MouseClick(object sender, MouseEventArgs e)
        {
            if (e.Button == MouseButtons.Left)
                Process.Start(new ProcessStartInfo("https://github.com/Lonewolf239") { UseShellExecute = true });

        }
    }
}
