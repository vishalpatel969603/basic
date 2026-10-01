#include<iostream>
using namespace std;
class Student{
public:
     int rno;
     string name;

     Student(){

     }
     Student(int r,string n,float m){
        rno = r;
        name = n;
        marks= m;
     }
    //  void display(Student s){
    //     cout<<s.name<<" "<<s.rno<<endl;
    //  }

     float getmarks(){
    return marks;
}
     void setMarks(float m){
           marks = m;
     }

private:
      float marks;

};
int main(){
     Student s1(67,"Vishal patel",85.5);
      cout<<s1.getmarks()<<endl;
       s1.setMarks(98.5);
        cout<<s1.getmarks()<<endl;
}