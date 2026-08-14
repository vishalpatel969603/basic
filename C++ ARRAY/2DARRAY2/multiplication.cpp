#include<iostream>
using namespace std;
int main(){
     int m;
     cout<<"enter row of 1st matrix : ";
     cin>>m;
         int n;
     cout<<"enter cols of 1st matrix : ";
     cin>>n;
         int p;
     cout<<"enter row of 2st matrix : ";
     cin>>p;
         int q;
     cout<<"enter row of 2st matrix : ";
     cin>>q;
     cout<<"enter element of 1st matrix : ";
     if(n==p){
        int a[m][n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
            cout<<endl;
        }
       
         cout<<"enter element of 1st matrix : "<<endl;
         int b[p][q];
        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                cin>>b[i][j];
            }
             cout<<endl;
        }

        int res[m][q];
         for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                res[i][j]=0;
               for(int k=0;k<p;k++){
                res[i][j]=res[i][j]+(a[i][k]*b[k][j]);
               }
            }
         }
         cout<<endl;
           for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
         }
        }
        else{
            cout<<"the matrices cannot be multiplied"<<endl;
        }
     
}
