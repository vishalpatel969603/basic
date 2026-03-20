#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n=";
    cin>>n;
    
     int a=1;
    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=n;j++){
            
            if(j>=n-a+1 )
            cout<<" * ";
        else{
            cout<<"   ";
        }
        // if(i+j>=n+1)
            // cout<<" * ";
        // else{
        //     cout<<"   ";
        // }
            
        }
         a++;
        cout<<"\n";
       
    }
}