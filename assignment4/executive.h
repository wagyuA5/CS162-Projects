#pragma once
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


class executive: public employee{
  int exec_employment_duration;
  double executive_compensation;
  string executive_type;
  string executive_location;

  public:
  executive(){};
  executive(int eid, string ename, string egroup, int eduration, double ecompensation,
  string etype, string elocation);

  void setExecutiveEmploymentDuration(int);
  void setExecutiveCompensation(double);
  void setExecutiveType(string);
  void setExecutiveLocation(string);

  int getExecutiveEmploymentDuration();
  double getExecutiveCompensation();
  string getExecutiveType();
  string getExecutiveLocation();

  void print();


};
