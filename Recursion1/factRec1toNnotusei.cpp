#include<iostream>
#include<algorithm>
using namespace std;
void  print(int x){
    if(x==0) return;//base case
    print(x-1); //call
     cout<<x<<endl;//kaam
}
int main(){
int n;
cin>>n;
  print(n);
}   