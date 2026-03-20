#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    
    cout<<"enter the value of n=";
    cin>>n;
    int x=n;
    
    for(int i=1;i<=x;i++){
        
       
       sum=sum+(n%10);
        n=n/10;
       
      
       if(n==0){
        break;
       }

    }
    cout<<sum;
}