#include<iostream>
using namespace std;
int main(){
   int x=10;
   int* p = &x;
   //cout<<*p; output= 10
   cout<<x<<endl;
   *p=6;
   cout<<x;
    
}