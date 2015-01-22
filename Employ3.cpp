#include "Employ3.h"

float Employ3::base_salary=0;

float Employ3::CalcSalary(){
    salary = base_salary + 0.3*sales;
    return salary;
}
float Employ3::Getsalary() {
    return salary;
    }
void Employ3::Setsalary(float val) {
    salary = val;
    }

float Employ3::Getsales(){
    return sales;
}
void Employ3::Setsales(float sales){
    this->sales = sales;
}


