#include "Employ1.h"
#include "Employ.h"
#include "iostream"
float Employ1::fixSalary =1000;

float Employ1::CalcSalary(){
    std::cout<<"No es valido calcular salario";
    salary = fixSalary;
    return salary;
}

float Employ1::Getsalary() {
    return salary;
    }
void Employ1::Setsalary(float val) {
    salary = val;
    }

