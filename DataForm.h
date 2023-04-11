#pragma once

namespace customerdatabase {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DataForm
	/// </summary>
	public ref class DataForm : public System::Windows::Forms::Form
	{
	public:
		DataForm(void)
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
		~DataForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ äàí³ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âèâåäåííÿÄàíèõToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ çáåğåæåííÿÄàíèõToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ çì³íèòèÄàí³ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ äîäàòèÄàí³ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âèäàëèòèÄàí³ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ÑîğòóâàííÿÄàí³ToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^ çáåğåãòèÂÏğîãğàìóToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ çáåğåãòèÍàçàâæäèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âèäàëèòèÂèáğàíåToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âèäàëèòèÂñåToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âèõ³äToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïğîÏğîãğàìóToolStripMenuItem;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::ToolStripMenuItem^ ââ³äÄàíèõÂğó÷íóToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïîâåğíóòèñÿÂÃîëîâíåÌåíşToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âèéòèÇÏğîãğàìèToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Label^ label2;

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
			this->äàí³ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âèâåäåííÿÄàíèõToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ââ³äÄàíèõÂğó÷íóToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çáåğåæåííÿÄàíèõToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çáåğåãòèÂÏğîãğàìóToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çáåğåãòèÍàçàâæäèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çì³íèòèÄàí³ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->äîäàòèÄàí³ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âèäàëèòèÄàí³ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âèäàëèòèÂèáğàíåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âèäàëèòèÂñåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ÑîğòóâàííÿÄàí³ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âèõ³äToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïîâåğíóòèñÿÂÃîëîâíåÌåíşToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âèéòèÇÏğîãğàìèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïğîÏğîãğàìóToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->äàí³ToolStripMenuItem,
					this->âèõ³äToolStripMenuItem, this->ïğîÏğîãğàìóToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(791, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// äàí³ToolStripMenuItem
			// 
			this->äàí³ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->âèâåäåííÿÄàíèõToolStripMenuItem,
					this->ââ³äÄàíèõÂğó÷íóToolStripMenuItem, this->çáåğåæåííÿÄàíèõToolStripMenuItem, this->çì³íèòèÄàí³ToolStripMenuItem, this->äîäàòèÄàí³ToolStripMenuItem,
					this->âèäàëèòèÄàí³ToolStripMenuItem, this->ÑîğòóâàííÿÄàí³ToolStripMenuItem
			});
			this->äàí³ToolStripMenuItem->Name = L"äàí³ToolStripMenuItem";
			this->äàí³ToolStripMenuItem->Size = System::Drawing::Size(43, 20);
			this->äàí³ToolStripMenuItem->Text = L"Äàí³";
			// 
			// âèâåäåííÿÄàíèõToolStripMenuItem
			// 
			this->âèâåäåííÿÄàíèõToolStripMenuItem->Name = L"âèâåäåííÿÄàíèõToolStripMenuItem";
			this->âèâåäåííÿÄàíèõToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->âèâåäåííÿÄàíèõToolStripMenuItem->Text = L"Âèâåäåííÿ äàíèõ";
			this->âèâåäåííÿÄàíèõToolStripMenuItem->Click += gcnew System::EventHandler(this, &DataForm::âèâåäåííÿÄàíèõToolStripMenuItem_Click);
			// 
			// ââ³äÄàíèõÂğó÷íóToolStripMenuItem
			// 
			this->ââ³äÄàíèõÂğó÷íóToolStripMenuItem->Name = L"ââ³äÄàíèõÂğó÷íóToolStripMenuItem";
			this->ââ³äÄàíèõÂğó÷íóToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->ââ³äÄàíèõÂğó÷íóToolStripMenuItem->Text = L"Ââ³ä äàíèõ âğó÷íó";
			this->ââ³äÄàíèõÂğó÷íóToolStripMenuItem->Click += gcnew System::EventHandler(this, &DataForm::ââ³äÄàíèõÂğó÷íóToolStripMenuItem_Click);
			// 
			// çáåğåæåííÿÄàíèõToolStripMenuItem
			// 
			this->çáåğåæåííÿÄàíèõToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->çáåğåãòèÂÏğîãğàìóToolStripMenuItem,
					this->çáåğåãòèÍàçàâæäèToolStripMenuItem
			});
			this->çáåğåæåííÿÄàíèõToolStripMenuItem->Name = L"çáåğåæåííÿÄàíèõToolStripMenuItem";
			this->çáåğåæåííÿÄàíèõToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->çáåğåæåííÿÄàíèõToolStripMenuItem->Text = L"Çáåğåæåííÿ äàíèõ";
			// 
			// çáåğåãòèÂÏğîãğàìóToolStripMenuItem
			// 
			this->çáåğåãòèÂÏğîãğàìóToolStripMenuItem->Name = L"çáåğåãòèÂÏğîãğàìóToolStripMenuItem";
			this->çáåğåãòèÂÏğîãğàìóToolStripMenuItem->Size = System::Drawing::Size(190, 22);
			this->çáåğåãòèÂÏğîãğàìóToolStripMenuItem->Text = L"Çáåğåãòè â ïğîãğàìó";
			this->çáåğåãòèÂÏğîãğàìóToolStripMenuItem->Click += gcnew System::EventHandler(this, &DataForm::çáåğåãòèÂÏğîãğàìóToolStripMenuItem_Click);
			// 
			// çáåğåãòèÍàçàâæäèToolStripMenuItem
			// 
			this->çáåğåãòèÍàçàâæäèToolStripMenuItem->Name = L"çáåğåãòèÍàçàâæäèToolStripMenuItem";
			this->çáåğåãòèÍàçàâæäèToolStripMenuItem->Size = System::Drawing::Size(190, 22);
			this->çáåğåãòèÍàçàâæäèToolStripMenuItem->Text = L"Çáåğåãòè ÿê ôàéë";
			this->çáåğåãòèÍàçàâæäèToolStripMenuItem->Click += gcnew System::EventHandler(this, &DataForm::çáåğåãòèÍàçàâæäèToolStripMenuItem_Click);
			// 
			// çì³íèòèÄàí³ToolStripMenuItem
			// 
			this->çì³íèòèÄàí³ToolStripMenuItem->Name = L"çì³íèòèÄàí³ToolStripMenuItem";
			this->çì³íèòèÄàí³ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->çì³íèòèÄàí³ToolStripMenuItem->Text = L"Çì³íèòè äàí³";
			this->çì³íèòèÄàí³ToolStripMenuItem->Click += gcnew System::EventHandler(this, &DataForm::çì³íèòèÄàí³ToolStripMenuItem_Click);
			// 
			// äîäàòèÄàí³ToolStripMenuItem
			// 
			this->äîäàòèÄàí³ToolStripMenuItem->Name = L"äîäàòèÄàí³ToolStripMenuItem";
			this->äîäàòèÄàí³ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->äîäàòèÄàí³ToolStripMenuItem->Text = L"Äîäàòè äàí³";
			this->äîäàòèÄàí³ToolStripMenuItem->Click += gcnew System::EventHandler(this, &DataForm::äîäàòèÄàí³ToolStripMenuItem_Click);
			// 
			// âèäàëèòèÄàí³ToolStripMenuItem
			// 
			this->âèäàëèòèÄàí³ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->âèäàëèòèÂèáğàíåToolStripMenuItem,
					this->âèäàëèòèÂñåToolStripMenuItem
			});
			this->âèäàëèòèÄàí³ToolStripMenuItem->Name = L"âèäàëèòèÄàí³ToolStripMenuItem";
			this->âèäàëèòèÄàí³ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->âèäàëèòèÄàí³ToolStripMenuItem->Text = L"Âèäàëèòè äàí³";
			// 
			// âèäàëèòèÂèáğàíåToolStripMenuItem
			// 
			this->âèäàëèòèÂèáğàíåToolStripMenuItem->Name = L"âèäàëèòèÂèáğàíåToolStripMenuItem";
			this->âèäàëèòèÂèáğàíåToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->âèäàëèòèÂèáğàíåToolStripMenuItem->Text = L"Âèäàëèòè âèáğàíå";
			this->âèäàëèòèÂèáğàíåToolStripMenuItem->Click += gcnew System::EventHandler(this, &DataForm::âèäàëèòèÂèáğàíåToolStripMenuItem_Click);
			// 
			// âèäàëèòèÂñåToolStripMenuItem
			// 
			this->âèäàëèòèÂñåToolStripMenuItem->Name = L"âèäàëèòèÂñåToolStripMenuItem";
			this->âèäàëèòèÂñåToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->âèäàëèòèÂñåToolStripMenuItem->Text = L"Âèäàëèòè âñå";
			this->âèäàëèòèÂñåToolStripMenuItem->Click += gcnew System::EventHandler(this, &DataForm::âèäàëèòèÂñåToolStripMenuItem_Click);
			// 
			// ÑîğòóâàííÿÄàí³ToolStripMenuItem
			// 
			this->ÑîğòóâàííÿÄàí³ToolStripMenuItem->Name = L"ÑîğòóâàííÿÄàí³ToolStripMenuItem";
			this->ÑîğòóâàííÿÄàí³ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->ÑîğòóâàííÿÄàí³ToolStripMenuItem->Text = L"Ñîğòóâàííÿ äàíèõ";
			this->ÑîğòóâàííÿÄàí³ToolStripMenuItem->Click += gcnew System::EventHandler(this, &DataForm::âèäàëèòèÄàí³ToolStripMenuItem1_Click);
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
			this->ïîâåğíóòèñÿÂÃîëîâíåÌåíşToolStripMenuItem->Click += gcnew System::EventHandler(this, &DataForm::ïîâåğíóòèñÿÂÃîëîâíåÌåíşToolStripMenuItem_Click);
			// 
			// âèéòèÇÏğîãğàìèToolStripMenuItem
			// 
			this->âèéòèÇÏğîãğàìèToolStripMenuItem->Name = L"âèéòèÇÏğîãğàìèToolStripMenuItem";
			this->âèéòèÇÏğîãğàìèToolStripMenuItem->Size = System::Drawing::Size(238, 22);
			this->âèéòèÇÏğîãğàìèToolStripMenuItem->Text = L"Âèéòè ç ïğîãğàìè";
			this->âèéòèÇÏğîãğàìèToolStripMenuItem->Click += gcnew System::EventHandler(this, &DataForm::âèéòèÇÏğîãğàìèToolStripMenuItem_Click);
			// 
			// ïğîÏğîãğàìóToolStripMenuItem
			// 
			this->ïğîÏğîãğàìóToolStripMenuItem->Name = L"ïğîÏğîãğàìóToolStripMenuItem";
			this->ïğîÏğîãğàìóToolStripMenuItem->Size = System::Drawing::Size(99, 20);
			this->ïğîÏğîãğàìóToolStripMenuItem->Text = L"Ïğî ïğîãğàìó";
			this->ïğîÏğîãğàìóToolStripMenuItem->Click += gcnew System::EventHandler(this, &DataForm::ïğîÏğîãğàìóToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(22, 164);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(49, 24);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Äàí³";
			this->label1->Click += gcnew System::EventHandler(this, &DataForm::label1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(16, 191);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(763, 296);
			this->dataGridView1->TabIndex = 2;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->numericUpDown1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Location = System::Drawing::Point(26, 43);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(345, 118);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Ïàğàìåòğè äëÿ ââåäåííÿ äàíèõ";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->numericUpDown1->Location = System::Drawing::Point(157, 35);
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(59, 24);
			this->numericUpDown1->TabIndex = 1;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &DataForm::numericUpDown1_ValueChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(16, 36);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(135, 20);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Ê³ëüê³ñòü äàíèõ: ";
			// 
			// DataForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(791, 499);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(807, 538);
			this->MinimumSize = System::Drawing::Size(807, 538);
			this->Name = L"DataForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Äàí³";
			this->Load += gcnew System::EventHandler(this, &DataForm::DataForm_Load);
			this->Shown += gcnew System::EventHandler(this, &DataForm::DataForm_Shown);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void âèäàëèòèÄàí³ToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e); //Ñîğòóâàííÿ
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ïîâåğíóòèñÿÂÃîëîâíåÌåíşToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void âèéòèÇÏğîãğàìèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ïğîÏğîãğàìóToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void DataForm_Load(System::Object^ sender, System::EventArgs^ e) {};
private: System::Void DataForm_Shown(System::Object^ sender, System::EventArgs^ e);
private: System::Void âèâåäåííÿÄàíèõToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ââ³äÄàíèõÂğó÷íóToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void çáåğåãòèÂÏğîãğàìóToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void çáåğåãòèÍàçàâæäèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void çì³íèòèÄàí³ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void äîäàòèÄàí³ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void âèäàëèòèÂèáğàíåToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void âèäàëèòèÂñåToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);

	private: void Header();
	private: void Show();
private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
