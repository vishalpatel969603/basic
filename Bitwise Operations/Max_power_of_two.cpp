#include<iostream>
#include<string>
using namespace std;
//next method
int count_set_bits_2(int n){
    int temp;
   while(n!=0){
     temp=n;
      n = (n & (n-1));
   }
      return temp;
}
int max_power_0f2(int n){
    int x=n;
    x = x| (x >> 1);
    x = x| (x >> 2);
    n = n| (n >> 4);
    n = n| (n >> 8);
    n = n| (n >> 16);
    return (x+1)/2;
}
int max_power_0f3(int n){
    int x=n;
    x = x| (x >> 1);
    x = x| (x >> 2);
    // n = n| (n >> 4);
    // n = n| (n >> 8);
    // n = n| (n >> 16);
    return x^n;
}


int main(){
   cout<<count_set_bits_2(100)<<endl; 
   cout<<max_power_0f2(90)<<endl;
    cout<<max_power_0f3(13)<<endl;
}