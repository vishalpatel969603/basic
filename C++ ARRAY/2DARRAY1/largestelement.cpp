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
      int max=arr[0][0];
      
    for(int i=0;i<=m-1;i++){//i is row
        for(int j=0;j<=n-1;j++){//j is col
            if(arr[i][j]>max){
                max=arr[i][j];
            }
        }      
      }
      cout<<max;
}