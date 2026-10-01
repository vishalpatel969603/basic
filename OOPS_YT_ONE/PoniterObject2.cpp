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
void change(Cricketer* c){
   c->avg =68.9; // (*c).avg 

}

int main(){
    Cricketer c1("Virat Kohli",25000,55.2);
    // cout<<c1.avg<<endl;
    // change(&c1);
    // cout<<c1.avg<<endl;
       
    Cricketer* p1 = &c1;   // c1 ke address ko  *p1 store kar diya
    cout<<p1<<endl;     //address print kiya  //*p value print karane ke liye hotha hai 
    cout<<p1->runs<<endl;   //c1 ke address par jakar runs ka value print kiya
     cout<<c1.avg<<endl;
      p1->avg = 77.5;//c1.avg
      cout<<p1->avg<<endl;
}