#pragma once
#include <iostream>
#include <string>
#include "student.h"
using namespace std;

student::student(string name, int id, double gpa){
  first_name = name;
  student_id = id;
  student_gpa = gpa;
}

void student::set_student_id(int id){
  student_id = id;
}

void student::set_student_name(string name){
  first_name = name;
}

void student::set_student_gpa(double grade){
  student_gpa = grade;
}

string student::get_student_name(){
  return first_name;
}

int student::get_student_id(){
  return student_id;
}

double student::get_student_gpa(){
  return student_gpa;
}

student update_student(student s){
  s.first_name = "Jane";
  s.student_id = 001;
  s.student_gpa = 3.9;

  return s;
}

void student::print_student_data(){
  cout << "Printing in parent class"<<endl;
  cout << "Student Name: " << first_name<<endl;
  cout << "Student ID: " << student_id<<endl;
  cout << "Student GPA: "<< student_gpa<<endl;
  cout << " " <<endl;
}
