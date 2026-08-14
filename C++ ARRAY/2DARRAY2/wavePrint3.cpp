#include<iostream>
using namespace std;
int main(){
    int n,m;
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

     
        for(int j=0;j<n;j++){
            if(j%2==0){
            for(int i=0;i<m;i++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
        for(int i=m-1;i>=0;i--){
                cout<<arr[i][j]<<" ";
            }
    }
     
}
}
