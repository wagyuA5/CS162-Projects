using namespace std;
#pragma once
#include <iostream>
#include <string>
#include <iomanip>
#include "employee.h"
#include "engineer.h"
#include "executive.h"

engineer::engineer(int eid, string ename, string egroup, string etype,
   string engloc){
    emp_id = eid;
    emp_name = ename;
    emp_group = egroup;
    engineer_type = etype;
    engineer_location = engloc;
   }

string engineer::getEngineerType(){
  return engineer_type;
}

string engineer::getEngineerLoc(){
  return engineer_location;
}

void engineer::print(){
  cout<<"New Employee is in the Engineering group"<<endl;
}
