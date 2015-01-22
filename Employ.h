#ifndef EMPLOY_H
#define EMPLOY_H

#include <string>
using namespace std;
class Employ
{

    public:
        Employ();
        Employ(string name,string dni);

        string Getname() { return name; }
        string Getdni() { return dni; }
        void Setname(string);
        void Setdni(string);
        void printEmploy();



        virtual float CalcSalary()=0;

    protected:
        string name;
        string dni;
        float salary;
    private:

};

#endif // EMPLOY_H
