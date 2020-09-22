#include <iostream>
using namespace std;

class university{

protected:
string univ_name;
string univ_location;
int num_students;

public:
university(){};
university(string,string,int);

university* getObject(){
 return this;
}
university& getAddress(){
 return *this;
}
void set_univ_name(string);
string get_univ_name();

void set_univ_location(string);
string get_univ_location();

void set_num_students(int);
int get_num_students();
//Implement setters and getters for all class variables in your university_impl.cpp file.
virtual void print_data();
};
