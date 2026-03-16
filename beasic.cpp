#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter the value of a=";
     cin>>a;
    if(a>=18){
        cout<<"younger";
    }
    else if((a<10)and(a>18)){
        cout<<"teenager";
    }
    else{
        cout<<"child";
    }
    return 0;
}