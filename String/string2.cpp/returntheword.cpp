#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
#include<vector>
using namespace std;
int main(){
string str="raghav sir is a math teacher. he is a DSA menter as well";
stringstream s(str);
string temp;
 vector<string> v;
while(s>>temp){
   v.push_back(temp); 
   }
//    for(int i=0;i<v.size();i++){
//     cout<<v[i]<<endl;
//    }
//    cout<<endl;
   sort(v.begin(),v.end());
//    for(int i=0;i<v.size();i++){
//     cout<<v[i]<<endl;
//    }
     int maxcount=1;
     int count=1;
    for(int i=0;i<v.size();i++){
        if(v[i]==v[i-1]) count++;
         else count=1;
    maxcount=max(maxcount,count);
    }
     count=1;
    for(int i=0;i<v.size();i++){
        if(v[i]==v[i-1]) count++;
         else count=1;
    if(count==maxcount){
        cout<<v[i]<<" "<<maxcount<<endl;
    }
    }
}