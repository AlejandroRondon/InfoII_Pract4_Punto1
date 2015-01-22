#ifndef EMPLOY1_H
#define EMPLOY1_H

#include "Employ.h"
class Employ1 : public Employ
{
    public:
        static  float fixSalary;
        Employ1(){
            salary = fixSalary;
        }

        Employ1(string name,string dni="none"):Employ(name,dni){
            salary = fixSalary;
        }
        float CalcSalary();   //from virtual class
        float Getsalary();
        void Setsalary(float);
    protected:

    private:


};

#endif // EMPLOY1_H
