#ifndef EMPLOY3_H
#define EMPLOY3_H

#include "Employ.h"

class Employ3 : public Employ
{
    public:
        Employ3(string name,string dni):Employ(name,dni){
        }
        int CalcSalary();   //from virtual class
        float Getsalary();
        void Setsalary(float);
    protected:
        float salary;
    private:

};

#endif // EMPLOY3_H
