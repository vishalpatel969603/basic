#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter the number of row =";
    cin>>m;
      cout<<"enter the number of col =";
    cin>>n;
     int arr1[m][n];
  

    for(int i=0;i<=m-1;i++){//i is row
        for(int j=0;j<=n-1;j++){//j is col
            cin>>arr1[i][j];
            }   
        } 
        cout<<"\n";
    for(int i=0;i<=m-1;i++){//i is row
        for(int j=0;j<=n-1;j++){//j is col
            cout<<arr1[i][j]<<" ";
            } 
            cout<<endl;  
        }
        cout<<endl;
         
      for(int j=0;j<=n-1;j++){//i is col
        for(int i=0;i<=m-1;i++){//j is row
            cout<<arr1[i][j]<<" ";
            } 
            cout<<endl;  
        } 

    
}