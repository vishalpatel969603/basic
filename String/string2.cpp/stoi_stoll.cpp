#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
  string str ="12345355463767273";
  long long x=stoll(str);
  cout<<x<<endl;
  long long a=1234546578848854565;
  string s=to_string(a);
  cout<<s.size();
}