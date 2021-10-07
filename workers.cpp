#include "workers.h"
#include <iostream>

using namespace std;

void workers::all_data()
{
	cout << FIO << endl;
	cout << post << endl;
	cout << salary << endl;
	cout << home_addr << endl;
	cout << phone_number << endl;
}

void workers::all_set()
{
	while (1)
	{
		system("cls");
		cout << "������� ��� ����������: ";
		cin >> FIO;
		if (excep(FIO) == -2 || excep(FIO) == -3)
			continue;
	}
	while (1)
	{
		system("cls");
		cout << "������� ��������� ����������: ";
		cin >> post;
		if (excep(post) == -2 || excep(post) == -3)
			continue;
	}
	while (1)
	{
		system("cls");
		cout << "������� �������� ����������: ";
		cin >> salary;
		if (excep_dec(salary) == 1 || excep_dec(salary) == -4)
			continue;
	}
	while (1)
	{
		system("cls");
		cout << "������� �������� ����� ���������� (������ �������� ������ �������������!): ";
		cin >> home_addr;
		if (excep(home_addr) == -2 || excep(home_addr) == -3)
			continue;
	}
	while (1)
	{
		system("cls");
		cout << "������� ����� �������� ���������� (������): ";
		cin >> phone_number;
		if (excep(phone_number) == -2 || excep(phone_number) == -3)
			continue;
	}
}

workers::workers()
{
	FIO = "Unnamed";
	post = "No information";
	salary = 0;
	home_addr = "No information";
	phone_number = "No information";

}

workers::workers(string f, string p, int s, string h, string ph)
{
	FIO = f;
	post = p;
	salary = s;
	home_addr = h;
	phone_number = ph;
}

workers::workers(const workers& Workers) :
	FIO(Workers.FIO), post(Workers.post), salary(Workers.salary), home_addr(Workers.home_addr), phone_number(Workers.phone_number) {}

workers::~workers() {}

int workers::excep(string line)
{
	try
	{
		if (line.empty())
			throw - 2;
		if (line.find(" "))
			throw - 3;
	}
	catch (int a)
	{
		switch (a)
		{
		case -4:
		{
			cout << "��������� �� ����� ���� �������������!!!" << endl;
			system("pause");
			return -4;
		}
		case -3:
		{
			cout << "� ������ ���� �� ������ ���� ��������!" << endl;
			system("pause");
			return -3;
		}
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

int workers::excep_dec(int value)
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
		if (salary < 0)
			throw - 4;
	}
	catch (int)
	{
		cout << "���������� ����� �� ����� ���� �������������!!!" << endl;
		system("pause");
		return -4;
	}
	return 0;
}


