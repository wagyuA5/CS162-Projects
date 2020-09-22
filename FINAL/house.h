#pragma once
#include <iostream>
using namespace std;
#include <string>

class house{

  friend house update_house(house);
  protected:
  string location;
  int numofBedrooms;
  int numofBathrooms;
  int numofCarsGarage;
  int yearBuilt;
  int finishedSquareFootage;

  public:
  house(){};
  house(string,int,int,int,int,int);
  string get_location();
  house get_object(){
   return *this;
  }
  void house_type();
};
