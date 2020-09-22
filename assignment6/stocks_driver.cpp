#include <iostream>
#include <string>
#include "stocks.h"
using namespace std;

int main(){

  Stocks options_goog("Google", 1350);
  Stocks options_nflx("Netflix", 275);

  cout << "Friend Function Name Changer: "<<endl;
  update_company_name(options_goog);
  update_company_name(options_nflx);
  cout << " " << endl;
  cout << "Friend Function Stock Price Changer: "<<endl;
  update_stk_price(options_goog);
  update_stk_price(options_nflx);
  cout << " " << endl;
  cout<< "Friend Function Maturity Year: "<< endl;
  update_options_maturity_year(options_goog);
  update_options_maturity_year(options_nflx);
}
