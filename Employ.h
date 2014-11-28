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
        void Setname(string);
        void Setdni(string);

        string Getdni() { return dni; }


        virtual int CalcSalary()=0;

    protected:
        string name;
        string dni;
    private:

};

#endif // EMPLOY_H
