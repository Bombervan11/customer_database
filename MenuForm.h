#pragma once

namespace customerdatabase {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MenuForm
	/// </summary>
	public ref class MenuForm : public System::Windows::Forms::Form
	{
	public:
		MenuForm(void)
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
		~MenuForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����������ToolStripMenuItem;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;








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
			this->�����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
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
			this->menuStrip1->Size = System::Drawing::Size(284, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->�����ToolStripMenuItem->Text = L"�����";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MenuForm::�����ToolStripMenuItem_Click);
			// 
			// �����������ToolStripMenuItem
			// 
			this->�����������ToolStripMenuItem->Name = L"�����������ToolStripMenuItem";
			this->�����������ToolStripMenuItem->Size = System::Drawing::Size(99, 20);
			this->�����������ToolStripMenuItem->Text = L"��� ��������";
			this->�����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MenuForm::�����������ToolStripMenuItem_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(71, 36);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(130, 40);
			this->button1->TabIndex = 1;
			this->button1->Text = L"��� �����";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MenuForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(71, 82);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(130, 40);
			this->button2->TabIndex = 2;
			this->button2->Text = L"��������� �����";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MenuForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(71, 128);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(130, 40);
			this->button3->TabIndex = 3;
			this->button3->Text = L"���� �����";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MenuForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(71, 174);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(130, 40);
			this->button4->TabIndex = 4;
			this->button4->Text = L"��������� �����";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MenuForm::button4_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(71, 358);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(130, 40);
			this->button8->TabIndex = 8;
			this->button8->Text = L"����� �� ��������";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MenuForm::button8_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(71, 312);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(130, 40);
			this->button7->TabIndex = 7;
			this->button7->Text = L"���������� �����";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MenuForm::button7_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(71, 266);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(130, 40);
			this->button6->TabIndex = 6;
			this->button6->Text = L"���������� �����";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MenuForm::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(71, 220);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(130, 40);
			this->button5->TabIndex = 5;
			this->button5->Text = L"��������� �����";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MenuForm::button5_Click);
			// 
			// MenuForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 414);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(300, 453);
			this->MinimumSize = System::Drawing::Size(300, 453);
			this->Name = L"MenuForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"����";
			this->Load += gcnew System::EventHandler(this, &MenuForm::MenuForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void MenuForm_Load(System::Object^ sender, System::EventArgs^ e) {	}
private: System::Void �����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void �����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e);


};
}
