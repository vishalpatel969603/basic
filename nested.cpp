#include<iostream>
using namespace std;
int main (){
 int age;
 cout<<"enter the value of age=";
 cin>>age;
if((20<age)&&(30>age)&&(age%5==0)){
    cout<<"ture";
}
else{
    cout<<"false";
}

return 0;
}