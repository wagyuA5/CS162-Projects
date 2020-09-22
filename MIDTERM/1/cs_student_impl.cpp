#pragma once
#include <iostream>
#include <string>
#include "student.h"
#include "cs_student.h"
using namespace std;

cs_student::cs_student(string dept, string campus){
  student_dept = dept;
  student_campus = campus;
}

cs_student::cs_student(string name, int id, double gpa, string dept, string campus){
  first_name = name;
  student_id = id;
  student_gpa = gpa;
  student_dept = dept;
  student_campus = campus;
}

string cs_student::get_student_department(){
  return student_dept;
}

void cs_student::print_student_data(){
  cout<<"Function printed student_data from child class cs_student"<<endl;
  cout << "Student Name: " << first_name<<endl;
  cout << "Student ID: " << student_id<<endl;
  cout << "Student GPA: "<< student_gpa<<endl;
  cout << "Student Dept: "<<student_dept<<endl;
  cout << "Student Campus: "<< student_campus<<endl;
  cout << " " << endl;
}
