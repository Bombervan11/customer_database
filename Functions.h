#pragma once
#include "Data.h"

using namespace System;

//прототипы функций
void DataReading(Data_* (&d), int& n, std::string fileName);//чтение из файла
void DataChange(Data_* d, int n);//изменение данных
void Copy(Data_ *d_n, Data_ *d_o, int n);//копия данных массива
void AddData(Data_* (&d), int& n);//добавление данных
void DeleteData(Data_* (&d), int& n, int indexDel);//удаление данных
void SortingData(Data_* d, int n);//сортировка
void SaveData(Data_* d, int n, std::string fileName);//coxpaHeHNe данных

/* прототипы функций конвертирования */
std::string& Convert_String_to_string(String^ s, std::string& os); //конвертируем System::string^ в std::string
String^ Convert_string_to_String(std::string& os, String^ s); //конвертируем std::string в System::string^
std::string& Convert_String_to_string(String^ s); //конвертируем System::string^ в std::string
String^ Convert_string_to_String(std::string& os); //конвертируем std::string в System::string^
System::String^ Convert_char_to_String(char* ch); //конвертируем char* в System::string^
char* Convert_String_to_char(System::String^ string); //конвертируем System::string^ в char*

void ClearFile(std::string filename);// clear file