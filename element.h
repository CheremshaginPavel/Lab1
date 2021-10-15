#pragma once
#include "fabric.h"

class element
{
private:
	fabric* obj;
	element* prev;
public:
	fabric* get_obj();
	element* get_prev();
	void set_obj(fabric* Obj);
	void set_prev(element* Prev);
};