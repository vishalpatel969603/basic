#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter the number of row =";
    cin>>m;
      cout<<"enter the number of col =";
    cin>>n;
     int arr1[m][n];
     int arr2[m][n];

    for(int i=0;i<=m-1;i++){//i is row
        for(int j=0;j<=n-1;j++){//j is col
            cin>>arr1[i][j];
            }   
        } 
      for(int i=0;i<=m-1;i++){//i is row
        for(int j=0;j<=n-1;j++){//j is col
            cin>>arr2[i][j];
        }      
      }
      
    for(int i=0;i<=m-1;i++){//i is row
        for(int j=0;j<=n-1;j++){//j is col
           cout<<arr1[i][j]+arr2[i][j]<<" "; 
        } 
         cout<<endl;        
      }

    
}