#include "workers.h"
#include <iostream>

using namespace std;

void workers::all_data()
{
	cout << FIO << endl;
	cout << post << endl;
	cout << salary << endl;
	cout << home_addr << endl;
	cout << phone_number << endl;
}

string workers::get_FIO() { return FIO; }

void workers::set_FIO(string FIO) { this->FIO = FIO; }

string workers::get_post() { return post; }

void workers::set_post(string post) { this->post = post; }

int workers::get_salary() { return salary; }

void workers::set_salary(int salary) { this->salary = salary; }

string workers::get_home_addr() { return home_addr; }

void workers::set_home_addr(string home_addr) { this->home_addr = home_addr; }

string workers::get_phone_number() { return phone_number; }

void workers::set_phone_number(string phone_number) { this->phone_number = phone_number; }