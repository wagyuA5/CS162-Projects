#include <iostream>
#include <string>
using namespace std;

class uoregon: public university{

protected:
string univ_dept;
string univ_dept_building;

public:
uoregon(){};
uoregon(string,string,int,
string,string);
uoregon* getObject(){
 return this;
}
void print_data();

void set_univ_dept(string);
string get_univ_dept();

void set_univ_dept_building(string);
string get_univ_dept_building();
//Implement setters and getters for all class variables in your uo_impl.cpp file.
};
