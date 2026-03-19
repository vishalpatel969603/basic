#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the value of a =";
    cin>>a;
    cout<<"enter the value of b =";
    cin>>b;
    int m=0;
    if(a<b)m=a;
    else m=b;
    for(int i=m;i>=1;i--){
        if((a%i==0)&&(b%i==0)){
        cout<<i<<"\n";
        break;       }            
        }
}