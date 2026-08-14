#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter the number of row =";
    cin>>m;
      cout<<"enter the number of col =";
    cin>>n;
     int arr[m][n];

    for(int i=0;i<=m-1;i++){//i is row
        for(int j=0;j<=n-1;j++){//j is col
            cin>>arr[i][j];
        }      
      }
      int sum=0;
      
    for(int i=0;i<=m-1;i++){//i is row
        for(int j=0;j<=n-1;j++){//j is col
           sum=sum+arr[i][j]; 
        }      
      }
      cout<<sum;
}