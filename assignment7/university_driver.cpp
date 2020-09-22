#include <iostream>
#include <string>
#include "university.h"
#include "uoregon.h"
using namespace std;

void update_class_vars(university* u){
  u->set_univ_name("Portland State University");
}

int main(){
  university east_coast("Columbia", "New York", 15000);
  uoregon uo("University of Oregon", "Eugene", 15000, "Computer Science", "Deuschutes Hall");
  university* nyu = nullptr;

  nyu = &uo;

  nyu->print_data();

  cout << endl;
  cout << "Updating..." << endl;
  cout << endl;

  update_class_vars(nyu);
  nyu->print_data();

  cout << endl;

  east_coast.getAddress().print_data();
}
