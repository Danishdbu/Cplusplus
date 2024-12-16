# include<iostream>
using namespace std;



int main(){
    // int a = 5;
    // int b = 5;
    // cout<<a<<endl;

    // cout<<&a<<endl;
    // cout<<&b<<endl;

    // int a = 5;
    // // pointer create

    // int *ptr = &a;

    // // access the value ptr is pointer to

    // cout<<*ptr<<endl;


    // int a = 5;
    // int *ptr = &a;

    // cout<<"Address of a is: "<<&a<<endl;
    // cout<<"value stored at ptr is: "<<&a<<endl;
    // cout<<"value ptr is pointing to is: "<<*ptr<<endl;
    // cout<<"add of ptr "<<&ptr<<endl;

// size of pointer is integer (4byte)
    // int a = 5;
    // int *ptr = &a;

    // cout<<sizeof(ptr) <<endl;
    // cout<<sizeof(*ptr) <<endl;
    // cout<<endl;

    // char ch = 'd';
    // char *c = &ch;
    // cout<<sizeof(c) <<endl;
    // cout<<sizeof(*c) <<endl;
    // cout<<endl;

    // double d = 5.7864;
    // double *dt = &d;
    // cout<<sizeof(dt) <<endl;
    // cout<<sizeof(*dt) <<endl;


    // int *ptr;
    // cout<<*ptr; // garbage value

    // int *ptr = 0; // null pointer
    // cout<<*ptr<<endl;


    // int a = 5;
    // int *p = &a;
    // int *q = p;

    // cout<<*p<<endl;
    // cout<<*q<<endl;


int a = 5;
int *p = &a;
int *q = p;
int *r = q;

cout<<a<<endl;
//5
cout<<&a<<endl; // add of a 104

cout<<p<<endl; // 104

cout<<&p<<endl; // add of p 208

cout<<*p<<endl; // 5

cout<<q<<endl; // 104

cout<<&q<<endl; // add of q 212

cout<<*q<<endl; // 5

cout<<r<<endl; // 104

cout<<&r<<endl; // add of r 218

cout<<*r<<endl; // 5

cout<<(*p + *q + *r)<<endl; // 15

cout<<(*p)*2 + (*r)*3<<endl; // 10 + 15 = 25

cout<<(*p/2)-(*q)<<endl; // 















return 0;
}