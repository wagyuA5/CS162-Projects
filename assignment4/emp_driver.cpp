
#pragma once
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
#include "employee.h"
#include "engineer.h"
#include "executive.h"


int main(){

 employee *ee;
 employee *itech;
 employee *new_employee;
 employee *output1;
 employee *output2;

 employee hr(10651262,"Jeff");
 employee info_tech(10000111, "Louie", "Information Technology");
 engineer new_engineer(10651262, "Tim", "Software", "Computer Scientist", "Phoenix");
 employee example1(123, "Joe", "Engineering");
 executive example2(133, "Nancy", "Executive Officer", 10, 1.9, "Chief", "New York");

 new_employee = &new_engineer;
 ee=&hr;
 itech=&info_tech;
 output1 = &example1;
 output2 = &example2;

 cout<<setw(15)<<setfill('*')<<""<<endl;

 cout<<"HR Employee ID = "<<(*ee).getEmployeeID()<<endl;
 cout<<"HR Employee Name = "<<ee->getEmployeeName()<<endl;

 cout<<setw(15)<<setfill('*')<<""<<endl;

 cout<<"IT Employee ID = "<<itech->getEmployeeID()<<endl;
 cout<<"IT Employee Name = "<<itech->getEmployeeName()<<endl;
 cout<<"IT Employee Group = "<<itech->getEmployeeGroup()<<endl;

 cout<<setw(15)<<setfill('*')<<""<<endl;

 cout<< "New Employee is in "<<output1->getEmployeeGroup()<< " Group"<<endl;

 cout<<setw(15)<<setfill('*')<<""<<endl;

 output2->print();
 return 0;
}
