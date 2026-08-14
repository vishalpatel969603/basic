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
        int t[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                t[i][j]=arr1[j][i];
            }
        }
         cout<<endl;
      for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<t[i][j]<<" ";
            }
            cout<<endl;
        }
    
}