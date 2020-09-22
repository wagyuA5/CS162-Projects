#include <iostream>
using namespace std;
#include "ceo.h"

ceo::ceo(string cname, string cmp_nm, int cduration){
  ceo_name = cname;
  company_name = cmp_nm;
  job_duration = cduration;
}
bool ceo::operator==(ceo c){
return ((c.ceo_name == ceo_name) &&
(c.company_name == company_name));
}

ceo* ceo::get_ceo_obj(){
return this;
}
string ceo::get_ceo_name(){
return ceo_name;
}
string ceo::get_company_name(){
return company_name;
}
ceo update_ceo (ceo cexec){
cexec.ceo_name = "Gelsinger";
return cexec;
}
