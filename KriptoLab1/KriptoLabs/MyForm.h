#pragma once

#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <locale>
#include <fstream>
namespace KriptoLabs {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace std;
	

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnFile;
	private: System::Windows::Forms::TextBox^  tbFileName;
	protected:

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  btnChangeFile;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::CheckBox^  checkBox1;

	private: System::Windows::Forms::Button^  btnLaunch;

	private:
		/// <summary>
		/// ��������� ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ������������ ����� ��� ��������� ������������ - �� ���������
		/// ���������� ������� ������ ��� ������ ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnFile = (gcnew System::Windows::Forms::Button());
			this->tbFileName = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnChangeFile = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->btnLaunch = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnFile
			// 
			this->btnFile->Location = System::Drawing::Point(12, 74);
			this->btnFile->Name = L"btnFile";
			this->btnFile->Size = System::Drawing::Size(75, 23);
			this->btnFile->TabIndex = 0;
			this->btnFile->Text = L"�������...";
			this->btnFile->UseVisualStyleBackColor = true;
			this->btnFile->Click += gcnew System::EventHandler(this, &MyForm::btnFile_Click);
			// 
			// tbFileName
			// 
			this->tbFileName->Location = System::Drawing::Point(50, 21);
			this->tbFileName->Name = L"tbFileName";
			this->tbFileName->ReadOnly = true;
			this->tbFileName->Size = System::Drawing::Size(187, 20);
			this->tbFileName->TabIndex = 1;
			this->tbFileName->Text = L"D:\\Study\\�����������\\test.txt";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(39, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"����:";
			// 
			// btnChangeFile
			// 
			this->btnChangeFile->Location = System::Drawing::Point(93, 74);
			this->btnChangeFile->Name = L"btnChangeFile";
			this->btnChangeFile->Size = System::Drawing::Size(144, 23);
			this->btnChangeFile->TabIndex = 3;
			this->btnChangeFile->Text = L"���������� ����";
			this->btnChangeFile->UseVisualStyleBackColor = true;
			this->btnChangeFile->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->checkBox1);
			this->groupBox1->Controls->Add(this->btnFile);
			this->groupBox1->Controls->Add(this->btnChangeFile);
			this->groupBox1->Controls->Add(this->tbFileName);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(243, 108);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"��������� �����";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Location = System::Drawing::Point(93, 47);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(86, 17);
			this->checkBox1->TabIndex = 4;
			this->checkBox1->Text = L"� ��������";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// btnLaunch
			// 
			this->btnLaunch->Location = System::Drawing::Point(43, 421);
			this->btnLaunch->Name = L"btnLaunch";
			this->btnLaunch->Size = System::Drawing::Size(134, 23);
			this->btnLaunch->TabIndex = 6;
			this->btnLaunch->Text = L"��������� �������";
			this->btnLaunch->UseVisualStyleBackColor = true;
			this->btnLaunch->Click += gcnew System::EventHandler(this, &MyForm::btnLaunch_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1007, 456);
			this->Controls->Add(this->btnLaunch);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnFile_Click(System::Object^  sender, System::EventArgs^  e) {
				 // Displays an OpenFileDialog so the user can select a Cursor.
				 OpenFileDialog ^ openFileDialog1 = gcnew OpenFileDialog();
				 openFileDialog1->Filter = "Text File|*.txt";
				 openFileDialog1->Title = "Select a Text File";

				 // Show the Dialog.
				 // If the user clicked OK in the dialog and
				 // a .CUR file was selected, open it.
				 if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				 {
					 // Assign the cursor in the Stream to
					 // the Form's Cursor property.
					 //this->Cursor = gcnew System::Windows::Forms::Cursor(openFileDialog1->OpenFile());
					 tbFileName->Text = openFileDialog1->FileName;
				 }
	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (tbFileName->Text->Length > 0){
					 setlocale(LC_ALL, ".1251");
					 ifstream inFile((char*)(void*)System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(tbFileName->Text));
					 if (!inFile) {
						 MessageBox::Show("�� ���� ������� ������� ����", "������!", MessageBoxButtons::OK, MessageBoxIcon::Error);
					 }
					 ofstream outFile("C:\\Users\\Olya\\Documents\\Visual Studio 2013\\Projects\\KriptoLab1\\KriptoLabs\\write.txt");
					 if (!outFile) {
						 MessageBox::Show("�� ���� ������� �������� ����", "������!", MessageBoxButtons::OK, MessageBoxIcon::Error);
					 }
					 char c, h;
					 inFile.get(c);
					 if (checkBox1->Checked){ //� ��������
						 while (!inFile.eof()){
							 if ((c >= '�' && c <= '�') || (c >= '�' && c <= '�')){
								 h = tolower(c);
								 outFile << h;
							 }
							 else if (c == 10) outFile << ' ';
							 else if (c == ' ') outFile << ' ';
							 else if ((c == '�') || (c == '�')) outFile << '�';
							 inFile.get(c);
						 }
					 }
					 else{//��� �������
						 while (!inFile.eof()){
							 if ((c >= '�' && c <= '�') || (c >= '�' && c <= '�')){
								 h = tolower(c);
								 outFile << h;
							 }
							 else if ((c == '�') || (c == '�')) outFile << '�';
							 inFile.get(c);
						 }
					 }
					 outFile.close();
					 inFile.close();
				 }
				 else{
					 MessageBox::Show("�������� ����", "������!", MessageBoxButtons::OK, MessageBoxIcon::Error);
				 }

	}
	private: System::Void btnLaunch_Click(System::Object^  sender, System::EventArgs^  e) {
				 setlocale(LC_ALL, ".1251");
				 /*char c;
				 String^ str = "";
				 for (int i = 0; i < '�'-'�'+2; i++){
					 c = '�' + i;
					 dataGridView1->Columns->Add(i.ToString(), c.ToString());
					 dataGridView1->Rows->Add(i.ToString(), c.ToString());
				 }*/
				 ifstream fin("C:\\Users\\Olya\\Documents\\Visual Studio 2013\\Projects\\KriptoLab1\\KriptoLabs\\write.txt");
				 if (!fin) {
					 MessageBox::Show("�� ���� ������� �������� ���� write.txt", "������!", MessageBoxButtons::OK, MessageBoxIcon::Error);
				 }
				 ofstream fout("C:\\Users\\Olya\\Documents\\Visual Studio 2013\\Projects\\KriptoLab1\\KriptoLabs\\frequency.txt");
				 if (!fout) {
					 MessageBox::Show("�� ���� ������� �������� ���� frequency.txt", "������!", MessageBoxButtons::OK, MessageBoxIcon::Error);
				 }
				 char c, h;
				 int freq[33] = { 0 }, sum = 0, freq2[33][33] = { 0 };
				 fin.get(c);
				 fin.get(h);
				 while (!fin.eof()){
					 if (c != ' ')
					 {
						 freq[c - '�']++;
						 if (h != ' ') freq2[c - '�'][h - '�']++;
						 else freq2[c - '�'][32]++;
					 }
					 else
					 {
						 freq[32]++;
						 if (h != ' ') freq2[32][h - '�']++;
						 else freq2[32][32]++;
					 }
					 c = h;
					 fin.get(h);
					 sum++;
				 }
				 if (c != ' ') freq[c - '�']++;
				 else freq[32]++;
				 for (int i = 0; i < 32; i++)
				 {
					 fout << (char)('�' + i) << "\t" << freq[i] << "\t" << (float)freq[i] / (sum+1) << "\n";
				 }
				 if (checkBox1->Checked) fout << "_" << "\t" << freq[32] << "\t" << (float)freq[32] / (sum + 1) << "\n\n\n\n";
				 fout << "  \t*�\t*�\t*�\t*�\t*�\t*�\t*�\t*�\t*�\t*�\t*�\t*�\t*�\t*�\t*�\t*�\t*�\t*�\t*�\t*�\t*�\t*�\t*�\t*�\t*�\t*�\t*�\t*�\t*�\t*�\t*�\t*�\t*_\n";
				 for (int i = 0; i < 32; i++)
				 {
					 fout << (char)('�' + i)<<"*" << "\t";
					 for (int j = 0; j < 32; j++)
						 fout << freq2[i][j] << "\t"; //<< (float)freq2[i] / (sum + 1) << "\n";
					 fout << freq2[i][32] << "\n";
				 }
				 fout << "_*\t";
				 for (int j = 0; j < 32; j++)
					 fout << freq2[32][j] << "\t"; //<< (float)freq2[i] / (sum + 1) << "\n";
				 fout << freq2[32][32] << "\n";
				 fout.close();
				 fin.close();
				 System::Diagnostics::Process::Start("C:\\Users\\Olya\\Documents\\Visual Studio 2013\\Projects\\KriptoLab1\\KriptoLabs\\frequency.txt");
	}
	
};
}
