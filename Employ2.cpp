#include "Employ2.h"

float Employ2::fixValueHour = 100;

float Employ2::CalcSalary(){
    salary = hours * fixValueHour;
    return salary;
}
float Employ2::Getsalary() {
    return salary;
    }
void Employ2::Setsalary(float val) {
    salary = val;
    }

int Employ2::Gethours(){
    return hours;
}

void Employ2::Sethours(int hours){
     this->hours = hours;
}
