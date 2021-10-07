#include "cars.h"
#include <iostream>
#include <cstring>

using namespace std;

void cars::all_data() 
{
	cout << brand << endl;
	cout << model << endl;
	cout << state_number << endl;
}

void cars::all_set()
{
	while (1)
	{
		system("cls");
		cout << "Введите бренд автомобиля: ";
		cin >> brand;
		if (excep(brand) == -2 || excep(brand) == -3)
			continue;
	}
	while(1)
	{
		system("cls");
		cout << "Введите модель автомобиля: ";
		cin >> model;
		if (excep(model) == -2 || excep(model) == -3)
			continue;
	}
	while (1)
	{
		system("cls");
		cout << "Введите гос. номер автомобиля: ";
		cin >> state_number;
		if (excep(model) == -2 || excep(model) == -3)
			continue;
	}
}

cars::cars() 
{
	brand = "Untitled";
	model = "Untitled";
	state_number = "Untitled";
}

cars::cars(string brand, string model, string st_num) 
{
	this->brand = brand;
	this->model = model;
	this->state_number = st_num;
}

cars::cars(const cars& Cars) : brand(Cars.brand), model(Cars.model), state_number(Cars.state_number) {}
int cars::excep(string line)
{
	try
	{
		if (line.empty())
			throw -2;
		if (line.find(" "))
			throw -3;
	}
	catch (int a)
	{
		switch (a)
		{
		case -2:
		{
			cout << "Название нельзя оставлять пустым!!!" << endl;
			system("pause");
			return -2;
		}
		case -3:
		{
			cout << "В названии нельзя использовать пробелы!" << endl;
			system("pause");
			return -3;
		}
		default:
		{
			cout << "Что-то пошло не так!" << endl;
			system("pause");
			break;
		}
		}
	}
	return 0;
}
cars::~cars() {}


