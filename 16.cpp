#include<iostream>
using namespace std;
int main(){
    int n,rev=0;
  int a=n;
    cout<<"enter the value of n=";
    cin>>n;

    while(n !=0){
        rev=rev*10 +(n%10);
         n=n/10;
    }
  cout<<rev<<"\n";
  if(rev==n)cout<<"ture";
  else cout<<"flase";
     
}