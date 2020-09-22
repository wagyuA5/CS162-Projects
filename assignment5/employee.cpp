#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct employee{
  string emp_name;
  int emp_id;
  string emp_group;
};

void init_ee_employee(employee* ee_ptr){

  ee_ptr->emp_name = "Josh";
  ee_ptr->emp_id = 100;
  ee_ptr->emp_group = "Software";
}
void init_mgr_employee(employee* mgr_ptr){
  mgr_ptr->emp_name = "Tom";
  mgr_ptr->emp_id = 101;
  mgr_ptr->emp_group = "Management";
}

void print(employee* ptr){
  cout<<"Engineering Employee Name: "<<ptr->emp_name<<endl;
  cout<<"Engineering Employee ID: "<<ptr->emp_id<<endl;
  cout<<"Engineering Employee Group: "<<ptr->emp_group<<endl;
}

int main(){
  employee *ee_emp = nullptr;
  employee *mgr_emp = nullptr;
  employee engineer;
  employee general_manager;
  ee_emp=&engineer;
  mgr_emp=&general_manager;
  init_ee_employee(ee_emp);
  init_mgr_employee(mgr_emp);

  print(ee_emp);
  cout<<" "<<endl;
  print(mgr_emp);

  return 0;
}
