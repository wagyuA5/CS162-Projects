#include <iostream>
using namespace std;
#include <iomanip>

struct linkNode{
  int value;
  linkNode *front;
};

int main(){

  linkNode *head = nullptr;
  linkNode *front= nullptr;
  linkNode *current = nullptr;
  linkNode *new_node = nullptr;
  linkNode *prev = nullptr;
  int user_entry;
  cout<<"Enter number: ";
  cin>>user_entry;

  while(user_entry != -999){

    new_node = new linkNode;
    new_node->value = user_entry;
    new_node->front = nullptr;

    if(head == nullptr){
    	head = new_node;
    	current = head;
    }

    else{
   	  current->front = new_node;
   	  current = new_node;
   }

    cout<<"Enter number: ";
    cin>>user_entry;

  }


  cout<<"Linked List: "<<endl;
  //WRITE FOR LOOPS TO PRINT OUT THE MEMBERS OF THIS
  //LINKED LIST FROM FRONT TO BACK AND FROM BACK TO FRONT

  for(current=head; current != nullptr; current=current->front){
   cout<<current->value<<" ";
  }

  for(current=head; current != nullptr; current=current->front){
   next = current->front;
   current->front = prev;
   prev = current;
   current = next;
  }

  head = prev;

  for(current=head; current != nullptr; current=current->front){
   cout<<current->value<<" ";
  }


return 0;

}
