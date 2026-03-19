#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n=";
    cin>>n;
    // cout<<"enter the value of m=";
    // cin>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if((i==1)or(i==n)or(i==j)or(i+j==n+1)or(j==1)or(j==n))
            cout<<" * ";
        else{
            cout<<"   ";
        }
            
        }
        cout<<"\n";
    }
}