#include <iostream>
#include "university.h"
using namespace std;

university::university(string name, string location, int size){
  univ_name = name;
  univ_location = location;
  num_students = size;
}

void university::set_univ_name(string x){
  univ_name = x;
}

void university::set_univ_location(string x){
  univ_location = x;
}

void university::set_num_students(int x){
  num_students = x;
}

string university::get_univ_name(){
  return univ_name;
}

string university::get_univ_location(){
  return univ_location;
}

int university::get_num_students(){
  return num_students;
}

void university::print_data(){
  cout << "University Name: " << univ_name << endl;
  cout << "University Location: " << univ_location << endl;
  cout << "Student Size: " << num_students << endl;
}
