#include <iostream>
using namespace std;
// ################   Constructors  ##################
// A constructor in C++ is a special method that is automatically called when an object of a class is created.
// To create a constructor, use the same name as the class, followed by parentheses ():

class MyClass {     // The class
  public:           // Access specifier
    int weight ;
    string types;
    
// Destructor is also a special member function like constructor. Destructor destroys the class objects created by constructor. 
// Destructor has the same name as their class name preceded by a tilde (~) symbol
// Destructor call for dynamic memory allocation ke liye (using delete keyword).

    ~ MyClass() { 
    cout<<"I am inside destructor "<<endl;

}


};

class Car {        // The class
  public:          // Access specifier
    string brand;  // Attribute
    string model;  // Attribute
    int year;      // Attribute
    //Constructors can also take parameters (just like regular functions), which can be useful for setting initial values for attributes.
    Car(string x, string y, int z) { // Constructor with parameters
      brand = x;
      model = y;
      year = z;
    }
};

int main(){
//  MyClass ob;

//  MyClass* obj= new MyClass;
//  cout<<endl<<obj->types;
//  cout<<endl<<ob.weight; 
  // Create Car objects and call the constructor with different values
//   Car carObj1("BMW", "X5", 1999);
//   Car carObj2("Ford", "Mustang", 1969);

//   // Print values
//   cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
//   cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";


// destructor
MyClass a;
a.types = 'hh';







return 0;



}