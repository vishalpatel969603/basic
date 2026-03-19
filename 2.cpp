#include <iostream>
using namespace std;
int main(){
    int a,b,sum=0;
    cout<<"enter the value of a=";
    cin>>a;
    cout<<"enter the value of b=";
    cin>>b;
    for(int i=a;i<=b;i++){
        if(i%2==0){
            sum=sum+i;
        }
    }
     cout<<sum;

}