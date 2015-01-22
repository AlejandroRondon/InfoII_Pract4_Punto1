#ifndef EMPLOY2_H
#define EMPLOY2_H


#include "Employ.h"

class Employ2 : public Employ
{
    public:
        static  float fixValueHour;
        Employ2(){
            salary=0;
            hours =0;
        }
        Employ2(string name,string dni="12387",int hours = 5):Employ(name,dni){
            salary=0;
            this->hours = hours;

        }
        float CalcSalary();   //from virtual class
        float Getsalary();
        void Setsalary(float);

        int Gethours();
        void Sethours(int);

    protected:

    private:

        int hours;

};

#endif // EMPLOY2_H
