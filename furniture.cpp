#include "furniture.h"
#include <iostream>
using namespace std;

void furniture::all_data()
{
	cout << type << endl;
	cout << dimensions << endl;
}

string furniture::get_type() { return type; }

void furniture::set_type(string type) { this->type = type; }

string furniture::get_dimensions() { return dimensions; }

void furniture::set_dimensions(string dimensions) { this->dimensions = dimensions; }

string furniture::get_color() { return color; }

void furniture::set_color(string color) { this->color = color; }

string furniture::get_material() { return material; }

void furniture::set_material(string material) { this->material = material; }

int furniture::get_cost() { return cost; }

void furniture::set_cost(int cost) { this->cost = cost; }
