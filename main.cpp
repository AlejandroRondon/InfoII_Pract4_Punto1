#include <iostream>     // std::cout
//#include <complex>      // std::complex
#include "Employ.h"
#include "Employ1.h"
#include "Employ2.h"
#include "Employ3.h"


using namespace std;
int main ()
{
    //intentar crear arreglo
    Employ1::fixSalary = 3000;
    Employ2::fixValueHour = 400;
    Employ3::base_salary = 500;

    Employ1 employ1("David","12345");       //constructor con 1 variable por defecto,con 2 variables especificadas
    Employ1 employ1_2;                      //constructor por defecto,llama a constructor po defecto padre
    Employ1 employ1_3("Joselito");          //constructor con 1 variable por defecto,con 1 variables especificadas
   cout << "\nEMPLOYES 1" <<endl;
    cout<<"Constructor especificando variables" << endl;
    employ1.printEmploy();
    cout<<"Constructor defecto(llama el del padre)" << endl;
    employ1_2.printEmploy();
    cout<<"Constructor especificando una variable" << endl;
    employ1_3.printEmploy();

    Employ2 employ2("Alejandro","56789");
        employ2.CalcSalary();
    Employ2 employ2_2;
        employ2_2.Sethours(2);
        employ2_2.CalcSalary();
    Employ2 employ2_3("andres","19756",8);
        employ2_3.CalcSalary();

    cout << "\nEMPLOYES 2" <<endl;
    cout<<"Constructor especificando 2 variables" << endl;
    employ2.printEmploy();
    cout<<"Constructor defecto(llama el del padre)" << endl;
    employ2_2.printEmploy();
    cout<<"Constructor especificando 3 variable" << endl;
    employ2_3.printEmploy();

    Employ3 employ3("Alejandro","56789");
        employ3.CalcSalary();
    Employ3 employ3_2;
        employ3_2.Setsales(500);
        employ3_2.CalcSalary();
    Employ3 employ3_3("lennis","19756",100);
        employ3_3.CalcSalary();

    cout << "\nEMPLOYES 3" <<endl;
    cout<<"Constructor especificando 2 variables" << endl;
    employ3.printEmploy();
    cout<<"Constructor defecto(llama el del padre)" << endl;
    employ3_2.printEmploy();
    cout<<"Constructor especificando 3 variable" << endl;
    employ3_3.printEmploy();


  return 0;
}
