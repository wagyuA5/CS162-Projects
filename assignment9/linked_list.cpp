#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct node{
string student_name;
int student_id;
node* ptr;
};

void print_recursively(node* current){
    if((current->ptr) == nullptr){
     cout<<current->student_name<<" "<<current->student_id<<endl;
    }

    else{
    	print_recursively(current->ptr);
    	cout << current->student_name <<" "<<current->student_id << endl;
    }

}


int main(){
  int student_id = 0;
  node* new_node = nullptr;
  node* head = nullptr;
  node* current = nullptr;
  cout<<"Enter student ID and -999 to exit: ";
  cin>>student_id;
  while(student_id != -999){
   new_node = new node;
   cout<<"Enter student name: ";
   cin>>new_node->student_name;
   new_node->student_id = student_id;

   new_node->ptr = nullptr;
   if(head == nullptr){
   head = new_node;
   current = head;
   }
   else{
   current->ptr = new_node;
   current = new_node;
   }
  cout<<"Enter student ID and -999 to exit: ";
  cin>>student_id;
  }
  cout<<setw(15)<<setfill('#')<<""<<endl;
  cout<<"Elements of the Linked List: ";
  cout<<endl;
  cout<<setw(15)<<setfill('#')<<""<<endl;

  for(current=head; current != nullptr; current=current->ptr){
  	cout<<current->student_name<<" "<<current->student_id<<endl;
  }

  cout<<setw(15)<<setfill('#')<<""<<endl;
  current=head;
  cout<<"Elements of the reverse Linked List: ";
  cout<<endl;
  print_recursively(current);
  cout<<setw(15)<<setfill('#')<<""<<endl;
  return 0;
  }
