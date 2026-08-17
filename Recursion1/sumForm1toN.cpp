#include<iostream>
#include<algorithm>
using namespace std;
void  sum1toN(int sum,int n){
   
    if(n==0){
        cout<<sum<<endl;//kaam 
        return;
    }//base case
    sum1toN((sum+n),(n-1)); //call

}
int main(){
int n;
cin>>n;
cout<<endl;
  sum1toN(0,n);
}  