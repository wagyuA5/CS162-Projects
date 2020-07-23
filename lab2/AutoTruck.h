#pragma once
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
#include "AutoVehicle.h"

class AutoTruck: public AutoVehicle{

  public:
    string truck_transmission_type;
    int truck_num_seats;

    AutoTruck(){};
    AutoTruck(string truck_transmission, int truck_seats);
    AutoTruck(string truck_model, string truck_color, int truck_mileage,
      string truck_transmission, int truck_seats);

    void print();
    void setTruckTransmission(string ttrans);
    void setTruckSeats(int tseats);

    string getTruckTransmission();
    int getTruckSeats();

};
