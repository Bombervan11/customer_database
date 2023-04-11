#include "MenuForm.h"

#include"DataForm.h"
#include"InputForm.h"
#include"OutputForm.h"
#include "Functions.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	customerdatabase::MenuForm form;
	Application::Run(%form);
}

System::Void customerdatabase::MenuForm::âèõ³äToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	ClearFile("Data.txt");
	Application::Exit();
}

System::Void customerdatabase::MenuForm::ïðîÏðîãðàìóToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("Àâòîð: Áî÷àðîâ ²âàí", "Ïðî ïðîãðàìó");
}

System::Void customerdatabase::MenuForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	InputForm^ form = gcnew InputForm();
	this->Hide();
	form->Show();
}

System::Void customerdatabase::MenuForm::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	DataForm^ form = gcnew DataForm();
	this->Hide();
	form->Show();
}

System::Void customerdatabase::MenuForm::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	DataForm^ form = gcnew DataForm();
	this->Hide();
	form->Show();
}

System::Void customerdatabase::MenuForm::button4_Click(System::Object^ sender, System::EventArgs^ e)
{
	DataForm^ form = gcnew DataForm();
	this->Hide();
	form->Show();
}

System::Void customerdatabase::MenuForm::button5_Click(System::Object^ sender, System::EventArgs^ e)
{
	DataForm^ form = gcnew DataForm();
	this->Hide();
	form->Show();
}

System::Void customerdatabase::MenuForm::button6_Click(System::Object^ sender, System::EventArgs^ e)
{
	DataForm^ form = gcnew DataForm();
	this->Hide();
	form->Show();
}

System::Void customerdatabase::MenuForm::button7_Click(System::Object^ sender, System::EventArgs^ e)
{
	OutputForm^ form = gcnew OutputForm();
	this->Hide();
	form->Show();
}

System::Void customerdatabase::MenuForm::button8_Click(System::Object^ sender, System::EventArgs^ e)
{
	ClearFile("Data.txt");
	Application::Exit();
}
