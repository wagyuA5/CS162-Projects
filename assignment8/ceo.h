#include <iostream>
using namespace std;

class ceo{
  friend ceo update_ceo (ceo);
  private:
  string ceo_name;
  string company_name;
  int job_duration;

  public:
  ceo(){};
  ceo(string, string, int);
  bool operator==(ceo);
  ceo* get_ceo_obj ();
  string get_ceo_name();
  string get_company_name();

};
