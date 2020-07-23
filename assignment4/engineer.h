#pragma once
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
#include "employee.h"



class engineer: public employee{
  string engineer_type;
  string engineer_location;

  public:
  engineer(){};
  engineer(int, string, string, string, string);

  void setEngineerType(string et);
  void setEngineerLoc(string eloc);

  string getEngineerType();
  string getEngineerLoc();

  void print();

};
