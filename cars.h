/*
	Для машины определено: 
	марка, 
	модель,
    гос.номер.
*/

#pragma once
#include <string>

using namespace std;

class cars
{
private:
	string brand;
	string model;
	string state_number;
public:
	string get_brand();
	void set_brand(string brand);
	string get_model();
	void set_model(string model);
	string get_state_number();
	void set_state_number(string state_number);
};