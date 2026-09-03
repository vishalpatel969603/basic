#include<iostream>
using namespace std;
int maxInarray(int arr[],int n,int idx){
   
    if(idx==n) return 0;
   return max(arr[idx],maxInarray(arr,n,idx+1));
}
int main(){
    int arr[]={2,1,3,4,5,90,5,7,3};
    int n=sizeof(arr)/sizeof(arr[0]);
  cout<<maxInarray(arr,n,0);

}