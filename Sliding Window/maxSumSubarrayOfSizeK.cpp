#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main(){
    int arr[]={7,1,2,5,8,4,9,3,6};
    int k=4;
    int maxSum= INT_MIN;
    int maxidx =0;
    int n=sizeof(arr)/sizeof(arr[0]);
    // for(int i=0;i<=n-k;i++){
    //     int sum=0;
    //     for(int j=i;j<i+k;j++){
    //         sum +=arr[j];
    //     }
    //     if(maxSum < sum){
    //         maxSum=sum;
    //         maxidx = i;
    //     }
    // }
    // cout<<maxSum<<endl;
    // cout<<maxidx;
      int prevsum=0;
     for(int i=0;i<k;i++){
        prevsum += arr[i];
     }
     maxSum=prevsum;
     int i=1;
     int j=k;
     while(j<n){
         prevsum=prevsum + arr[j]-arr[i-1];
        if(maxSum<prevsum){
            maxSum = prevsum;
            maxidx = i;
        }
        i++;
        j++;
     }
         cout<<maxSum<<endl;
    cout<<maxidx;

} 