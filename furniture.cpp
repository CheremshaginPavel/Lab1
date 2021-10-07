#include "furniture.h"
#include <iostream>
#include <cstring>
using namespace std;

void furniture::all_data()
{
	cout << type << endl;
	cout << dimensions << endl;
	cout << color << endl;
	cout << material << endl;
	cout << cost << endl;
}

void furniture::all_set()
{
	while (1)
	{
		system("cls");
		cout << "Введите тип мебели: ";
		cin >> type;
		if (excep(type) == -2 || excep(type) == -3)
			continue;
	}
	while (1)
	{
		system("cls");
		cout << "Введите тип размеры мебели (ДхШхВ без пробелов! (мм)): ";
		cin >> dimensions;
		if (excep(dimensions) == -2 || excep(dimensions) == -3)
			continue;
	}
	while (1)
	{
		system("cls");
		cout << "Введите цвет мебели: ";
		cin >> color;
		if (excep(color) == -2 || excep(color) == -3)
			continue;
	}
	while (1)
	{
		system("cls");
		cout << "Введите материал мебели: ";
		cin >> material;
		if (excep(material) == -2 || excep(material) == -3)
			continue;
	}
	while (1)
	{
		system("cls");
		cout << "Введите стоимость мебели: ";
		cin >> cost;
		if (excep_dec(cost) == 1 || excep_dec(cost) == -4)
			continue;
	}
}

furniture::furniture()
{
	type = "No information";
	dimensions = "No information";
	color = "No information";
	material = "No information";
	cost = 0;
}

furniture::furniture(string t, string d, string c, string m, int ct)
{
	type = t;
	dimensions = d;
	color = c;
	material = m;
	cost = ct;
}

furniture::furniture(const furniture& fur) : 
type(fur.type), dimensions(fur.dimensions), color(fur.color), material(fur.material), cost(fur.cost) {}

furniture::~furniture() {}

int furniture::excep(string line)
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
		case -4:
		{
			cout << "Стоимость не может быть отрицательной!!!" << endl;
			system("pause");
			return -4;
		}
		case -3:
		{
			cout << "В данном поле не должно быть пробелов!" << endl;
			system("pause");
			return -3;
		}
		case -2:
		{
			cout << "Данное поле не может быть пустым!!!" << endl;
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

int furniture::excep_dec(int value)
{
	try
	{
		if (!cin.good())
		{
			cout << "Вы вводите неправильные данные! Попробуйте еще раз!" << endl;
			system("pause");
			cin.clear();
			while (cin.get() != '\n');
			return 1;
		}
		if (cost < 0)
			throw -4;
	}
	catch (int)
	{
		cout << "Стоимость не может быть отрицательной!!!" << endl;
		system("pause");
		return -4;
	}
	return 0;
}
