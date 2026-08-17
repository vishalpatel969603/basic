#include<iostream>
using namespace std;
    int fact(int n){
        if(n==1 || n==0) return 1;//base case
        int ans = n*fact(n-1);//kaam call
        return ans;//recursive call
    }     
int main(){
   cout<<fact(0);
}