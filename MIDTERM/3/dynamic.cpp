#include <iostream>
using namespace std;

//Define and write the body of the pop_dy_arr and print_dy_arr functions
//You will ask the user to enter numbers in the pop_dy_arr function and will
//populate your dynamic array with the user entered functions.

void pop_dy_arr(int* arr, int size){
  for(int i=0;i<size;i++){
    cout<<"Enter number:"<<endl;
    cin>>arr[i];
  }
}

void print_dy_arr(int* arr, int size){
  cout<<"Array Values = ";
  for(int i =0;i<size;i++){
    cout<<arr[i]<<" ";
  }
}

int main(){
  int arr_size;
  cout<<"Enter arr_size: ";
  cin>>arr_size;
  int* p = nullptr;
  p = new int[arr_size];
  pop_dy_arr(p,arr_size);
  print_dy_arr(p,arr_size);
  return 0;
}
