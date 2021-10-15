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
#include "fabric.h"

using namespace std;

class furniture : public fabric
{
private:
    string type;
    string dimensions;
    string color;
    string material;
    int cost;
public:
    virtual void all_data() override;
    virtual void all_set() override;
    virtual void all_recover(ifstream& in) override;
    virtual void all_save(ofstream& out) override;
    furniture();
    furniture(string t, string d, string c, string m, int ct);
    furniture(const furniture& fur);
    ~furniture();
    int excep(string line);
    int excep_dec(int value);
};