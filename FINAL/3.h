#pragma once
#include <iostream>
#include <string>
using namespace std;

class addressType{
  protected:
  string street;
  string city;
  string state;
  int zip;
  public:
  addressType(){};
  addressType(string, string, string, int);


  void print();
};
