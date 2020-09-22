#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include <iomanip>

void populate_p(vector <int> &v){
//Please complete the body of this function
  int input;
  for(int i=0; i < 5; i++){
    cout<<"Please input 5 numbers: ";
    cin>>input;
    v.push_back(input);
  }


}
void print_p(vector <int> v){
//Please complete the body of this function
  for(int i=0; i<v.size();i++){
   cout<<v[i]<<" ";
  }
}


int main(){
  vector <int> p;
  cout<<setw(25)<<setfill('*')<<""<<endl;
  populate_p (p);
  //ask the user to input five numbers
  cout<<endl;
  cout<<setw(25)<<setfill('*')<<""<<endl;
  print_p(p);
  return 0;
}
