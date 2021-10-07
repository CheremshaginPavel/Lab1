#include "keeper.h"
#include <iostream>
#include <fstream>

Keeper::Keeper() { tail = nullptr; size = 0; }

Keeper::Keeper(element* Tail, int Size) { tail = Tail; size = Size; }

Keeper::Keeper(const Keeper& keeper) : size(keeper.size), tail(keeper.tail) {}

Keeper::~Keeper()
{
	while (size > 0)
	{
		element* obj = tail;
		tail = obj->get_prev();
		delete[] obj;
		size--;
	}
	tail = NULL;
}

int Keeper::get_size() { return size; }

int Keeper::pop()
{
	element* tmp = this->tail;

	if (!(this->isempty()))
		return 0;

	if (this->size == 1)
	{
		tmp->set_obj(nullptr);
		tail = nullptr;
		size = 0;
		return 1;
	}

	while (tmp->get_prev()->get_prev() != 0)
		tmp = tmp->get_prev();

	element* pop = tmp->get_prev();
	tmp->set_prev(nullptr);
	delete pop;
	size--;
	return 1;
}

void Keeper::push(fabric* obj)
{
	element* newElem = new(element);
	newElem->set_prev(this->tail);
	newElem->set_obj(obj);
	this->tail = newElem;
	size++;
}

int Keeper::save_all(Keeper& keeper)
{
	string path = "base.txt";
	ofstream fout;
	fout.open(path, ofstream::app);

	if (!fout.is_open())
		return 2;
	else
	{
		fout.write((char*)&keeper, sizeof(Keeper));
	}
	fout.close();
	return 1;
}

int recover_all(Keeper& keeper)
{
	string path = "base.txt";
	ifstream fin;
	fin.open(path);

	if (!fin.is_open())
		return 2;
	else
	{
		
	}
	fin.close();
	return 1;
}

bool Keeper::isempty() { return size > 0 ? true : false; }