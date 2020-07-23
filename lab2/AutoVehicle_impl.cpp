#include <iomanip>
#include <iostream>
#include <string>
#include "AutoVehicle.h"
#pragma once
using namespace std;

void AutoVehicle::setModelColor(string color) {
	av_color = color;
}

void AutoVehicle::setModelType(string type) {
	av_type = type;
}

void AutoVehicle::setModel(string model) {
	av_model = model;
}

void AutoVehicle::setMile(int miled) {
	av_mileage= miled;
}

void AutoVehicle::setNumTire(int numT) {
	av_num_tires = numT;
}

void AutoVehicle::setModelYear(int avyear) {
	av_model_year = avyear;
}

string AutoVehicle::getModelColor(){
	return av_color;
}

string AutoVehicle::getModelType(){
	return av_type;
}

string AutoVehicle::getModel(){
	return av_model;
}

int AutoVehicle::getMile(){
	return av_mileage;
}

int AutoVehicle::getNumTire(){
	return av_num_tires;
}

int AutoVehicle::getModelYear(){
	return av_model_year;
}
