#include<iostream>
using namespace std;
void  print(int i,int x){
      if(i>x) return;
      cout<<i<<endl;
      print(i+1,x);
}
int main(){
int n;
cin>>n;
  print(1,n);
}