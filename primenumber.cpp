#include<iostream>
using namespace std;
int main(){
    int n,a=0;
    cout<<"enter the value of = ";
    cin>>n;
    for(int i=2;i<=n-1;i++){
     if(n%i==0){
        a=1;
        break;}
    }             
      if(a==0){
        cout<<"prime number";
     }     
    else{
        cout<<"composite number";
    }   
    return 0;
}