/*
	Для работника определено: 
	ФИО,
	должность, 
	заработная плата,
    адрес проживания, 
	телефон.
*/
#pragma once
#include <string>
using namespace std;

class workers
{
private:
	string FIO;
	string post;
	int salary;
	string home_addr;
	string phone_number;
public:
	string get_FIO();
	void set_FIO(string FIO);
	string get_post();
	void set_post(string post);
	int get_salary();
	void set_salary(int salary);
	string get_home_addr();
	void set_home_addr(string home_addr);
	string get_phone_number();
	void set_phone_number(string phone_number);
};