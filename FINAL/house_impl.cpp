#include <iostream>
#include "house.h"
using namespace std;

house::house(string loc, int bed, int bath, int car, int year, int area){
  location = loc;
  numofBedrooms = bed;
  numofBathrooms = bath;
  numofCarsGarage = car;
  yearBuilt = year;
  finishedSquareFootage = area;
}

house update_house(house a){
  a.location = "Portland";
  a.numofBedrooms = 4;
  a.numofBathrooms = 3;
  a.numofCarsGarage = 2;
  a.yearBuilt = 2020;
  a.finishedSquareFootage = 4500;

  return a;
}

string house::get_location(){
  return location;
}

void house::house_type(){
  cout<<"Location: "<< location<<endl;
}
