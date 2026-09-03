#include<iostream>
#include<string>
using namespace std;
void removechar(string s,string str,int idx){
    char ch=str[idx];
    if(str.size()==idx){
        cout<<s;
      return;  
    }
    if(ch=='a') removechar(s,str,idx+1);
    else removechar(s+ch,str,idx+1);
}
int main(){
    string str="raghav garg";
     removechar("",str,0);
}