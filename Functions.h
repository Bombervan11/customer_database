#pragma once
#include "Data.h"

using namespace System;

//��������� �������
void DataReading(Data_* (&d), int& n, std::string fileName);//������ �� �����
void DataChange(Data_* d, int n);//��������� ������
void Copy(Data_ *d_n, Data_ *d_o, int n);//����� ������ �������
void AddData(Data_* (&d), int& n);//���������� ������
void DeleteData(Data_* (&d), int& n, int indexDel);//�������� ������
void SortingData(Data_* d, int n);//����������
void SaveData(Data_* d, int n, std::string fileName);//coxpaHeHNe ������

/* ��������� ������� ��������������� */
std::string& Convert_String_to_string(String^ s, std::string& os); //������������ System::string^ � std::string
String^ Convert_string_to_String(std::string& os, String^ s); //������������ std::string � System::string^
std::string& Convert_String_to_string(String^ s); //������������ System::string^ � std::string
String^ Convert_string_to_String(std::string& os); //������������ std::string � System::string^
System::String^ Convert_char_to_String(char* ch); //������������ char* � System::string^
char* Convert_String_to_char(System::String^ string); //������������ System::string^ � char*

void ClearFile(std::string filename);// clear file