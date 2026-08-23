#include<iostream>
using namespace std;
 int pow(int x,int n){
    int ans;
    if(n==1) return x;
    if(n%2==0) {
       ans=pow(x,n/2);
       return ans*ans;
    }
    else {
        ans=pow(x,n/2);
        return ans*ans*x;
    }  
 }
int main(){
         int x, n;
         cin>>x>>n;
       cout<<pow(x,n);

}