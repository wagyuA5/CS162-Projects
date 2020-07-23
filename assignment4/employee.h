#pragma once
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class employee{
  protected:
  int emp_id;
  string emp_name;
  string emp_group;

  public:
  employee(){};
  employee(int, string);
  employee(int, string, string);

  void setEmployeeName(string);
  void setEmployeeID(int);
  void setEmployeeGroup(string);

  string getEmployeeName();
  int getEmployeeID();
  string getEmployeeGroup();

  virtual void print();

};
