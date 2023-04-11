#pragma once

#include<iostream>
#include<string>
#include <fstream> 
#include <windows.h>


/*
    Дані:
         1. ПІБ
         2. Дата
         3. Адреса
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

//прототип класса
class Data_
{
    // закрытая часть класса (поля класса)
private:
    Initials initials;
    std::string date;
    std::string address;

    //открытая часть класса
public:
    //обязательные методы класса
    Data_();//конструктор по умолчанию. Создает пусто объект
    Data_(Initials initials, std::string date, std::string addres_);//конструктор с параметрами. Создает объект с параметрами
    ~Data_();//деструктор. Удлаяет объект

    //не обязательные методы (нужные нам для выполнения задния)
    void Print();
    void DataEntry(Initials initials_, std::string date_, std::string addres_);
    //вывод данных (полей) из класса
    Initials GetInitials() { return initials; };
    std::string GetDate() { return date; };
    std::string GetAddress() { return address; };

    // Перевантаження оператора =
    Data_& operator = (Data_ d_o);
};