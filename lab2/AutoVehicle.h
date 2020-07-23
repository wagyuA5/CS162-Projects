#pragma once
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class AutoVehicle{


	protected:
	string av_color;
	string av_type;
	string av_model;
	int av_mileage;
	int av_num_tires;
	int av_model_year;

	public:

	AutoVehicle(){};
	AutoVehicle(string, string, string, int, int, int);

	void setModelColor(string color);
	void setModelType(string type);
	void setModel(string model);
	void setMile(int miled);
	void setNumTire(int numT);
	void setModelYear(int avyear);

	string getModelColor();
	string getModelType();
	string getModel();
	int getMile();
	int getNumTire();
	int getModelYear();

	void print();

};
