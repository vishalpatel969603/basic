#include<iostream>
using namespace std;
class Cricketer{
public:
    string name;
    int runs;
    float avg;
    Cricketer(string name,int runs,float avg){
        this->name = name;
        this->runs = runs;
        this->avg = avg;
    }
};

int main(){
    Cricketer c1("Virat Kohli",25000,55.2);
    Cricketer c2("Rohit Sharma",18000,47.8);
       
    Cricketer* p1 = &c1;// c1 ke address ko  *p1 store kar diya
    cout<<p1<<endl;//address print kiya  //*p value print karane ke liye hotha hai 
    cout<<(*p1).runs<<endl;//c1 ke address par jakar runs ka value print kiya
     cout<<c1.avg<<endl;
      (*p1).avg = 77.5;
      cout<<c1.avg<<endl;
} 