#pragma once
#include "cars.h"
#include "fabric.h"
#include "workers.h"
#include "furniture.h"
#include "element.h"

using namespace std;

class Keeper
{
private:
	element* tail;
	int size;
public:
	Keeper();
	Keeper(element* Tail, int Size);
	Keeper(const Keeper& keeper);
	int get_size();
	int pop();
	int pop_cust(fabric* obj);
	void push(fabric* obj);
	int save_all(Keeper& keeper);
	int recover_all(Keeper& keeper);
	bool isempty();
	~Keeper();
};