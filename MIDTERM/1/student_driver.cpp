#pragma once
#include <iostream>
#include <string>
#include "student.h"
#include "cs_student.h"
using namespace std;

void init_student_info(student s){
  s.set_student_id(002);
  s.set_student_name("Joe");
  s.set_student_gpa(1.9);

  s.print_student_data();
}

student* update_student_data(student* s){
  s->set_student_gpa(3.4);
  return s;
}

int main(){
  student* junior;
  student* pcc_student = nullptr;
  student sophmore;
  student senior;

  cs_student cs_junior("Nicole",101,3.5,"Computer Science","Portland");
  junior = &cs_junior;

  junior->print_student_data();

  sophmore = update_student(sophmore);
  sophmore.print_student_data();

  init_student_info(senior);

  update_student_data(pcc_student);

  return 0;
}
