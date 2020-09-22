#include <iostream>
using namespace std;

int* create_arr_elements(int* r, int sz){
  //COMPLETE THE BODY OF THIS FUNCTION
  for(int i=0;i<sz;i++){
    cout<<"Enter number:"<<endl;
    cin>>r[i];

  }
  return r;
}
void print_arr(int* q, int size){
  //COMPLETE THE BODY OF THIS FUNCTION
  cout<<"Array Values = ";
  for(int i =0;i<size;i++){
    cout<<q[i]<<" ";
  }
}

int sum_arr_elements(int* q, int size){
  int sum = 0;
  for(int i =0;i<size;i++){
    sum += q[i];
  }

  return sum;
}
int main(){
  int size = 0;
  cout<<"Enter number of elements:";
  cin>>size;
  int *p = new int[size];
  int* q = create_arr_elements(p,size);
  print_arr(q,size);
  int sum = sum_arr_elements(q,size);
  cout<<endl;
  cout<<"sum = "<<sum<<endl;
  return 0;
}
