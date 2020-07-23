#pragma once
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
#include "AutoVehicle.h"
#include "AutoTruck.h"

AutoTruck::AutoTruck(string truck_transmission, int truck_seats){
  truck_transmission_type = truck_transmission;
  truck_num_seats = truck_seats;
}

AutoTruck::AutoTruck(string truck_model, string truck_color, int truck_mileage,
  string truck_transmission, int truck_seats){
    av_color = truck_color;
    truck_transmission_type = truck_transmission;
    av_model = truck_model;
    av_mileage = truck_mileage;
    truck_num_seats = truck_seats;
}

string AutoTruck::getTruckTransmission(){
  return truck_transmission_type;
}

int AutoTruck::getTruckSeats(){
  return truck_num_seats;
}
