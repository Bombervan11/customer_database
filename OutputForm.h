#pragma once

namespace customerdatabase {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for OutputForm
	/// </summary>
	public ref class OutputForm : public System::Windows::Forms::Form
	{
	public:
		OutputForm(void)
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
		~OutputForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ âèõ³äToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïîâåğíóòèñÿÂÃîëîâíåÌåíşToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âèéòèÇÏğîãğàìèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïğîÏğîãğàìóToolStripMenuItem;


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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->âèõ³äToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïîâåğíóòèñÿÂÃîëîâíåÌåíşToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âèéòèÇÏğîãğàìèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïğîÏğîãğàìóToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Location = System::Drawing::Point(13, 27);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(354, 100);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Çáåğåãòè äàí³ äî ôàéëó";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &OutputForm::groupBox1_Enter);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(6, 34);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(140, 26);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Çáåğåãòè äàí³";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &OutputForm::button2_Click_1);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(152, 34);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(186, 26);
			this->textBox1->TabIndex = 3;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &OutputForm::textBox1_TextChanged_1);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->âèõ³äToolStripMenuItem,
					this->ïğîÏğîãğàìóToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(381, 24);
			this->menuStrip1->TabIndex = 7;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// âèõ³äToolStripMenuItem
			// 
			this->âèõ³äToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ïîâåğíóòèñÿÂÃîëîâíåÌåíşToolStripMenuItem,
					this->âèéòèÇÏğîãğàìèToolStripMenuItem
			});
			this->âèõ³äToolStripMenuItem->Name = L"âèõ³äToolStripMenuItem";
			this->âèõ³äToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->âèõ³äToolStripMenuItem->Text = L"Âèõ³ä";
			// 
			// ïîâåğíóòèñÿÂÃîëîâíåÌåíşToolStripMenuItem
			// 
			this->ïîâåğíóòèñÿÂÃîëîâíåÌåíşToolStripMenuItem->Name = L"ïîâåğíóòèñÿÂÃîëîâíåÌåíşToolStripMenuItem";
			this->ïîâåğíóòèñÿÂÃîëîâíåÌåíşToolStripMenuItem->Size = System::Drawing::Size(238, 22);
			this->ïîâåğíóòèñÿÂÃîëîâíåÌåíşToolStripMenuItem->Text = L"Ïîâåğíóòèñÿ â ãîëîâíå ìåíş";
			this->ïîâåğíóòèñÿÂÃîëîâíåÌåíşToolStripMenuItem->Click += gcnew System::EventHandler(this, &OutputForm::ïîâåğíóòèñÿÂÃîëîâíåÌåíşToolStripMenuItem_Click);
			// 
			// âèéòèÇÏğîãğàìèToolStripMenuItem
			// 
			this->âèéòèÇÏğîãğàìèToolStripMenuItem->Name = L"âèéòèÇÏğîãğàìèToolStripMenuItem";
			this->âèéòèÇÏğîãğàìèToolStripMenuItem->Size = System::Drawing::Size(238, 22);
			this->âèéòèÇÏğîãğàìèToolStripMenuItem->Text = L"Âèéòè ç ïğîãğàìè";
			this->âèéòèÇÏğîãğàìèToolStripMenuItem->Click += gcnew System::EventHandler(this, &OutputForm::âèéòèÇÏğîãğàìèToolStripMenuItem_Click);
			// 
			// ïğîÏğîãğàìóToolStripMenuItem
			// 
			this->ïğîÏğîãğàìóToolStripMenuItem->Name = L"ïğîÏğîãğàìóToolStripMenuItem";
			this->ïğîÏğîãğàìóToolStripMenuItem->Size = System::Drawing::Size(99, 20);
			this->ïğîÏğîãğàìóToolStripMenuItem->Text = L"Ïğî ïğîãğàìó";
			this->ïğîÏğîãğàìóToolStripMenuItem->Click += gcnew System::EventHandler(this, &OutputForm::ïğîÏğîãğàìóToolStripMenuItem_Click);
			// 
			// OutputForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(381, 261);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(397, 300);
			this->MinimumSize = System::Drawing::Size(397, 300);
			this->Name = L"OutputForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Âèâåäåííÿ";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void ïîâåğíóòèñÿÂÃîëîâíåÌåíşToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void âèéòèÇÏğîãğàìèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ïğîÏğîãğàìóToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e);
private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e);
};
}
