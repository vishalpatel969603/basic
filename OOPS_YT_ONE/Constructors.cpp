#include<iostream>
using namespace std;
class Student{ // Student is a new data type
public:
       string name;
       int rollno;
       float gpa;

//  Constructors
     Student(string s,int r,float g){
             name = s;
             rollno = r;
             gpa = g;
       }
       Student(){//s2 ke liye
              

       }
  
};
void print(Student s){
    cout<<s.name<<" "<<s.gpa<<" "<<s.rollno<<" "<<endl;
}
int main(){
     Student s1("Vishal patel",67,7.5);
      
          ////

      Student s3 = s1; // deep copy
        s3.name = "Manish";

         /////

         Student s4(s1); //  copy Constructor - deep 
         s4.name = "vinay";

         /////

      Student s2;
       s2.name="Raghav sir";
       s2.rollno=76;
       s2.gpa=8.2;

         print(s1);
         print(s2);
         print(s3);
         print(s4);
}