#include<iostream>
using namespace std;
int main(){
    int n,m=0;
    
    cout<<"enter the value of n=";
    cin>>n;
   int i=1;
    while(i<=n){
         m=m*10 +(n%10);
         n=n/10;
    }
    if(m==0){
        cout<<" ";
    }
   
   else { cout<<m;
}
}