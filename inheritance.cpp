#include <iostream>
using namespace std; 
//The capability of a class to derive properties and characteristics from another class is called Inheritance
//Sub Class:     The class that inherits properties from another class is called Subclass or Derived Class. 
//Super Class:   The class whose properties are inherited by a subclass is called Base Class or Superclass. 
class Animal{
    public:
    int age;
    int weight;



};

class Dog : public Animal{


};










int main(){
    Dog d1;

    cout<<"Age "<<d1.age;
 

}
