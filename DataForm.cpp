#include "DataForm.h"
#include "MenuForm.h"
#include "Functions.h"
#include "OutputForm.h"

Data_* _data;
int _countData;

System::Void customerdatabase::DataForm::видалитиДаніToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) //sortData
{
	// Сортуємо дані
	SortingData(_data, _countData);

	//Очистимо рядки та стовпці
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();

	//Шапка таблиці
	Header();

	//Задамо розмір таблиці
	dataGridView1->RowCount = _countData + 1;
	dataGridView1->ColumnCount = 5;

	//Виводимо таблицю
	Show();

	//Вирівнюємо таблицю
	dataGridView1->AutoResizeColumns();
	
	//заборона змінювати дані
	dataGridView1->ReadOnly = true;
	return System::Void();

}

System::Void customerdatabase::DataForm::label1_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void customerdatabase::DataForm::повернутисяВГоловнеМенюToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MenuForm^ form = gcnew MenuForm();
	this->Hide();
	form->Show();
}

System::Void customerdatabase::DataForm::вийтиЗПрограмиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	ClearFile("Data.txt");
	Application::Exit();
}

System::Void customerdatabase::DataForm::проПрограмуToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("Автор: Бочаров Іван", "Про програму");
}

System::Void customerdatabase::DataForm::DataForm_Shown(System::Object^ sender, System::EventArgs^ e)
{
	_countData = 0;
	DataReading(_data, _countData, "Data.txt");

	return System::Void();
}

System::Void customerdatabase::DataForm::виведенняДанихToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (_countData == 0) {
		MessageBox::Show("Дані відсутні!", "Увага!");
		return;
	}

	//Очищення таблиці
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();

	Header();

	dataGridView1->RowCount = _countData + 1;
	dataGridView1->ColumnCount = 5;

	Show();

	dataGridView1->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
	dataGridView1->AutoResizeColumns();

	dataGridView1->ReadOnly = true;

	return System::Void();
}

System::Void customerdatabase::DataForm::ввідДанихВручнуToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	dataGridView1->ReadOnly = false;

	_countData = Convert::ToInt32(numericUpDown1->Value);

	//Clear table
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();

	Header();

	dataGridView1->RowCount = _countData + 1;
	dataGridView1->ColumnCount = 5;

	return System::Void();
}

System::Void customerdatabase::DataForm::зберегтиВПрограмуToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (_countData == 0) {
		MessageBox::Show("Дані відсутні!", "Увага!");
		return;
	}

	_data = new Data_[_countData];

	//Тимчасові змінні
	Initials initials;
	std::string date;
	std::string address;

	for (int i = 0; i < dataGridView1->RowCount - 1; i++) {
		//ПІБ
		if (dataGridView1->Rows[i]->Cells[0]->Value == nullptr) {
			MessageBox::Show("He всі дані заповнені!", "Увага!");
			return;
		}
		Convert_String_to_string(dataGridView1->Rows[i]->Cells[1]->Value->ToString(), initials.surname);

		if (dataGridView1->Rows[i]->Cells[1]->Value == nullptr) {
			MessageBox::Show("He всі дані заповнені!", "Увага!");
			return;
		}
		Convert_String_to_string(dataGridView1->Rows[i]->Cells[1]->Value->ToString(), initials.name);

		if (dataGridView1->Rows[i]->Cells[2]->Value == nullptr) {
			MessageBox::Show("He всі дані заповнені!", "Увага!");
			return;
		}
		Convert_String_to_string(dataGridView1->Rows[i]->Cells[2]->Value->ToString(), initials.patrinymic);
	
		//date
		if (dataGridView1->Rows[i]->Cells[3]->Value == nullptr) {
		MessageBox::Show("He всі дані заповнені!", "Увага!");
		return;
		}
		Convert_String_to_string(dataGridView1->Rows[i]->Cells[3]->Value->ToString(), date);
		//adresa
		if (dataGridView1->Rows[i]->Cells[4]->Value == nullptr) {
		MessageBox::Show("He всі дані заповнені!", "Увага!");
		return;
		}
		Convert_String_to_string(dataGridView1->Rows[i]->Cells[4]->Value->ToString(), address);

		_data[i].DataEntry(initials, date, address);
	}

	MessageBox::Show("Дані збережено в програму!", "Увага!");

	return System::Void();
}

System::Void customerdatabase::DataForm::зберегтиНазавждиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (_countData == 0) {
		MessageBox::Show("Дані відсутні!", "Увага!");
		return;
	}

	SaveData(_data, _countData, "Data.txt");

	OutputForm^ form = gcnew OutputForm();
	form->Show();

	return System::Void();
}

System::Void customerdatabase::DataForm::змінитиДаніToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (dataGridView1->RowCount == 1) {
		MessageBox::Show("Дані відсутні!", "Увага!");
		return;
	}
	if (dataGridView1->ReadOnly == true) {
		MessageBox::Show("Тепер можна змінити дані!", "Увага!");
		dataGridView1->ReadOnly == false;
		return;
	}


	if (dataGridView1->SelectedRows->Count == 0) {
		MessageBox::Show("Виділіть строку!", "Увага!");
		return;
	}

	//Save number selected
	int selectedIndex = dataGridView1->CurrentCell->RowIndex;

	//Тимчасові змінні
	Initials initials;
	std::string date;
	std::string address;


	Convert_String_to_string(dataGridView1->Rows[selectedIndex]->Cells[1]->Value->ToString(), initials.surname);

	
	Convert_String_to_string(dataGridView1->Rows[selectedIndex]->Cells[1]->Value->ToString(), initials.name);

	
	Convert_String_to_string(dataGridView1->Rows[selectedIndex]->Cells[2]->Value->ToString(), initials.patrinymic);

	
	Convert_String_to_string(dataGridView1->Rows[selectedIndex]->Cells[3]->Value->ToString(), date);
	
	Convert_String_to_string(dataGridView1->Rows[selectedIndex]->Cells[4]->Value->ToString(), address);

	_data[selectedIndex].DataEntry(initials, date, address);

	dataGridView1->ReadOnly = true;

	return System::Void();
}

System::Void customerdatabase::DataForm::додатиДаніToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	dataGridView1->ReadOnly = false;
	dataGridView1->Rows->Add();

	AddData(_data, _countData);
	return System::Void();
}

System::Void customerdatabase::DataForm::видалитиВибранеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (dataGridView1->RowCount == 1) {
		MessageBox::Show("Дані відсутні!", "Увага!");
		return;
	}

	if (dataGridView1->SelectedRows->Count == 0) {
		MessageBox::Show("Виділіть строку!", "Увага!");
		return;
	}

	//Save number selected
	int selectedIndex = dataGridView1->CurrentCell->RowIndex;

	//Видаляємо дані з масиву
	DeleteData(_data, _countData, selectedIndex);

	//видалимо рядок
	dataGridView1->Rows->RemoveAt(selectedIndex);

	return System::Void();
}

System::Void customerdatabase::DataForm::видалитиВсеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	delete[] _data;

	_countData = 0;

	//Очищення таблиці
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();

	MessageBox::Show("Дані видалено", "Увага!");

	return System::Void();
}

void customerdatabase::DataForm::Header()
{
	DataGridViewTextBoxColumn^ c1 = gcnew DataGridViewTextBoxColumn();
	c1->Name = "Surname";
	c1->HeaderText = "Прізвище";
	c1->Width = 150;
	dataGridView1->Columns->Add(c1);

	DataGridViewTextBoxColumn^ c2 = gcnew DataGridViewTextBoxColumn();
	c2->Name = "Name";
	c2->HeaderText = "Ім'я";
	c2->Width = 150;
	dataGridView1->Columns->Add(c2);

	DataGridViewTextBoxColumn^ c3 = gcnew DataGridViewTextBoxColumn();
	c3->Name = "Patronymic";
	c3->HeaderText = "По батькові";
	c3->Width = 150;
	dataGridView1->Columns->Add(c3);

	DataGridViewTextBoxColumn^ c4 = gcnew DataGridViewTextBoxColumn();
	c4->Name = "Date";
	c4->HeaderText = "Дата";
	c4->Width = 150;
	dataGridView1->Columns->Add(c4);

	DataGridViewTextBoxColumn^ c5 = gcnew DataGridViewTextBoxColumn();
	c5->Name = "Address";
	c5->HeaderText = "Адреса";
	c5->Width = 150;
	dataGridView1->Columns->Add(c5);

	dataGridView1->TopLeftHeaderCell->Value = "Дані";
	dataGridView1->AutoResizeColumns();
}

void customerdatabase::DataForm::Show()
{
	for (int i = 0; i < dataGridView1->RowCount - 1; i++) {
		dataGridView1->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);

		dataGridView1->Rows[i]->Cells[0]->Value = Convert_string_to_String(_data[i].GetInitials().surname);
		dataGridView1->Rows[i]->Cells[1]->Value = Convert_string_to_String(_data[i].GetInitials().name);
		dataGridView1->Rows[i]->Cells[2]->Value = Convert_string_to_String(_data[i].GetInitials().patrinymic);

		dataGridView1->Rows[i]->Cells[3]->Value = Convert_string_to_String(_data[i].GetDate());
		dataGridView1->Rows[i]->Cells[4]->Value = Convert_string_to_String(_data[i].GetAddress());

	}
}