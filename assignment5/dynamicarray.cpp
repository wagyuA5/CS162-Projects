#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void populateArray(int* arr, int size){
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
  int* dy_array = nullptr;
  int arr_size = 0;

  cout<<"Enter number of array elements: "<<endl;
  cin>>arr_size;

  dy_array = new int[arr_size];

  populateArray(dy_array, arr_size);
  print_dy_arr(dy_array, arr_size);

  return 0;

}
