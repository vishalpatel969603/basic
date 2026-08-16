#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
// string str;
// getline(cin,str);
// int n=str.size();
// int max=0;
// for(int i=0;i<n;i++){
//   char ch=str[i];
//   int count=1;  
// for(int j=i+1;j<n;j++){
//     if(str[i]==str[j]){
//         count++; 
//     }
//     if(max<count) max=count;  
// }
//      }


// for(int i=0;i<n;i++){
//   char ch=str[i];
//   int count=1;  
// for(int j=i+1;j<n;j++){
//     if(str[i]==str[j]) count++;
// }    
//     if(count==max) {
//        cout<<ch<<" "<<max<<endl;
//  }
// }   

string s="leetcode";
vector<int>v(26,0);
for(int i=0;i<s.size();i++){
      char ch=s[i];
      int ascii=(int)ch;
      v[ascii-97]++;
}
  int max=0;
  for(int i=0;i<26;i++){
    if(v[i]>max) max=v[i];
  }
       for(int i=0;i<26;i++){
        if(v[i]==max){
            int ascii=i+97;
            char ch=(char)ascii;
            cout<<ch<<" "<<max<<endl;
        }
  }
}