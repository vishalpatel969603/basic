#include<iostream>
using namespace std;
 
int rev(int x ){
     int rev=0;
     while(x!=0){
     rev=rev*10+(x%10);
     x=x/10;
     }
    return rev;
}
int main(){
    int n; 
    cin>>n;
    cout<<rev(n);
}
