#include <iostream>
using namespace std;
#include <string>
//WRITE FUNCTION TEMPLATES f and g HERE

template <typename Divide>
Divide f(Divide x, Divide y)
{
   return (x / y);
}

template <typename Add>
Add g(Add x, Add y)
{
   return (x + y);
}

int main(){
  double x = 14.3;
  double y = 2.1;
  int a = 159;
  int b = 3;
  string string01 = "hello";
  string string02 = "world";
  double db_ans = f(x,y);
  int db_int = f(x,y);
  string db_str = g(string01,string02);
  double db_str_ans = g(x,y);
  int db_str_int = g(a,b);
  cout<<"db_ans = "<<db_ans<<endl;
  cout<<"db_int = "<<db_int<<endl;
  cout<<"db_string = "<<db_str<<endl;
  cout<<"db_ans = "<<db_str_ans<<endl;
  cout<<"db_int = "<<db_str_int<<endl;
}
