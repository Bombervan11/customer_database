#include "OutputForm.h"
#include"MenuForm.h"
#include"Functions.h"

System::Void customerdatabase::OutputForm::�����������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MenuForm^ form = gcnew MenuForm();
	this->Hide();
	form->Show();
}

System::Void customerdatabase::OutputForm::��������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	ClearFile("Data.txt");
	Application::Exit();
}

System::Void customerdatabase::OutputForm::�����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("�����: ������� ���� ", "��� ��������");
}

System::Void customerdatabase::OutputForm::button2_Click_1(System::Object^ sender, System::EventArgs^ e)
{
	if (textBox1->Text == "") {
		MessageBox::Show("������ ����� �����!", "�����!");
		return;
	}

	int n;
	Data_* buf;

	DataReading(buf, n, "Data.txt");

	//Reading
	std::string filename;
	Convert_String_to_string(textBox1->Text->ToString(), filename);

	//saving
	SaveData(buf, n, filename);
}

System::Void customerdatabase::OutputForm::textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}