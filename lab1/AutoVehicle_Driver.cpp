#pragma once
#include <iostream>
#include <string>
using namespace std;
#include <iomanip>
#include "AutoVehicle.h"
#include "AutoTruck.h"

int main() {

	AutoVehicle a;
	AutoTruck FordTruck("Silver", "Manual", "Ford", 56000, 2);

	cout << "AutoTruck Color: " << FordTruck.getModelColor << endl;
	cout << "AutoTruck Transmission: " << FordTruck.getTruckTranmission << endl;
	cout << "AutoTruck Mileage: " << FordTruck.getMile << endl;
	cout << "AutoTruck Model: " << FordTruck.getModel << endl;
	cout << "AutoTruck Seats: " << FordTruck.getTruckSeats << endl;

	a.setModelColor("Blue");
	a.setModel("Prius");
	a.setModelType("electric");
	a.setMile(5000);
	a.setNumTire(4);
	a.setModelYear(2020);

	cout << "av_model = " << a.getModel() << endl;
	cout << "av_color = " << a.getModelColor() << endl;
	cout << "av_type = " << a.getModelType() << endl;
	cout << "int av_mileage = " << a.getMile() << endl;
	cout << "int av_num_tires = " << a.getNumTire() << endl;
	cout << "int av_model_year = " << a.getModelYear() << endl;

	return 0;
}
