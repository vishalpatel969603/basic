#include<iostream>
#include<vector>
using namespace std;
void removeint(vector<int>& arr,int idx){
    if(idx==arr.size()) return;
     int  k=arr[idx];
     if(k!=1){
        cout<<k<<" ";
     }
     removeint(arr,idx+1);

    }
int main(){
   vector<int> arr = {1, 2, 3, 1, 1, 4, 1, 7};
  
     removeint(arr,0);
}