#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter the number of row/col =";
    cin>>m;
    //   cout<<"enter the number of col =";
    // cin>>n;
     int arr1[m][m];
    for(int i=0;i<=m-1;i++){//i is row
        for(int j=0;j<=m-1;j++){//j is col
            cin>>arr1[i][j];
            }   
        } 
        cout<<"\n";
    for(int i=0;i<=m-1;i++){//i is row
        for(int j=0;j<=m-1;j++){//j is col
            cout<<arr1[i][j]<<" ";
            } 
            cout<<endl;  
        }
        cout<<endl;
        //transpose in the same matrix
          for(int i=0;i<=m-1;i++){//i is col
        for(int j=i+1;j<=m-1;j++){//j is row
           int temp=arr1[i][j];
           arr1[i][j]=arr1[j][i];
           arr1[j][i]=temp; 
            } 
            cout<<endl;  
        } 
        
        //print
      for(int j=0;j<=m-1;j++){//i is col
        for(int i=0;i<=m-1;i++){//j is row
            cout<<arr1[j][i]<<" ";
            } 
            cout<<endl;  
        } 

    
}