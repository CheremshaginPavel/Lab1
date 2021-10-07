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
	virtual void all_set() override;
	cars();
	cars(string brand, string model, string st_num);
	cars(const cars& Cars);
	int excep(string line);
	~cars();
};