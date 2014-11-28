#ifndef EMPLOY1_H
#define EMPLOY1_H

#include "Employ.h"
class Employ1 : public Employ
{
    public:
        Employ1(string name,string dni):Employ(name,dni){
        }
        int CalcSalary();   //from virtual class
        float Getsalary();
        void Setsalary(float);
    protected:
        float salary;
    private:

};

#endif // EMPLOY1_H
