#include <iostream>
using namespace std; 

//  create Class
class Animal {

    public:
    // state or property
    int age = 13;
    string name = "hhh";
    int teeth , hight ;

    public:
    // behaviour
    // void eat(int data ){
    //     cout<<"Food "<<data<<endl;

    // }
    // void sleep (){
    //     cout<<"sleep only night"<<endl;

    // }
    void eat( ){
        cout<<"Food "<<endl;

    }
    void sleep (){
        cout<<"sleep only night"<<endl;

    }
};


int main (){

    Animal obj;
    // obj.hight = 12;
    // obj.teeth = 32;
    // cout<<"age "<<obj.age<<endl;
    // cout<<"name "<<obj.name<<endl;
    // cout<<""<<endl;
    // cout<<"hight"<<obj.hight<<endl;
    // cout<<"daat"<<obj.teeth<<endl;
    
    // behaviour print
    // obj.eat(3);
    // obj.sleep();


    obj.eat();
    obj.sleep();

    return 0; 
}