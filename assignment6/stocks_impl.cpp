#include <iostream>
#include <string>
#include "stocks.h"
using namespace std;

Stocks::Stocks(string name, double price){
  company_name = name;
  company_stock_price = price;
}

int update_options_maturity_year(Stocks a){
  if (a.company_name == "Google") {
    a.options_maturity_year = 2035;
    cout << "Google maturity year is changed to " << a.options_maturity_year << endl;
  }
  else {
    a.options_maturity_year = 2025;
    cout << "Netflix maturity year is changed to " << a.options_maturity_year << endl;
  }
  return a.options_maturity_year;
}

string update_company_name(Stocks a){
  if (a.company_name == "Google") {
    a.company_name = "Alphabet";
    cout << "Google name is changed to " << a.company_name << endl;
  }
  else {
    a.company_name = "Netflix_Corp";
    cout << "Netflix name is changed to " << a.company_name << endl;
  }
  return a.company_name;
}

int update_stk_price(Stocks a){
  if (a.company_stock_price == 1350) {
    a.company_stock_price = 1700;
    cout << "Google stock price changed to " << a.company_stock_price << endl;
  }
  else {
    a.company_stock_price = 2150;
    cout << "Netflix stock price changed to " << a.company_stock_price << endl;
  }
  return a.company_stock_price;
}

void Stocks::set_options_maturity_date(int x){
  options_maturity_year = x;
}

void Stocks::set_company_name(string y){
  company_name = y;
}

void Stocks::set_company_stock_price(double z){
  company_stock_price = z;
}

int Stocks::get_options_maturity_date(){
  return options_maturity_year;
}

string Stocks::get_company_name(){
  return company_name;
}

double Stocks::get_company_stock_price(){
  return company_stock_price;
}
