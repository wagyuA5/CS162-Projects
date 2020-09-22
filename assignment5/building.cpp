#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct building{
 string building_type;
 string building_location;
 int* number_of_floors;

 void setNumberOfFloors(int* floors){
 	number_of_floors = floors;
 }

 int getNumberOfFloors(){
   return *number_of_floors;
 }

};

void init_apartment_complex(building* apart){
  static int num_floors = 4;
  int* flrs = &num_floors;

  apart->building_type = "Condo";
  apart->building_location = "Portland";
  apart->setNumberOfFloors(flrs);
}

void print_building(building* apart){
 cout<<"Apartment Type = "<<(*apart).building_type<<endl;
 cout<<"Apartment Location = "<<apart->building_location<<endl;
 cout<<"Number of Floors = "<<apart->getNumberOfFloors()<<endl;
}


int main(){

  building *apartment_complex = nullptr;
  building high_rise;
  apartment_complex = &high_rise;

  init_apartment_complex(apartment_complex);
  print_building(apartment_complex);
  return 0;

}
