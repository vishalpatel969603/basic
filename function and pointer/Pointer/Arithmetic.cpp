#include<iostream>
using namespace std;
int main(){
  int x=4;
  int* ptr=&x;
  cout<<*ptr<<"\n";
  (*ptr)++; //*ptr=*ptr+1
  cout<<*ptr<<"\n";
}