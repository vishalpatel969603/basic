#include<iostream>
#include<string>
using namespace std;
bool isPalindomr(string s ,int i,int j){
    if(i>j) return true;
     if(s[i]!=s[j]) return false;
       else return isPalindomr(s,i+1,j-1);      
    }
int main(){
 string str="vishal";
 int i=0;
 int j=str.size()-1;
   cout<<isPalindomr(str,i,j);
}