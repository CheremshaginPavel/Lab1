#pragma once
#include <iostream>
#include <fstream>

using namespace std;

class fabric
{
public:
	virtual void all_data() = 0;
	virtual void all_set() = 0;
	virtual void all_save(ofstream& out) = 0;
	virtual void all_recover(ifstream& in) = 0;
	virtual ~fabric();
};
