#include "furniture.h"
#include <iostream>
#include <cstring>
using namespace std;

void furniture::all_data()
{
	cout << "���: " << type << endl;
	cout << "�������: " << dimensions << endl;
	cout << "����: " << color << endl;
	cout << "��������: " << material << endl;
	cout << "����: " << cost << endl;
}

void furniture::all_set()
{
	while (1)
	{
		system("cls");
		cout << "������� ��� ������: ";
		cin >> type;
		if (excep(type) == -2)
			continue;
		break;
	}
	while (1)
	{
		system("cls");
		cout << "������� ������� ������ (����� ��� ��������! (��)): ";
		cin >> dimensions;
		if (excep(dimensions) == -2)
			continue;
		break;
	}
	while (1)
	{
		system("cls");
		cout << "������� ���� ������: ";
		cin >> color;
		if (excep(color) == -2)
			continue;
		break;
	}
	while (1)
	{
		system("cls");
		cout << "������� �������� ������: ";
		cin >> material;
		if (excep(material) == -2)
			continue;
		break;
	}
	while (1)
	{
		system("cls");
		cout << "������� ��������� ������: ";
		cin >> cost;
		if (excep_dec(cost) == 1 || excep_dec(cost) == -4)
			continue;
		break;
	}
}

void furniture::all_recover(ifstream& in)
{
	
}

void furniture::all_save(ofstream& out)
{
	out << 3 << endl;
	out << type << endl;
	out << dimensions << endl;
	out << color << endl;
	out << material << endl;
	out << cost << endl << endl;
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
	}
	catch (int a)
	{
		switch (a)
		{
		case -2:
		{
			cout << "������ ���� �� ����� ���� ������!!!" << endl;
			system("pause");
			return -2;
		}
		default:
		{
			cout << "���-�� ����� �� ���!" << endl;
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
			cout << "�� ������� ������������ ������! ���������� ��� ���!" << endl;
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
		cout << "��������� �� ����� ���� �������������!!!" << endl;
		system("pause");
		return -4;
	}
	return 0;
}
