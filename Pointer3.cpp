# include <iostream>
using namespace std;

void util(int *p){
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<*p<<endl;
    *p=*p+1;
    cout<<*p<<endl;

    cout<<p<<endl;
}

void solve(int** ptr){
    // ptr = ptr +1;  (pass by value)
    // *ptr = *ptr +1; (pass by value)
    **ptr = **ptr +1; // (pass by reference)

}
void solveR(int &val){
    // val++;
    val=50;

}

void val(int *s ){
    *s= *s +1;
}




int main (){

 
    // int a =5;
    // int *p = &a;

    // int **q = &p;

    // cout<<a<<endl; // 5
    // cout<<&a<<endl; // add of a 104
    // cout<<p<<endl; // 104
    // cout<<&p<<endl; // 112
    // cout<<*p<<endl; // 5
    // cout<<q<<endl; // 216
    // cout<<&q<<endl; // 328
    // cout<<*q<<endl; // 104
    // cout<<**q<<endl; // 5


    // int a =5;
    // int *p = &a;
    // cout<<"Before"<<endl;
    // cout<<a<<endl; 
    // cout<<&a<<endl; 
    // cout<<&p<<endl;
    // cout<<*p<<endl;


    // util(p);
    // cout<<"After"<<endl;
    // cout<<a<<endl; 
    // cout<<&a<<endl; 
    // cout<<&p<<endl;
    // cout<<*p<<endl;


    // int x = 12;
    // int * p = &x;
    // int **q = &p;

    // solve(q);

    // cout<<x<<endl;

    //                        REFERENCE  VARIABLE
        // int a = 4;
        // // creating reference variable

        // int &b = a;

        // cout<<&a<<endl;
        // cout<<&b<<endl;


        // cout<<a<<endl;
        // cout<<b<<endl;
        // a++;
        // cout<<a<<endl;
        // cout<<b<<endl;
        // b++;
        // cout<<a<<endl;
        // cout<<b<<endl;


        // int x = 5;
        // cout<<x<<endl;
        // solveR(x);
        // cout<<x<<endl;

        int a = 5;
        // int *p = &a;
        // val(p);
        val(&a);
        cout<<a<<endl;











return 0;
}