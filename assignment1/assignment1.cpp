#include <iostream>
#include <string>
#include <iomanip>
using namespace std; 

struct laptop{
	string model_name;
	int model_year;
	int ram_size;
	string processor_name;
	string location_manufactured;
};

laptop* poplapinfo(laptop* lapinfo, int size){
	
	for(int i = 0; i < size; i++) {
	
		cout << "Enter model name" << endl;
		cin >> (lapinfo[i].model_name);
		cout << "Enter model year" << endl;
		cin >> (lapinfo[i].model_year);
		cout << "Enter ram size(in gb)" << endl;
		cin >> (lapinfo[i].ram_size);
		cout << "Enter processor name" << endl;
		cin >> (lapinfo[i].processor_name);
		cout << "Enter location manufactured" << endl;
		cin >> (lapinfo[i].location_manufactured);	
	}
	
	return lapinfo;
}

int main(){
	
	int listsize;
	
	cout << "Enter the list size: " << endl;
	cin >> listsize;
	
	laptop *laplist = new laptop[listsize];
	
	laplist = poplapinfo(laplist, listsize);
	
	for(int i=0; i < listsize; i++) {
		cout << "Laptop model name: " << laplist[i].model_name << " Laptop model year: " << laplist[i].model_year << " Laptop ram size: " << laplist[i].ram_size << " Laptop processor name: " << laplist[i].processor_name 
		<< " Location manfactured: " << laplist[i].location_manufactured << endl;
		
		cout << " " << endl;
	}
	
	return 0;
}
