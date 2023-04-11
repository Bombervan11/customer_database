#include "Data.h"

Data_::Data_() {

	initials.surname = "";
	initials.name = "";
	initials.patrinymic ="";

	
	date = "";
	address = "";
}

Data_::Data_(Initials initials_, std::string date_, std::string addres_) {

	initials.surname = initials_.surname;
	initials.name = initials_.name;
	initials.patrinymic = initials_.patrinymic;

	date = date_;
	address = addres_;
}

Data_::~Data_() {

}

void Data_::Print() {

	/*std::cout << "ПІБ: " << initials.surname << "" << initials.name << "" << initials.patrinymic << std::endl;
	std::cout << "Дата: " << date.day << " " << date.month << " " << date.year << std::endl;
	std::cout << "Адреса: " << address.city << " " << address.home << std::endl;*/
}
		
void Data_::DataEntry(Initials initials_, std::string date_, std::string addres_) {

	initials.surname = initials_.surname;
	initials.name = initials_.name;
	initials.patrinymic = initials_.patrinymic;

	date = date_;
	address = addres_;
}

Data_& Data_::operator=(Data_ d_o) {
		
	this->initials.surname = d_o.initials.surname;
	this->initials.name = d_o.initials.name;
	this->initials.patrinymic = d_o.initials.patrinymic;

	this->date = d_o.date;
	this->address = d_o.address;
	

	return *this;
}