#pragma once

namespace customerdatabase {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for InputForm
	/// </summary>
	public ref class InputForm : public System::Windows::Forms::Form
	{
	public:
		InputForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~InputForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����������ToolStripMenuItem;
	private: System::Windows::Forms::Button^ buttonDataEntry;

	private: System::Windows::Forms::Button^ buttonReading;
	private: System::Windows::Forms::TextBox^ textBoxFile;


	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->buttonDataEntry = (gcnew System::Windows::Forms::Button());
			this->buttonReading = (gcnew System::Windows::Forms::Button());
			this->textBoxFile = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->�����ToolStripMenuItem,
					this->�����������ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(381, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->�����������������������ToolStripMenuItem,
					this->��������������ToolStripMenuItem
			});
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->�����ToolStripMenuItem->Text = L"�����";
			// 
			// �����������������������ToolStripMenuItem
			// 
			this->�����������������������ToolStripMenuItem->Name = L"�����������������������ToolStripMenuItem";
			this->�����������������������ToolStripMenuItem->Size = System::Drawing::Size(238, 22);
			this->�����������������������ToolStripMenuItem->Text = L"����������� � ������� ����";
			this->�����������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &InputForm::�����������������������ToolStripMenuItem_Click);
			// 
			// ��������������ToolStripMenuItem
			// 
			this->��������������ToolStripMenuItem->Name = L"��������������ToolStripMenuItem";
			this->��������������ToolStripMenuItem->Size = System::Drawing::Size(238, 22);
			this->��������������ToolStripMenuItem->Text = L"����� � ��������";
			this->��������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &InputForm::��������������ToolStripMenuItem_Click);
			// 
			// �����������ToolStripMenuItem
			// 
			this->�����������ToolStripMenuItem->Name = L"�����������ToolStripMenuItem";
			this->�����������ToolStripMenuItem->Size = System::Drawing::Size(99, 20);
			this->�����������ToolStripMenuItem->Text = L"��� ��������";
			this->�����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &InputForm::�����������ToolStripMenuItem_Click);
			// 
			// buttonDataEntry
			// 
			this->buttonDataEntry->Location = System::Drawing::Point(6, 40);
			this->buttonDataEntry->Name = L"buttonDataEntry";
			this->buttonDataEntry->Size = System::Drawing::Size(140, 26);
			this->buttonDataEntry->TabIndex = 1;
			this->buttonDataEntry->Text = L"�������� ������";
			this->buttonDataEntry->UseVisualStyleBackColor = true;
			this->buttonDataEntry->Click += gcnew System::EventHandler(this, &InputForm::button1_Click);
			// 
			// buttonReading
			// 
			this->buttonReading->Location = System::Drawing::Point(6, 34);
			this->buttonReading->Name = L"buttonReading";
			this->buttonReading->Size = System::Drawing::Size(140, 26);
			this->buttonReading->TabIndex = 2;
			this->buttonReading->Text = L"������� ��� ";
			this->buttonReading->UseVisualStyleBackColor = true;
			this->buttonReading->Click += gcnew System::EventHandler(this, &InputForm::button2_Click);
			// 
			// textBoxFile
			// 
			this->textBoxFile->Location = System::Drawing::Point(152, 34);
			this->textBoxFile->Multiline = true;
			this->textBoxFile->Name = L"textBoxFile";
			this->textBoxFile->Size = System::Drawing::Size(186, 26);
			this->textBoxFile->TabIndex = 3;
			this->textBoxFile->TextChanged += gcnew System::EventHandler(this, &InputForm::textBox1_TextChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->buttonReading);
			this->groupBox1->Controls->Add(this->textBoxFile);
			this->groupBox1->Location = System::Drawing::Point(13, 27);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(354, 100);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"���������� ����� � �����";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->buttonDataEntry);
			this->groupBox2->Location = System::Drawing::Point(13, 149);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(354, 100);
			this->groupBox2->TabIndex = 5;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"�������� ����� ������";
			// 
			// InputForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(381, 261);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(397, 300);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(397, 300);
			this->Name = L"InputForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"��� �����";
			this->Load += gcnew System::EventHandler(this, &InputForm::InputForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void InputForm_Load(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e); //buttonDataEntry
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e); //buttonReading
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void �����������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ��������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void �����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
};
}
