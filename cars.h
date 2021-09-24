/*
	Для машины определено: 
	марка, 
	модель,
    гос.номер.
*/

#pragma once
#include <string>
#include "fabric.h"

using namespace std;

class cars : public fabric
{
private:
	string brand;
	string model;
	string state_number;
public:
	virtual void all_data() override;
	cars();
	cars(string brand, string model, string st_num);
	cars(const cars& Cars);
	~cars();
	string get_brand();
	void set_brand(string brand);
	string get_model();
	void set_model(string model);
	string get_state_number();
	void set_state_number(string state_number);
};