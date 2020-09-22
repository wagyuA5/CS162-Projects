#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

void populate_vector (vector <int> &v, int sz){
  int user_entry;
 //Complete the populate_vector function
 for(int i = 0; i < sz; i++) {
   cout << "Enter a integar: " <<endl;
   cin>>user_entry;
   v.push_back(user_entry);
 }
}
void print_vector_values(vector <int> v, int sz){
 //Complete the print_vector_values function
 for(int i = 0; i < sz; i++){
   cout<< v[i]<< " ";
 }
}

int main(){
  vector <int> vector_list;
  int vector_size = 0;
  cout<<"Enter the number of elements that you would like to store in the vector: ";
  cin>>vector_size;
  if (vector_list.empty()){
    populate_vector(vector_list,vector_size);
  }
  else {
    cout << "Vector is already populated!";
  }

  cout<<"Vector Values = ";
  print_vector_values(vector_list,vector_size);
  cout << " "<< endl;
  cout<<"Front of the Vector v = "<<vector_list.front()<<endl;
  cout<<"Back of the Vector v = "<<vector_list.back()<<endl;

  return 0;
}
