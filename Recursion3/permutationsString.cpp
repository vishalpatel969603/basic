#include<iostream>
#include<string>
using namespace std;
 void permutations(string ans,string original){
    if(original.size()==0){
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<original.size();i++){
        char ch=original[i];
        // string left = original.substr(0,i);
        // srting right = original.substr(i+1);
    permutations(ans+ch,original.substr(0,i)+original.substr(i+1));
    }
 }
int main(){
    string str="abc";
    permutations("",str);
}