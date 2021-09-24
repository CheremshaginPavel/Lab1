#include "cars.h"
#include <iostream>

using namespace std;

void cars::all_data() {

}

cars::cars() {
	brand = "Untitled";
	model = "Untitled";
	state_number = "Untitled";
}

cars::cars(string brand, string model, string st_num) {
	this->brand = brand;
	this->model = model;
	this->state_number = st_num;
}

cars::cars(const cars& Cars) : brand(Cars.brand), model(Cars.model), state_number(Cars.state_number) {}
cars::~cars() {

}

string cars::get_brand() { return brand; }

void cars::set_brand(string brand) { this->brand = brand; }

string cars::get_model() { return model; }

void cars::set_model(string model){ this->model = model; }

string cars::get_state_number() { return state_number; }

void cars::set_state_number(string state_number) { this->state_number = state_number; }
