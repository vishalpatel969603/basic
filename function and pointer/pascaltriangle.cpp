#include<iostream>
using namespace std;
   int fact(int x){
    int fact=1;
     for(int i=1;i<=x;i++){
        fact= fact*i;
     }
     return fact;
   } 
   int combinaction(int n,int r){
    int ncr= fact(n)/(fact(r)*fact(n-r));
    return ncr;
   }
int main(){
int n;
cin>>n;
for(int i=0;i<=n;i++){
    for(int j=0;j<=i;j++){
        cout<<combinaction(i,j)<<" ";
    }
    cout<<"\n";
}

}