#include <iostream>
#include "university.h"
#include "uoregon.h"
using namespace std;

uoregon::uoregon(string name, string location, int size, string dept, string dept_building){
  univ_name = name;
  univ_location = location;
  num_students = size;
  univ_dept = dept;
  univ_dept_building = dept_building;
}

void uoregon::set_univ_dept(string x){
  univ_dept = x;
}

void uoregon::set_univ_dept_building(string x){
  univ_dept_building = x;
}

string uoregon::get_univ_dept(){
  return univ_dept;
}

string uoregon::get_univ_dept_building(){
  return univ_dept_building;
}

void uoregon::print_data(){
  cout << "University Name: " << univ_name << endl;
  cout << "University Location: " << univ_location << endl;
  cout << "Student Size: " << num_students << endl;
  cout << "University Dept: " << univ_dept << endl;
  cout << "University Dept Building: " << univ_dept_building << endl;
}
