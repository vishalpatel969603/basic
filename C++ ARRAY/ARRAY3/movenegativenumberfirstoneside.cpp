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
    if(v[i]>=0)i++;
    if(v[j]<0)j--;
       int temp=v[i];
        v[i]=v[j];
       v[j]=temp;

  }
 }

int main(){
    vector<int> v;
     v.push_back(1);
    v.push_back(-2);
    v.push_back(3);
    v.push_back(-4);
    v.push_back(-5);
    v.push_back(6);
    v.push_back(8);
     display(v);
sort(v);
 for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

}

