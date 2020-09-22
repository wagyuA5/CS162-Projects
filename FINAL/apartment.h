#include <iostream>
#include <string>
using namespace std;
#include "house.h"

class apartment:public house{
  friend apartment update_apartments(apartment);
  string apartment_building_type;
  int number_of_floors;
  public:
  apartment(){};
  apartment(string,string,int,int,int,int,int);
  void house_type();
};
