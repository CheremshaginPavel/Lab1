/*
    Для мебели определено: 
    тип мебели, 
    габариты (высота, ширина, глубина), 
    цвет, 
    материал,
    стоимость.
*/

#pragma once
#include <string>

using namespace std;

class furniture
{
private:
    string type;
    string dimensions;
    string color;
    string material;
    int cost;
public:
    string get_type();
    void set_type(string type);
    string get_dimensions();
    void set_dimensions(string dimensions);
    string get_color();
    void set_color(string color);
    string get_material();
    void set_material(string material);
    int get_cost();
    void set_cost(int cost);
};