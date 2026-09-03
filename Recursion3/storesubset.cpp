#include<iostream>
#include<string>
#include<vector>
using namespace std;
void storesubset(string ans,string original,int idx,vector<string>& v){
    if(original.size()==idx) {
        v.push_back(ans);
        return;
    }
    char ch=original[idx];
    storesubset(ans,original,idx+1,v);
    storesubset(ans+ch,original,idx+1,v);
   
}
int main(){
  string str="abc";
  vector<string> v;
 storesubset("",str,0,v);
 for(string ele : v){
    cout<<ele<<endl;
 }
}