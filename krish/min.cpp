#include<iostream>
using namespace std;
int min(int a,int b){
if(a>b){            //check which is small
    return b;
}
else{
    return a;
}
}
int main(){
    int n,s;        //two variable where s store the min value
    cout<<"Enter the Number of Variable:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the value of Variable "; cout<<i+1;cout<<":";
        cin>>arr[i];
    }
    s=arr[0];                   //putting initial value of s
    for(int i=1;i<n;i++){       //it start from index 1 and goes to n-1
        s=min(arr[i],s);        //compare the value of s with arr[1 t0 n-1]
    }
    cout<<"Smallest number is:"; cout<<s;
}