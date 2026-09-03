#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="Raghav garg";
    string s="";
    for(int i=0;i<str.size();i++){
        if(str[i]!='a') s+=str[i];//or s.push_back(str[i]);
    }
    cout<<s;
}