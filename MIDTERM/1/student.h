#pragma once
#include <iostream>
#include <string>
using namespace std;

class student{
 
 friend student update_student
  (student s);

 protected:
 string first_name;
 int student_id;
 double student_gpa;

 public:
 student(){};
 student(string,int,double);

 
 void set_student_name(string);
 string get_student_name();
 
 void set_student_id(int);
 int get_student_id();

 void set_student_gpa(double);
 double get_student_gpa();



 virtual void print_student_data();

};