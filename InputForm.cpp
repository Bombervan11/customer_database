#include "InputForm.h"
#include "MenuForm.h"
#include "Functions.h"
#include "DataForm.h"

#include<iostream>


System::Void customerdatabase::InputForm::button1_Click(System::Object^ sender, System::EventArgs^ e) //buttonDataEntry
{
	DataForm^ form = gcnew DataForm();
	this->Hide();
	form->Show();
}

System::Void customerdatabase::InputForm::button2_Click(System::Object^ sender, System::EventArgs^ e) //buttonReading
{
	if (textBoxFile->Text == "") {
		MessageBox::Show("Введіть назву файла!", "Увага!");
		return;
	}
	//Reading
	std::string filename;
	Convert_String_to_string(textBoxFile->Text->ToString(), filename);

	int n;
	Data_* buf;
	DataReading(buf, n, filename);

	//MessageBox::Show(Convert_string_to_String(buf[0].GetInitials().surname));

	//Saving
	SaveData(buf, n, "Data.txt");

	if (MessageBox::Show("Перейти у форму для роботи з даними?", "Увага!", MessageBoxButtons::YesNo) !=
		System::Windows::Forms::DialogResult::No) {
		DataForm^ form = gcnew DataForm();
		form->Show();
		this->Hide();

	}
}

System::Void customerdatabase::InputForm::textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void customerdatabase::InputForm::повернутисяВГоловнеМенюToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MenuForm^ form = gcnew MenuForm();
	this->Hide();
	form->Show();
}

System::Void customerdatabase::InputForm::вийтиЗПрограмиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	ClearFile("Data.txt");
	Application::Exit();
}

System::Void customerdatabase::InputForm::проПрограмуToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("Автор: Бочаров Іван", "Про програму");
}
