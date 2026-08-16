#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
string str1="physicswallah";
string str2="phywallahsics";
sort(str1.begin(),str1.end());
sort(str2.begin(),str2.end());
cout<<str1<<endl;
cout<<str2<<endl;
if(str1==str2) cout<<"true";
else cout<<"false";
}