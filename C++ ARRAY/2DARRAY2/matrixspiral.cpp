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
      int minr,maxr,minc,maxc;
      minr=0;
      maxc=n-1;
      maxr=m-1;
      minc=0;
      //right
      while(minr<=maxr && minc<=maxc){
      for(int j=minc;j<=maxc;j++){
        cout<<arr[minr][j]<<" ";
      }
      minr++;
      if(minr>maxr or minc>maxc) break;
      //Down
      for(int i=minr;i<=maxr;i++){
        cout<<arr[i][maxc]<<" ";
      }
      maxc--;
       if(minr>maxr or minc>maxc) break;
      //left
      for(int j=maxc;j>=minc;j--){
        cout<<arr[maxr][j]<<" ";
      }
     maxr--;
      if(minr>maxr or minc>maxc) break;
     //top
      for(int i=maxr;i>=minr;i--){
        cout<<arr[i][minc]<<" ";
      }
     minc++;
        }
    }
