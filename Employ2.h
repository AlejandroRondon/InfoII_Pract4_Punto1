#ifndef EMPLOY2_H
#define EMPLOY2_H


#include "Employ.h"

class Employ2 : public Employ
{
    public:
        Employ2(string name,string dni):Employ(name,dni){
        }
        int CalcSalary();   //from virtual class
        float Getsalary();
        void Setsalary(float);
    protected:
        float salary;
    private:

};

#endif // EMPLOY2_H
