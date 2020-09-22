#pragma once
#include <iostream>
#include <string>
#include "student.h"
using namespace std;



class cs_student:public student{

 string student_dept;
 string student_campus;

 public:
 cs_student(){};
 cs_student(string, string);
 cs_student(string,int,double,
 	string,string);

 void set_student_dept(int);
 string get_student_department();
 void print_student_data();

};
