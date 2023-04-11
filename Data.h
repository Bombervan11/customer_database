#pragma once

#include<iostream>
#include<string>
#include <fstream> 
#include <windows.h>


/*
    ���:
         1. ϲ�
         2. ����
         3. ������
*/

struct Initials {
    std::string surname,
        name,
        patrinymic;
};

struct Date {
    int day,
        month,
        year;
};

struct Address {
    std::string city;
    int home;
};

//�������� ������
class Data_
{
    // �������� ����� ������ (���� ������)
private:
    Initials initials;
    std::string date;
    std::string address;

    //�������� ����� ������
public:
    //������������ ������ ������
    Data_();//����������� �� ���������. ������� ����� ������
    Data_(Initials initials, std::string date, std::string addres_);//����������� � �����������. ������� ������ � �����������
    ~Data_();//����������. ������� ������

    //�� ������������ ������ (������ ��� ��� ���������� ������)
    void Print();
    void DataEntry(Initials initials_, std::string date_, std::string addres_);
    //����� ������ (�����) �� ������
    Initials GetInitials() { return initials; };
    std::string GetDate() { return date; };
    std::string GetAddress() { return address; };

    // �������������� ��������� =
    Data_& operator = (Data_ d_o);
};