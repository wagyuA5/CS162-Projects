#include <iostream>
using namespace std;
struct t{
  int v;
  t* w;
};
void reverse(t* k){
  if((k->w) == nullptr){
   cout<<k->v<<" "<<k->v<<endl;
  }

  else{
   reverse(k->w);
   cout << k->v <<" ";
  }

}
int main(){
  t* h = nullptr;
  t* c = nullptr;
  t* p = nullptr;
  int u;
  cout<<"enter int: ";
  cin>>u;
  while(u != -999){
  t* p = new t;
  p->v=u;
  p->w=nullptr;
  if(h==nullptr){
   h=p;
   c=h;
  }
  else{
  c->w=p;
  c=p;
  }
  cout<<"enter int: ";
  cin>>u;
  }
  for(c=h;c!=nullptr;c=c->w){
  cout<<c->v<<" ";
  }
  c=h;
  reverse(c);
  return 0;
}
