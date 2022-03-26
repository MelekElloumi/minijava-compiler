using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.IO;
using System.Text.RegularExpressions;
using System.Diagnostics;


namespace MiniJava_Compiler
{
    public partial class MiniJava : Form
    {
        public MiniJava()
        {
            InitializeComponent();
        }

        private void richTextBox2_TextChanged(object sender, EventArgs e)
        {
            // getting keywords/functions
            string keywords = @"\b(System.out.println|public|class|static|void|main|extends|this|new)\b";
            MatchCollection keywordMatches = Regex.Matches(richTextBox2.Text, keywords);

            // getting types/classes from the text 
            string types = @"\b(int|boolean|String)\b";
            MatchCollection typeMatches = Regex.Matches(richTextBox2.Text, types);

            // getting types/classes from the text 
            string logic = @"\b(return|if|while|else)\b";
            MatchCollection logicMatches = Regex.Matches(richTextBox2.Text, logic);

            // getting types/classes from the text 
            string booleans = @"\b(True|False)\b";
            MatchCollection booleansMatches = Regex.Matches(richTextBox2.Text, booleans);

            // getting types/classes from the text 
            string integers = "[0-9]+";
            MatchCollection integersMatches = Regex.Matches(richTextBox2.Text, integers);

            // getting comments (inline or multiline)
            string comments = @"(\/\/.+?$|\/\*([^*]|\*[^*/])*\*\/)";
            MatchCollection commentMatches = Regex.Matches(richTextBox2.Text, comments, RegexOptions.Multiline);

            // getting strings
            string strings = "\".+?\"";
            MatchCollection stringMatches = Regex.Matches(richTextBox2.Text, strings);

            // saving the original caret position + forecolor
            int originalIndex = richTextBox2.SelectionStart;
            int originalLength = richTextBox2.SelectionLength;
            Color originalColor = Color.White;

            // MANDATORY - focuses a label before highlighting (avoids blinking)
            groupBox1.Focus();

            // removes any previous highlighting (so modified words won't remain highlighted)
            richTextBox2.SelectionStart = 0;
            richTextBox2.SelectionLength = richTextBox2.Text.Length;
            richTextBox2.SelectionColor = originalColor;

            // scanning...
            foreach (Match m in keywordMatches)
            {
                richTextBox2.SelectionStart = m.Index;
                richTextBox2.SelectionLength = m.Length;
                richTextBox2.SelectionColor = Color.Aquamarine;
            }

            foreach (Match m in typeMatches)
            {
                richTextBox2.SelectionStart = m.Index;
                richTextBox2.SelectionLength = m.Length;
                richTextBox2.SelectionColor = Color.Crimson;
            }

            foreach (Match m in logicMatches)
            {
                richTextBox2.SelectionStart = m.Index;
                richTextBox2.SelectionLength = m.Length;
                richTextBox2.SelectionColor = Color.Violet;
            }

            foreach (Match m in booleansMatches)
            {
                richTextBox2.SelectionStart = m.Index;
                richTextBox2.SelectionLength = m.Length;
                richTextBox2.SelectionColor = Color.DarkOrange;
            }

            foreach (Match m in integersMatches)
            {
                richTextBox2.SelectionStart = m.Index;
                richTextBox2.SelectionLength = m.Length;
                richTextBox2.SelectionColor = Color.DarkCyan;
            }

            foreach (Match m in commentMatches)
            {
                richTextBox2.SelectionStart = m.Index;
                richTextBox2.SelectionLength = m.Length;
                richTextBox2.SelectionColor = Color.LimeGreen;
            }

            foreach (Match m in stringMatches)
            {
                richTextBox2.SelectionStart = m.Index;
                richTextBox2.SelectionLength = m.Length;
                richTextBox2.SelectionColor = Color.LightSalmon;
            }

            // restoring the original colors, for further writing
            richTextBox2.SelectionStart = originalIndex;
            richTextBox2.SelectionLength = originalLength;
            richTextBox2.SelectionColor = originalColor;

            if (this.saved)
            {
                this.saved = false;
                this.Text = this.Text + "*";
            }

            // giving back the focus
            richTextBox2.Focus();
        }

        private void richTextBox1_TextChanged(object sender, EventArgs e)
        {
            // getting keywords/functions
            string complete = "Compilation complete with no errors";
            MatchCollection completeMatches = Regex.Matches(richTextBox1.Text, complete);

            // getting types/classes from the text 
            string error = "[0-9]+ errors found";
            MatchCollection errorMatches = Regex.Matches(richTextBox1.Text, error);

            // getting types/classes from the text 
            string synlex = @"\b(Lexical|Syntax)\b";
            MatchCollection synlexMatches = Regex.Matches(richTextBox1.Text, synlex);

            // getting types/classes from the text 
            string integers = "[0-9]+";
            MatchCollection integersMatches = Regex.Matches(richTextBox1.Text, integers);

            // saving the original caret position + forecolor
            int originalIndex = richTextBox1.SelectionStart;
            int originalLength = richTextBox1.SelectionLength;
            Color originalColor = Color.White;

            // MANDATORY - focuses a label before highlighting (avoids blinking)
            groupBox1.Focus();

            // removes any previous highlighting (so modified words won't remain highlighted)
            richTextBox1.SelectionStart = 0;
            richTextBox1.SelectionLength = richTextBox1.Text.Length;
            richTextBox1.SelectionColor = originalColor;

            // scanning...

            foreach (Match m in integersMatches)
            {
                richTextBox1.SelectionStart = m.Index;
                richTextBox1.SelectionLength = m.Length;
                richTextBox1.SelectionColor = Color.DodgerBlue;
            }

            foreach (Match m in completeMatches)
            {
                richTextBox1.SelectionStart = m.Index;
                richTextBox1.SelectionLength = m.Length;
                richTextBox1.SelectionColor = Color.Lime;
            }

            foreach (Match m in errorMatches)
            {
                richTextBox1.SelectionStart = m.Index;
                richTextBox1.SelectionLength = m.Length;
                richTextBox1.SelectionColor = Color.Red;
            }

            foreach (Match m in synlexMatches)
            {
                richTextBox1.SelectionStart = m.Index;
                richTextBox1.SelectionLength = m.Length;
                richTextBox1.SelectionColor = Color.Violet;
            }

            // restoring the original colors, for further writing
            richTextBox1.SelectionStart = originalIndex;
            richTextBox1.SelectionLength = originalLength;
            richTextBox1.SelectionColor = originalColor;

            // giving back the focus
            richTextBox2.Focus();
        }

        private void newToolStripMenuItem_Click(object sender, EventArgs e)
        {

            if (!this.saved)    // RTB has contents - prompt user to save changes
            {
                // save changes message
                DialogResult result = MessageBox.Show("Would you like to save your changes? Editor is not empty.", "Save Changes?", MessageBoxButtons.YesNo, MessageBoxIcon.Warning);

                if (result == DialogResult.Yes)
                {
                    // save the RTB contents if user selected yes
                    saveToolStripMenuItem_Click(sender, e);
                }
            }
            openFileDialog1.FileName = "New_file.java";
            this.saved = false;
            this.Text ="New_file.java";
            richTextBox2.ResetText();
            richTextBox1.ResetText();
            richTextBox2.Focus();
        }

        private void openToolStripMenuItem_Click(object sender, EventArgs e)
        {
            if (!this.saved)    // RTB has contents - prompt user to save changes
            {
                // save changes message
                DialogResult result = MessageBox.Show("Would you like to save your changes? Editor is not empty.", "Save Changes?", MessageBoxButtons.YesNo, MessageBoxIcon.Warning);

                if (result == DialogResult.Yes)
                {
                    // save the RTB contents if user selected yes
                    saveToolStripMenuItem_Click(sender, e);
                }
            }

            openFileDialog1.Filter = "java files (*.java)|*.java";
            openFileDialog1.FilterIndex = 1;
            openFileDialog1.RestoreDirectory = true;

            if (openFileDialog1.ShowDialog() == DialogResult.OK)
            {
                richTextBox2.LoadFile(openFileDialog1.FileName, RichTextBoxStreamType.PlainText);
                richTextBox1.ResetText();
                richTextBox2.Focus();
                richTextBox2.Select(richTextBox2.Text.Length - 1, 0);
                this.saved = true;
                this.Text = Path.GetFileName(openFileDialog1.FileName);
                // richTextBox1.LoadFile(openFileDialog1.FileName, RichTextBoxStreamType.RichText);  // loads the file in RTB format
            }

        }

        private void saveToolStripMenuItem_Click(object sender, EventArgs e)
        {
            if (openFileDialog1.FileName == "New_file.java")
            {
                saveAsToolStripMenuItem_Click(sender, e);
                return;
            }
            saveFileDialog1.Filter = "java files (*.java)|*.java";
            saveFileDialog1.FilterIndex = 1;
            saveFileDialog1.RestoreDirectory = true;
            string file;
            string filename = openFileDialog1.FileName;
            // save the contents of the rich text box
            richTextBox2.SaveFile(filename, RichTextBoxStreamType.PlainText);
            file = Path.GetFileName(filename);    // get name of file 
            this.saved = true;
            this.Text = Path.GetFileName(openFileDialog1.FileName);

        }

        private void saveAsToolStripMenuItem_Click(object sender, EventArgs e)
        {

            saveFileDialog1.Filter = "java files (*.java)|*.java";
            saveFileDialog1.FilterIndex = 1;
            saveFileDialog1.RestoreDirectory = true;

            if (saveFileDialog1.ShowDialog() == DialogResult.OK)
            {
                System.IO.StreamWriter file = new System.IO.StreamWriter(saveFileDialog1.FileName.ToString());
                file.WriteLine(richTextBox2.Text);
                file.Close();
                openFileDialog1.FileName = saveFileDialog1.FileName;
                this.saved = true;
                this.Text = Path.GetFileName(openFileDialog1.FileName);
            }
        }


        private void saveFileDialog1_FileOk(object sender, CancelEventArgs e)
        {
            if (!saveFileDialog1.FileName.EndsWith(".java"))
            {
                MessageBox.Show("Please select a filename with the '.java' extension");
                e.Cancel = true;
            }
        }

        private void openFileDialog1_FileOk(object sender, CancelEventArgs e)
        {
            if (!openFileDialog1.FileName.EndsWith(".java"))
            {
                MessageBox.Show("Please select a filename with the '.java' extension");
                e.Cancel = true;
            }
        }

        private void exitToolStripMenuItem_Click(object sender, EventArgs e)
        {
            
            this.Close();     // close the form
        }

        private void MiniJava_FormClosing(object sender, FormClosingEventArgs e)
        {
            if (!this.saved | openFileDialog1.FileName=="New_file.java")    // RTB has contents - prompt user to save changes
            {
                // save changes message
                DialogResult result = MessageBox.Show("Would you like to save your changes? Editor is not empty.", "Save Changes?", MessageBoxButtons.YesNo, MessageBoxIcon.Warning);

                if (result == DialogResult.Yes)
                {
                    // save the RTB contents if user selected yes
                    saveToolStripMenuItem_Click(sender, e);
                }
            }

        }

        private void undoToolStripMenuItem_Click(object sender, EventArgs e)
        {
            richTextBox2.Undo();
        }

        private void redoToolStripMenuItem_Click(object sender, EventArgs e)
        {
            richTextBox2.Redo();     // redo move
        }

        private void cutToolStripMenuItem_Click(object sender, EventArgs e)
        {
            richTextBox2.Cut();     // cut text
        }

        private void copyToolStripMenuItem_Click(object sender, EventArgs e)
        {

            richTextBox2.Copy();     // copy text
        }

        private void pasteToolStripMenuItem_Click(object sender, EventArgs e)
        {
            richTextBox2.Paste();    // paste text
        }

        private void selectAllToolStripMenuItem_Click(object sender, EventArgs e)
        {
            richTextBox2.SelectAll();    // select all text
        }

        private void CompileMenuItem_Click(object sender, EventArgs e)
        {

            string file;
            string filename = openFileDialog1.FileName;
            // save the contents of the rich text box
            richTextBox2.SaveFile(filename, RichTextBoxStreamType.PlainText);
            file = Path.GetFileName(filename);    // get name of file 
            this.saved = true;
            this.Text = Path.GetFileName(openFileDialog1.FileName);

            ProcessStartInfo startInfo = new ProcessStartInfo();
            startInfo.CreateNoWindow = true;
            startInfo.UseShellExecute = false;
            string directory = Path.Combine(Environment.CurrentDirectory, "bin");
            string filePath = Path.Combine(directory, "miniJava.exe");
            startInfo.Arguments = openFileDialog1.FileName;
            startInfo.FileName = filePath;
            startInfo.WindowStyle = ProcessWindowStyle.Hidden;
            richTextBox1.Text = startInfo.FileName + " " + startInfo.Arguments;
            startInfo.RedirectStandardError = true;
            startInfo.RedirectStandardInput = true;
            startInfo.RedirectStandardOutput = true;

            using (Process process = new Process())
            {
                process.StartInfo = startInfo;
                string eOut = null;
                process.ErrorDataReceived += new DataReceivedEventHandler((sender, e) =>
                { eOut += e.Data+"\n"; });
                process.Start();
                /*using (StreamReader reader = process.StandardOutput)
                {
                    string result = reader.ReadToEnd();
                    richTextBox1.Text = result;
                }*/
                process.BeginErrorReadLine();
                string output = process.StandardOutput.ReadToEnd();
                //var temp = errorReader.ReadToEnd();
                //richTextBox1.Text = temp;
                //process.BeginOutputReadLine();
                //process.BeginErrorReadLine();
                process.WaitForExit();
                richTextBox1.Text = eOut;
                richTextBox1.AppendText(output);
            }
        }
    }
}
