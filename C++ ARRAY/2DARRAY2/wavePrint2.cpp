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

     
        for(int i=m-1;i>=0;i--){
            if(i%2==0){
            
               for(int j=n-1;j>=0;j--){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
       for(int j=0;j<n;j++){
                cout<<arr[i][j]<<" ";
            }
    }
     
}
}
