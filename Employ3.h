#ifndef EMPLOY3_H
#define EMPLOY3_H

#include "Employ.h"

class Employ3 : public Employ
{
    public:
        static float base_salary;
        Employ3(){
            sales=0;
        }
        Employ3(string name,string dni = "none", float sales = 0):Employ(name,dni){
            salary=0;
            this->sales = sales;
        }
        float CalcSalary();   //from virtual class
        float Getsalary();
        void Setsalary(float);
        float Getsales();
        void Setsales(float);

    protected:

    private:
        float sales;

};

#endif // EMPLOY3_H
