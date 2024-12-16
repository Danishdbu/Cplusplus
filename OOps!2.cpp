#include <iostream>
using namespace std; 
class Animal {
    //C++ Access Modifiers
// In C++, there are 3 access modifiers:

// ############# public Access Modifier ################
// The public keyword is used to create public members (data and functions).
// The public members are accessible from any part of the program.



// ################### private Access Modifier ############## 
// The private keyword is used to create private members (data and functions).
// The private members can only be accessed from within the class.
// However, friend classes and friend functions can access private members.



// ######################### protected Access Modifier #################
// Before we learn about the protected access specifier, make sure you know about inheritance in C++.
// The protected keyword is used to create protected members (data and function).
// The protected members can be accessed within the class and from the derived class.

    private:
    // state or property
    int age ;
    string name ;
    int teeth , hight ;

    public:


    int getage(){
        return age;

    }
    int setage(int a){
        age = a;

    }

};
class Circle
{  
    // private data member
    private:
        double radius;
      
    // public member function   
    public:   
        // double  compute_area()
        // {   // member function can access private
        //     // data member radius
        //     return 3.14*radius*radius;
        // }
        void comput(double x ){
            radius = x;
             
            double area = 3.14*radius*radius;
            cout<<area;
            return;
        }
     
};
int main (){
    // Animal cat;

    // cat.setage(123);
    // cout<<"age "<<cat.getage()<<endl;
     Circle obj;
     obj.comput(3);

    return 0;
}