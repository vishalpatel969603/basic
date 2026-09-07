#include<iostream>
using namespace std;
int main(){
    int arr[6]={40,20,50,60,10,30};
    int n=6;
    for(int i=1;i<n;i++){
        int min=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>min){
            arr[j+1]=arr[j];
            j--;
    }
       arr[j+1]=min;
   cout<<min<<" ";
    }
}