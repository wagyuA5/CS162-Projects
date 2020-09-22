#include "house.h"
#include "apartment.h"
#pragma once
#include <iostream>
#include <string>
using namespace std;

apartment::apartment(string loc, string buildtype, int bath,
   int car, int year, int area, int floors){
  location = loc;
  apartment_building_type = buildtype;
  numofBathrooms = bath;
  numofCarsGarage = car;
  yearBuilt = year;
  finishedSquareFootage = area;
  number_of_floors = floors;
}
