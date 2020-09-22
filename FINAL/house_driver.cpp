#include <iostream>
#include <string>
using namespace std;
#include "house.h"
#include "apartment.h"

int main(){
  house new_house("Chicago", 4, 3, 2, 2020, 4500);
  house* old_house = nullptr;
  apartment new_apartment("Boston","Office Building",40, 3,2,2020,4500);

  new_house = update_house(new_house.get_object());
  cout<<"House Location = "<<new_house.get_location()<<endl;

  old_house = &new_apartment;
  old_house->house_type();
  return 0;
}
