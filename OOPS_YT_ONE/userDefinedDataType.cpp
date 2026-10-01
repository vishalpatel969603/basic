#include<iostream>
using namespace std;
class Student{ // Student is a new data type
public:
       string name;
       int rollno;
       float gpa;
};
int main(){
   Student S1;
   S1.name="Vishal patel";
   S1.rollno=67;
   S1.gpa=7.77;

   Student S2;
   S2.name="Raghav sir";
   S2.rollno=76;
   S2.gpa=8.2;


   cout<<S1.name<<" "<<S1.rollno<<" "<<S1.gpa<<endl;
   cout<<S2.name<<" "<<S2.rollno<<" "<<S2.gpa<<endl;
}