#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the value of a=";
    cin>>a;
    cout<<"enter the value of b=";
      cin>>b;
    if(((a%2==0)and(a%3==0)) and ((b%2==0)and(b%3==0)) or (a%5==0)&&(b%5==0)){
        cout<<"ture";
    }
    else{
        cout<<"false";
    }

    return 0;
} 