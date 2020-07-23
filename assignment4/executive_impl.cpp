#pragma once
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
#include "employee.h"
#include "executive.h"
#include "engineer.h"


executive::executive(int eid, string ename, string egroup, int eduration, double ecompensation,
string etype, string elocation){
  emp_id = eid;
  emp_name = ename;
  emp_group = egroup;
  exec_employment_duration = eduration;
  executive_compensation = ecompensation;
  executive_type = ecompensation;
  executive_location = elocation;
}

int executive::getExecutiveEmploymentDuration(){
  return exec_employment_duration;
}

double executive::getExecutiveCompensation(){
  return executive_compensation;
}

string executive::getExecutiveType(){
  return executive_type;
}

string executive::getExecutiveLocation(){
  return executive_location;
}

void executive::print(){
  cout<<"This Employee is the Chief Executive Offficer of the Company and is a member of the Executive Suite based in New York"<<endl;
}
