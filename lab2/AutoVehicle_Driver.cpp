#pragma once
#include <iostream>
#include <string>
using namespace std;
#include <iomanip>
#include "AutoVehicle.h"
#include "AutoTruck.h"

int main() {

	AutoVehicle a;
	AutoTruck Ford("Ford", "Silver", 56000, "Manual", 2);

//	Ford.setModel("Ford");
//	Ford.setTruckTransmission("Manual");
//	Ford.setMile(56000);
//	Ford.setModelColor("Silver");
//	Ford.setTruckSeats(2);

	cout << "AutoTruck Color: " << Ford.getModelColor() << endl;
	cout << "AutoTruck Transmission: " << Ford.getTruckTransmission() << endl;
	cout << "AutoTruck Mileage: " << Ford.getMile() << endl;
	cout << "AutoTruck Model: " << Ford.getModel() << endl;
	cout << "AutoTruck seats: " << Ford.getTruckSeats() << endl;

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
