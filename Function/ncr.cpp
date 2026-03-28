#include<iostream>
using namespace std;
int fact(int m){
    int fact=1;
    for(int i=1;i<=m;i++){
        fact=fact*i;
    }
    return fact;
    }

    int main(){
        int n,r;
        cout<<"enter the value of n=";
        cin>>n;
         cout<<"enter the value of r=";
         cin>>r;
         cout<<(fact(n)/(fact(r)*fact(n-r)));   
       

    }