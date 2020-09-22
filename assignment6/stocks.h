#include <iostream>
#include <string>
using namespace std;

class Stocks{

  friend int update_options_maturity_year
  (Stocks);
  friend string update_company_name(Stocks);
  friend int update_stk_price(Stocks);

  private:
    string company_name;
    double company_stock_price;
    int options_maturity_year;

  public:
    Stocks(){};
    Stocks(string, double);

    void set_options_maturity_date(int);
    int get_options_maturity_date();
    void set_company_name(string);
    string get_company_name();
    void set_company_stock_price(double);
    double get_company_stock_price();
};
