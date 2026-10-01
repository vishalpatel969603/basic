#include<iostream>
using namespace std;
class Car{ // Student is a new data type
public:
       string name;
       int price;
       int seats;
       string type;
};
void print(Car c){
    cout<<c.name<<" "<<c.price<<" "<<c.type<<" "<<endl;
}
void change(Car c){
    c.name = "Audi A8";
}

int main(){
    Car c1;
    c1.name = "Honda city";
    c1.price = 1500000;
    c1.seats =5;
    c1.type ="Sedan";
     
    print(c1);
    change(c1); // pass by value
    print(c1);


    // Car c2;
    // c2.name = "Maruti Swift";
    // c2.price = 700000;
    // c2.seats =5;
    // c2.type ="Hatchback";

    // print(c1);
    // print(c2);

}