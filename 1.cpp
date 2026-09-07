 #include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the value of a =";
    cin>>a;
    cout<<"enter the value of b =";
    cin>>b;
    for(int i=a;i<=(a*b);i=i+a){
        
        if(i%b==0){
            cout<<i;
            break;       }      
        }
}