# include <iostream>
using namespace std;
// POLYMORPHISM
class Math{
    // FUNCTION OVERLOADING
    public:
    int sum(int a,int b){
        cout<<"I am is first "<<endl;
        return a+b;
    }
    int sum(int a, int b, int c){
        cout<<"I am is second "<<endl;

        return a+b+c;
    }
    int sum(int a, float b){
        cout<<"I am is third "<<endl;

        return (a + b)+100;
    }
};
// OPERATOR OVERLOADING

class Param{
    public:
    int val;

    void operator+(Param obj2){
        int value1 = this->val;
        int value2 = obj2.val;
        cout<<(value2 - value1)<<endl;
    }


};



int main(){

    // Math obj;
    // cout<<obj.sum(2,4.43f)<<endl;

    Param obj1, obj2;
    obj1.val = 7;
    obj2.val = 10;


    // this should print the difference between them
    obj1 + obj2 ;





return 0;
};