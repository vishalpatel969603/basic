#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s="AZYXBDXJK";
    string str="";

    for(int i=0;i<s.size();i++){
        if(s[i]>='X'){
            str.push_back(s[i]);
        }
    }
    //  sort(str.begin(),str.end());   
     cout<<str<<endl;
     for(int i=0;i<str.size()-1;i++){
        for(int j=0;j<str.size()-1-i;j++){
        if(str[j]>str[j+1]){
            int temp=str[j];
            str[j]=str[j+1];
            str[j+1]=temp; 
                   }
            }
     }
  cout<<str;  
}