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
#include "fabric.h"

using namespace std;

class workers : public fabric
{
private:
	string FIO;
	string post;
	int salary;
	string home_addr;
	string phone_number;
public:
	virtual void all_data() override;
	virtual void all_set() override;
	virtual void all_recover(ifstream& in) override;
	virtual void all_save(ofstream& out) override;
	workers();
	workers(string f, string p, int s, string h, string ph);
	workers(const workers& Workers);
	~workers();
	int excep(string line);
	int excep_dec(int value);
};