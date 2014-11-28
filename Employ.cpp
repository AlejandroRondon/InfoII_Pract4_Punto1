#include "Employ.h"
#include <iostream>
using namespace std;
Employ::Employ()
{
    cout << "Enter the name" <<endl;
    cin >> this->name;
    cout << "Enter the DNI" <<endl;
    cin >> this->dni;

}
Employ::Employ(string name,string dni)
{
    this->name = name;
    this->dni = dni;

}

void Employ::Setname(string val) {
    name = val;
    }

void Employ::Setdni(string val) {
    dni = val;
    }



