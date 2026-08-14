#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
 void sort(vector<int> &v){
    int i=0;
    int j=v.size()-1;
  while(i<j){
    if(v[j]==1) j--;
    if(v[i]==0) i++;
    if(i>j) break;
    if(v[i]==1 && v[j]==0){
        // int temp=v[i];
        // v[i]=v[j];
        // v[j]=temp;
        v[i]=0;
        v[j]=1;
        i++;
        j--;
    }
    
  }
 }

int main(){
    vector<int> v;
     v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);

     display(v);
sort(v);
 for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

}