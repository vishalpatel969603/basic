#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
string str ="raghav sir is a math teacher";
stringstream s(str);
string temp;
while(s>>temp){
    cout<<temp<<endl;
}

}