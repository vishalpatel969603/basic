#include<iostream>
#include<string>
#include<vector>
using namespace std;
void storesubset(string ans,string original,int idx,vector<string>& v,bool flag){
    if(original.size()==idx) {
        v.push_back(ans);
        return;
    }
    char ch=original[idx];
    if(original.size()==1){
           if(flag==true) storesubset(ans+ch,original,idx+1,v,true);
    storesubset(ans,original,idx+1,v,true);
    return;//thaki niche ka do condition na chale
    }
    char dh=original[idx+1];
    if(dh==ch){//duplicate
       if(flag==true) storesubset(ans+ch,original,idx+1,v,true);
    storesubset(ans,original,idx+1,v,false);
    }
    else{//not duplicate
         if(flag==true) storesubset(ans+ch,original,idx+1,v,true);
    storesubset(ans,original,idx+1,v,true);
    }

   
}
int main(){
  string str="aabb";
  vector<string> v;
 storesubset("",str,0,v,true);
 for(string ele : v){
    cout<<ele<<endl;
 }
}