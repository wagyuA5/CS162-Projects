#pragma once
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
#include "employee.h"
#include "executive.h"
#include "engineer.h"

employee::employee(int eid, string ename){
  emp_id = eid;
  emp_name = ename;
}

employee::employee(int eid, string ename, string egroup){
	emp_id = eid;
	emp_name = ename;
	emp_group = egroup;
}

string employee::getEmployeeName(){
	return emp_name;
}

int employee::getEmployeeID(){
  return emp_id;
}

string employee::getEmployeeGroup(){
	return emp_group;
}

void employee::print(){
   cout<<"New Employee Does NOT have a group as yet"<<endl;
  }
