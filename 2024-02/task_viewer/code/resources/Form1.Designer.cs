namespace task_viever
{
    partial class Tasker
    {
        /// <summary>
        /// Обязательная переменная конструктора.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Освободить все используемые ресурсы.
        /// </summary>
        /// <param name="disposing">истинно, если управляемый ресурс должен быть удален; иначе ложно.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Код, автоматически созданный конструктором форм Windows

        /// <summary>
        /// Требуемый метод для поддержки конструктора — не изменяйте 
        /// содержимое этого метода с помощью редактора кода.
        /// </summary>
        public void InitializeComponent()
        {
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Tasker));
            this.openFileDialog1 = new System.Windows.Forms.OpenFileDialog();
            this.need_label = new System.Windows.Forms.Label();
            this.y_value = new System.Windows.Forms.NumericUpDown();
            this.x_text = new System.Windows.Forms.Label();
            this.x_value = new System.Windows.Forms.NumericUpDown();
            this.resolution_text = new System.Windows.Forms.Label();
            this.accept_btn = new System.Windows.Forms.Button();
            this.down_panel = new System.Windows.Forms.Panel();
            this.prog_name = new System.Windows.Forms.Label();
            this.top_panel = new System.Windows.Forms.Panel();
            this.exit_btn = new System.Windows.Forms.PictureBox();
            this.prog_icon = new System.Windows.Forms.PictureBox();
            this.hide_btn = new System.Windows.Forms.PictureBox();
            this.choose_file = new System.Windows.Forms.PictureBox();
            this.task_picture = new System.Windows.Forms.PictureBox();
            this.developer = new System.Windows.Forms.Label();
            ((System.ComponentModel.ISupportInitialize)(this.y_value)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.x_value)).BeginInit();
            this.down_panel.SuspendLayout();
            this.top_panel.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.exit_btn)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.prog_icon)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.hide_btn)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.choose_file)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.task_picture)).BeginInit();
            this.SuspendLayout();
            // 
            // openFileDialog1
            // 
            this.openFileDialog1.Filter = "Изображения (*.png, *.jpeg, *.gif, *.raw, *.tiff, *.bmp, *.psd)|*.png;*.jpeg;*.gi" +
    "f;*.raw;*.tiff;*.bmp;*.psd";
            this.openFileDialog1.FileOk += new System.ComponentModel.CancelEventHandler(this.OpenFileDialog1_FileOk);
            // 
            // need_label
            // 
            this.need_label.AutoSize = true;
            this.need_label.Font = new System.Drawing.Font("Microsoft Sans Serif", 32.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.need_label.ForeColor = System.Drawing.Color.White;
            this.need_label.Location = new System.Drawing.Point(119, 157);
            this.need_label.Name = "need_label";
            this.need_label.Size = new System.Drawing.Size(377, 51);
            this.need_label.TabIndex = 4;
            this.need_label.Text = "Choice task image";
            this.need_label.MouseDown += new System.Windows.Forms.MouseEventHandler(this.Tasker_MouseDown);
            this.need_label.MouseMove += new System.Windows.Forms.MouseEventHandler(this.Tasker_MouseMove);
            this.need_label.MouseUp += new System.Windows.Forms.MouseEventHandler(this.Tasker_MouseUp);
            // 
            // y_value
            // 
            this.y_value.BorderStyle = System.Windows.Forms.BorderStyle.None;
            this.y_value.Location = new System.Drawing.Point(190, 7);
            this.y_value.Maximum = new decimal(new int[] {
            600,
            0,
            0,
            0});
            this.y_value.Minimum = new decimal(new int[] {
            226,
            0,
            0,
            0});
            this.y_value.Name = "y_value";
            this.y_value.Size = new System.Drawing.Size(60, 16);
            this.y_value.TabIndex = 8;
            this.y_value.TabStop = false;
            this.y_value.Value = new decimal(new int[] {
            480,
            0,
            0,
            0});
            // 
            // x_text
            // 
            this.x_text.AutoSize = true;
            this.x_text.BackColor = System.Drawing.Color.Transparent;
            this.x_text.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.x_text.ForeColor = System.Drawing.Color.White;
            this.x_text.Location = new System.Drawing.Point(168, 4);
            this.x_text.Name = "x_text";
            this.x_text.Size = new System.Drawing.Size(16, 20);
            this.x_text.TabIndex = 7;
            this.x_text.Text = "x";
            this.x_text.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            this.x_text.MouseDown += new System.Windows.Forms.MouseEventHandler(this.Tasker_MouseDown);
            this.x_text.MouseMove += new System.Windows.Forms.MouseEventHandler(this.Tasker_MouseMove);
            this.x_text.MouseUp += new System.Windows.Forms.MouseEventHandler(this.Tasker_MouseUp);
            // 
            // x_value
            // 
            this.x_value.BorderStyle = System.Windows.Forms.BorderStyle.None;
            this.x_value.Location = new System.Drawing.Point(102, 7);
            this.x_value.Maximum = new decimal(new int[] {
            800,
            0,
            0,
            0});
            this.x_value.Minimum = new decimal(new int[] {
            370,
            0,
            0,
            0});
            this.x_value.Name = "x_value";
            this.x_value.Size = new System.Drawing.Size(60, 16);
            this.x_value.TabIndex = 6;
            this.x_value.TabStop = false;
            this.x_value.Value = new decimal(new int[] {
            640,
            0,
            0,
            0});
            // 
            // resolution_text
            // 
            this.resolution_text.AutoSize = true;
            this.resolution_text.BackColor = System.Drawing.Color.Transparent;
            this.resolution_text.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.resolution_text.ForeColor = System.Drawing.Color.White;
            this.resolution_text.Location = new System.Drawing.Point(8, 4);
            this.resolution_text.Name = "resolution_text";
            this.resolution_text.Size = new System.Drawing.Size(89, 20);
            this.resolution_text.TabIndex = 5;
            this.resolution_text.Text = "Resolution:";
            this.resolution_text.TextAlign = System.Drawing.ContentAlignment.MiddleLeft;
            this.resolution_text.MouseDown += new System.Windows.Forms.MouseEventHandler(this.Tasker_MouseDown);
            this.resolution_text.MouseMove += new System.Windows.Forms.MouseEventHandler(this.Tasker_MouseMove);
            this.resolution_text.MouseUp += new System.Windows.Forms.MouseEventHandler(this.Tasker_MouseUp);
            // 
            // accept_btn
            // 
            this.accept_btn.BackColor = System.Drawing.Color.Transparent;
            this.accept_btn.FlatStyle = System.Windows.Forms.FlatStyle.Popup;
            this.accept_btn.ForeColor = System.Drawing.Color.White;
            this.accept_btn.Location = new System.Drawing.Point(256, 4);
            this.accept_btn.Name = "accept_btn";
            this.accept_btn.Size = new System.Drawing.Size(75, 23);
            this.accept_btn.TabIndex = 10;
            this.accept_btn.TabStop = false;
            this.accept_btn.Text = "Accept";
            this.accept_btn.UseVisualStyleBackColor = false;
            this.accept_btn.Click += new System.EventHandler(this.accept_btn_Click);
            // 
            // down_panel
            // 
            this.down_panel.Controls.Add(this.resolution_text);
            this.down_panel.Controls.Add(this.x_value);
            this.down_panel.Controls.Add(this.x_text);
            this.down_panel.Controls.Add(this.choose_file);
            this.down_panel.Controls.Add(this.accept_btn);
            this.down_panel.Controls.Add(this.y_value);
            this.down_panel.Dock = System.Windows.Forms.DockStyle.Bottom;
            this.down_panel.Location = new System.Drawing.Point(0, 450);
            this.down_panel.Name = "down_panel";
            this.down_panel.Size = new System.Drawing.Size(640, 30);
            this.down_panel.TabIndex = 12;
            this.down_panel.MouseDown += new System.Windows.Forms.MouseEventHandler(this.Tasker_MouseDown);
            this.down_panel.MouseMove += new System.Windows.Forms.MouseEventHandler(this.Tasker_MouseMove);
            this.down_panel.MouseUp += new System.Windows.Forms.MouseEventHandler(this.Tasker_MouseUp);
            // 
            // prog_name
            // 
            this.prog_name.BackColor = System.Drawing.Color.Black;
            this.prog_name.Font = new System.Drawing.Font("Microsoft Sans Serif", 18F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.prog_name.ForeColor = System.Drawing.Color.White;
            this.prog_name.Location = new System.Drawing.Point(24, 0);
            this.prog_name.Name = "prog_name";
            this.prog_name.Size = new System.Drawing.Size(280, 30);
            this.prog_name.TabIndex = 13;
            this.prog_name.Text = "Task viewer";
            this.prog_name.TextAlign = System.Drawing.ContentAlignment.MiddleLeft;
            this.prog_name.MouseDown += new System.Windows.Forms.MouseEventHandler(this.Tasker_MouseDown);
            this.prog_name.MouseMove += new System.Windows.Forms.MouseEventHandler(this.Tasker_MouseMove);
            this.prog_name.MouseUp += new System.Windows.Forms.MouseEventHandler(this.Tasker_MouseUp);
            // 
            // top_panel
            // 
            this.top_panel.Controls.Add(this.developer);
            this.top_panel.Controls.Add(this.prog_icon);
            this.top_panel.Controls.Add(this.exit_btn);
            this.top_panel.Controls.Add(this.prog_name);
            this.top_panel.Controls.Add(this.hide_btn);
            this.top_panel.Dock = System.Windows.Forms.DockStyle.Top;
            this.top_panel.Location = new System.Drawing.Point(0, 0);
            this.top_panel.Name = "top_panel";
            this.top_panel.Size = new System.Drawing.Size(640, 30);
            this.top_panel.TabIndex = 15;
            this.top_panel.MouseDown += new System.Windows.Forms.MouseEventHandler(this.Tasker_MouseDown);
            this.top_panel.MouseMove += new System.Windows.Forms.MouseEventHandler(this.Tasker_MouseMove);
            this.top_panel.MouseUp += new System.Windows.Forms.MouseEventHandler(this.Tasker_MouseUp);
            // 
            // exit_btn
            // 
            this.exit_btn.BackColor = System.Drawing.Color.Black;
            this.exit_btn.Image = global::task_viever.Properties.Resources.close_icon;
            this.exit_btn.Location = new System.Drawing.Point(610, 0);
            this.exit_btn.Name = "exit_btn";
            this.exit_btn.Size = new System.Drawing.Size(30, 30);
            this.exit_btn.SizeMode = System.Windows.Forms.PictureBoxSizeMode.Zoom;
            this.exit_btn.TabIndex = 1;
            this.exit_btn.TabStop = false;
            this.exit_btn.MouseClick += new System.Windows.Forms.MouseEventHandler(this.exit_btn_MouseClick);
            this.exit_btn.MouseEnter += new System.EventHandler(this.exit_btn_MouseEnter);
            this.exit_btn.MouseLeave += new System.EventHandler(this.exit_btn_MouseLeave);
            // 
            // prog_icon
            // 
            this.prog_icon.BackColor = System.Drawing.Color.Black;
            this.prog_icon.Image = global::task_viever.Properties.Resources.icon;
            this.prog_icon.Location = new System.Drawing.Point(2, 2);
            this.prog_icon.Name = "prog_icon";
            this.prog_icon.Size = new System.Drawing.Size(26, 26);
            this.prog_icon.SizeMode = System.Windows.Forms.PictureBoxSizeMode.Zoom;
            this.prog_icon.TabIndex = 14;
            this.prog_icon.TabStop = false;
            this.prog_icon.MouseDown += new System.Windows.Forms.MouseEventHandler(this.Tasker_MouseDown);
            this.prog_icon.MouseMove += new System.Windows.Forms.MouseEventHandler(this.Tasker_MouseMove);
            this.prog_icon.MouseUp += new System.Windows.Forms.MouseEventHandler(this.Tasker_MouseUp);
            // 
            // hide_btn
            // 
            this.hide_btn.BackColor = System.Drawing.Color.Black;
            this.hide_btn.Image = global::task_viever.Properties.Resources.hide_icon;
            this.hide_btn.Location = new System.Drawing.Point(580, 0);
            this.hide_btn.Name = "hide_btn";
            this.hide_btn.Size = new System.Drawing.Size(30, 30);
            this.hide_btn.SizeMode = System.Windows.Forms.PictureBoxSizeMode.Zoom;
            this.hide_btn.TabIndex = 2;
            this.hide_btn.TabStop = false;
            this.hide_btn.MouseClick += new System.Windows.Forms.MouseEventHandler(this.hide_btn_MouseClick);
            this.hide_btn.MouseEnter += new System.EventHandler(this.hide_btn_MouseEnter);
            this.hide_btn.MouseLeave += new System.EventHandler(this.hide_btn_MouseLeave);
            // 
            // choose_file
            // 
            this.choose_file.BackColor = System.Drawing.Color.Transparent;
            this.choose_file.Cursor = System.Windows.Forms.Cursors.Arrow;
            this.choose_file.Dock = System.Windows.Forms.DockStyle.Right;
            this.choose_file.Image = global::task_viever.Properties.Resources.file_from_folder;
            this.choose_file.Location = new System.Drawing.Point(610, 0);
            this.choose_file.Name = "choose_file";
            this.choose_file.Size = new System.Drawing.Size(30, 30);
            this.choose_file.SizeMode = System.Windows.Forms.PictureBoxSizeMode.Zoom;
            this.choose_file.TabIndex = 9;
            this.choose_file.TabStop = false;
            this.choose_file.MouseClick += new System.Windows.Forms.MouseEventHandler(this.choose_file_MouseClick);
            // 
            // task_picture
            // 
            this.task_picture.Location = new System.Drawing.Point(1, 30);
            this.task_picture.Name = "task_picture";
            this.task_picture.Size = new System.Drawing.Size(640, 420);
            this.task_picture.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage;
            this.task_picture.TabIndex = 11;
            this.task_picture.TabStop = false;
            this.task_picture.MouseDown += new System.Windows.Forms.MouseEventHandler(this.Tasker_MouseDown);
            this.task_picture.MouseMove += new System.Windows.Forms.MouseEventHandler(this.Tasker_MouseMove);
            this.task_picture.MouseUp += new System.Windows.Forms.MouseEventHandler(this.Tasker_MouseUp);
            // 
            // developer
            // 
            this.developer.AutoSize = true;
            this.developer.Cursor = System.Windows.Forms.Cursors.Help;
            this.developer.Font = new System.Drawing.Font("Lucida Handwriting", 8.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.developer.ForeColor = System.Drawing.Color.White;
            this.developer.Location = new System.Drawing.Point(164, 12);
            this.developer.Name = "developer";
            this.developer.Size = new System.Drawing.Size(99, 15);
            this.developer.TabIndex = 15;
            this.developer.Text = "By.Lonewolf239";
            this.developer.TextAlign = System.Drawing.ContentAlignment.MiddleLeft;
            this.developer.MouseClick += new System.Windows.Forms.MouseEventHandler(this.developer_MouseClick);
            // 
            // Tasker
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.Black;
            this.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch;
            this.ClientSize = new System.Drawing.Size(640, 480);
            this.Controls.Add(this.need_label);
            this.Controls.Add(this.task_picture);
            this.Controls.Add(this.top_panel);
            this.Controls.Add(this.down_panel);
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.None;
            this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
            this.MaximizeBox = false;
            this.MinimizeBox = false;
            this.Name = "Tasker";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "Tasker";
            this.TopMost = true;
            this.Load += new System.EventHandler(this.Tasker_Load);
            this.MouseDown += new System.Windows.Forms.MouseEventHandler(this.Tasker_MouseDown);
            this.MouseMove += new System.Windows.Forms.MouseEventHandler(this.Tasker_MouseMove);
            this.MouseUp += new System.Windows.Forms.MouseEventHandler(this.Tasker_MouseUp);
            ((System.ComponentModel.ISupportInitialize)(this.y_value)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.x_value)).EndInit();
            this.down_panel.ResumeLayout(false);
            this.down_panel.PerformLayout();
            this.top_panel.ResumeLayout(false);
            this.top_panel.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)(this.exit_btn)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.prog_icon)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.hide_btn)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.choose_file)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.task_picture)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion
        public System.Windows.Forms.PictureBox exit_btn;
        public System.Windows.Forms.PictureBox hide_btn;
        public System.Windows.Forms.OpenFileDialog openFileDialog1;
        public System.Windows.Forms.Label need_label;
        private System.Windows.Forms.NumericUpDown y_value;
        private System.Windows.Forms.Label x_text;
        private System.Windows.Forms.NumericUpDown x_value;
        private System.Windows.Forms.Label resolution_text;
        private System.Windows.Forms.PictureBox choose_file;
        private System.Windows.Forms.Button accept_btn;
        private System.Windows.Forms.PictureBox task_picture;
        private System.Windows.Forms.Panel down_panel;
        private System.Windows.Forms.Label prog_name;
        private System.Windows.Forms.PictureBox prog_icon;
        private System.Windows.Forms.Panel top_panel;
        private System.Windows.Forms.Label developer;
    }
}

