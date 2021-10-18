#include "cars.h"
#include <iostream>
#include <cstring>

using namespace std;

void cars::all_data() 
{
	cout << "Бренд: " << brand << endl;
	cout << "Модель: " << model << endl;
	cout << "Гос. номер: " << state_number << endl;
}

void cars::all_set()
{
	while (1)
	{
		system("cls");
		cout << "Введите бренд автомобиля: ";
		cin >> brand;
		if (excep(brand) == -2)
			continue;
		break;
	}
	while(1)
	{
		system("cls");
		cout << "Введите модель автомобиля: ";
		cin >> model;
		if (excep(model) == -2)
			continue;
		break;
	}
	while (1)
	{
		system("cls");
		cout << "Введите гос. номер автомобиля: ";
		cin >> state_number;
		if (excep(model) == -2)
			continue;
		break;
	}
}

void cars::all_recover(ifstream& fin)
{
	string line;
	for (int i = 0; i < 3; i++)
	{
		getline(fin, line);
		switch (i)
		{
		case 0:
		{
			brand = line;
			break;
		}
		case 1:
		{
			model = line;
			break;
		}
		case 2:
		{
			state_number = line;
			break;
		}
		default:
		{
			break;
		}
		}
	}
}

void cars::all_save(ofstream& out)
{
	out << 1 << endl;
	out << brand << endl;
	out << model << endl;
	out << state_number << endl;
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


