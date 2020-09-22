#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
#include "ceo.h"

void compare_ceos(ceo current, ceo past){
  if(current == past){
    cout<<"These are the same CEO"<<endl;
  }
  else {
    cout<<"These are two different CEOs"<<endl;
  }
}
void print_current_ceo_info(ceo* current_ceo){
  cout<<"CEO: "<<current_ceo->get_ceo_name()<<endl;
  cout<<"Company Name: "<<current_ceo->get_company_name()<<endl;
}
void print_new_ceo_info(ceo new_ceo){
  cout<<"CEO: "<<new_ceo.get_ceo_name()<<endl;
  cout<<"Company Name: "<<new_ceo.get_company_name()<<endl;
}
int main(){
  ceo current_ceo("Otellini", "Intel", 10);
  ceo past_ceo("Bryant","Intel", 25);

  cout<<setw(15)<<setfill('#')<<""<<endl;
  compare_ceos(current_ceo, past_ceo);
  cout<<setw(15)<<setfill('#')<<""<<endl;

  cout<<endl;
  ceo* present_ceo = current_ceo.get_ceo_obj();
  print_current_ceo_info(present_ceo);
  cout<<setw(15)<<setfill('#')<<""<<endl;
  cout<<endl;

  ceo new_ceo = update_ceo(current_ceo);
  print_new_ceo_info(new_ceo);
  cout<<setw(15)<<setfill('#')<<""<<endl;
  return 0;
}
