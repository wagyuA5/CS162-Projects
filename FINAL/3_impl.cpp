#pragma once
#include "3.h"
#include <iostream>
#include <string>
using namespace std;


addressType::addressType(string streeta, string citya, string statea, int zipa){
  street = streeta;
  city = citya;
  state = statea;
  zip = zipa;
}

void addressType::print(){
  cout << "Street: " << street<<endl;
  cout << "City: "<< city<<endl;
  cout << "State: "<< state<<endl;
  cout << "Zip: " << zip<<endl;
}
