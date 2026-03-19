#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the value of a =";
    cin>>a;
    cout<<"enter the value of b =";
    cin>>b;
    cout<<"enter the value of c =";
    cin>>c;
    //  if(a<b&&a<c){
    //     cout<<a;
    //  }
    // else if(b<a&&b<c){
    //     cout<<b;
    //  }
    //  else{
    //     cout<<c;
    //  }
    int n,m;
    m=min(a,b);
      n=min(m,c);
      cout<<n;
}