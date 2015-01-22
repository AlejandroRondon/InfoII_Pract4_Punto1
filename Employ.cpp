#include "Employ.h"
#include <iostream>
using namespace std;
Employ::Employ()
{
    cout << "\nCreating Employ" <<endl;
    cout << "the name" <<endl;
    cin >> this->name;
    cout << "Enter the DNI" <<endl;
    cin >> this->dni;
    salary = 0;

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

void Employ::printEmploy(){
    cout<<"\nName: "<< name << endl;
    cout<<"DNI: "<< dni << endl;
    cout<<"Salary: "<< salary << endl;
}




