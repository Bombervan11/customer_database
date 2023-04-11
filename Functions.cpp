#include "Functions.h"

using namespace System;
using namespace System::Windows::Forms;
	
void DataReading(Data_* (&d), int& n, std::string fileName) {
	// создаем поток для чтения 
	std::ifstream reading(fileName);

	if (reading) {
		//временные переменные
		Initials initials;
		std::string date;
		std::string address;

		reading >> n;

		//выделяем память для массива данных
		d = new Data_[n];

		//считываем данные
		for (int i = 0; i < n; i++) {
			reading >> initials.surname >> initials.name >> initials.patrinymic;
			reading >> date;
			reading >> address;

			// Добавляем новые данные в элемент массива объект класса 
			d[i].DataEntry(initials, date, address);
		}

		MessageBox::Show("Дані считано!", "Увага!");
	}
	else
		MessageBox::Show("Помилка считання даних!", "Помилка!");

	reading.close();
}

void DataChange(Data_* d, int n) {

	//временные переменные 
	Initials initials;
	std::string date;
	std::string address;
	int _n;

	_n--;

	if (_n >= 0 && _n < n) {

		d[_n].DataEntry(initials, date, address);
	}

}

void Copy(Data_* d_n, Data_* d_o, int n) {

	for (int i = 0; i < n; i++)
		d_n[i] = d_o[i];
}

void AddData(Data_* (&d), int& n) {

	Data_* buf = new Data_[n];
	int size = n, new_size = ++n;

	Copy(buf, d, size);

	d = new Data_[new_size];

	Copy(d, buf, size);

	n++;

	delete[] buf;
}

void DeleteData(Data_* (&d), int& n, int indexDel){

	Data_* buf = new Data_[n];

	if (indexDel >= 0 && indexDel < n) {
		Copy(buf, d, n);
		int q = 0;
		n--;

		//Виділяємо ному пам'ять 
		d = new Data_[n];

		for (int i = 0; i <= n; i++) {
			if (i != indexDel) {
				d[q] = buf[i];
				q++;
			}
		}

			MessageBox::Show("Дані видалено!", "Увага!");
	}
	else
		MessageBox::Show("Неправильно вказан індекс!", "Увага!");

	delete[] buf;
}

void SortingData(Data_* d, int n)
{

	//Тимчасові змінні
	Data_ buf;
	int numOfSorted = 0;

	//Сортування бульбашкою
	for (int i = 0; i < n; i++) {
		for (int j = 1 + 1; j < n; j++) {
			//Умови сортування
			if (d[i].GetInitials().surname > d[j].GetInitials().surname) {
				//Сортування
				buf = d[i];
				d[i] = d[j];
				d[j] = buf;

				numOfSorted++;
			}
		}
	}
	MessageBox::Show("Дані відсортовано за прізвищем", "Увага!");//cout << "Данные отсортированны!\nКоличество сортировок: " << numOfSorted << endl;
}

void SaveData(Data_* d, int n, std::string fileName) {
		// создать поток для записи в файл 
	std::ofstream record(fileName);
	if (record) {
		record << n << "\n";

		for (int i = 0; i < n; i++) {
			record << d[i].GetInitials().surname << " " << d[i].GetInitials().name << " " << d[i].GetInitials().patrinymic << "\n";
			record << d[i].GetDate() << "\n";
			record << d[i].GetAddress();

			if (i < n - 1)
				record << "\n";
		}
	}
	else
		MessageBox::Show("Помилка Відкриття файлу!", "Помилка!");

	MessageBox::Show("Дані Збережено!", "Увага!");
	
	record.close();
		
}


//конвертируем System::string^ в std::string
std::string& Convert_String_to_string(String^ s, std::string& os) {
	using namespace Runtime::InteropServices;
	const char* chars =
		(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));

	return os;
}

//конвертируем std::string в System::string^
String^ Convert_string_to_String(std::string& os, String^ s) {
	s = gcnew System::String(os.c_str());

	return s;
}

//конвертируем System::string^ в std::string
std::string& Convert_String_to_string(String^ s) {
	std::string os;
	using namespace Runtime::InteropServices;
	const char* chars =
		(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));

	return os;
}

//конвертируем std::string в System::string^
String^ Convert_string_to_String(std::string& os) {
	System::String^ s = gcnew System::String(os.c_str());

	return s;
}

//конвертируем char в System::string^
System::String^ Convert_char_to_String(char ch) {
	char* chr = new char();
	chr[0] = ch;
	System::String^ str;
	for (int i = 0; chr[i] != '\0'; i++)
		str += wchar_t(ch);
	return str;
}

//конвертируем System::string^ в char*
char* Convert_String_to_char(System::String^ string) {
	using namespace System::Runtime::InteropServices;
	return (char*)(void*)Marshal::StringToHGlobalAnsi(string);
}


//конвертируем char* в System::string^
System::String^ Convert_char_to_String(char* ch) {
	char* chr = new char();
	chr = ch;
	System::String^ str;
	for (int i = 0; chr[i] != '\0'; i++)
		str += wchar_t(ch[i]);
	return str;
}

void ClearFile(std::string filename) {
	std::ofstream file(filename, std::ios::out | std::ios::trunc);
	file.close();
}