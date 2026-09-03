#include<iostream>
#include<string>
using namespace std;
void printsubset(string ans,string original,int idx){
    if(original.size()==idx) {
        cout<<ans<<endl;
        return;
    }
    char ch=original[idx];
     printsubset(ans,original,idx+1);
    printsubset(ans+ch,original,idx+1);
   
}
int main(){
  string str="abc";
  printsubset(" ",str,0);
}