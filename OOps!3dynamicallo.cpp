#include <iostream>
using namespace std;
class Car
{
public:
    string name;
    int price ;
    int noofseet;

public:
    void speed(){
        cout<<"60/hr";

    }
    void milage(){
        cout<<"12/km";

    }
    void power(){
        cout<<"240cc";

    }


};



int main(){
    // Dynamic memory alllocation
    Car * thar = new Car;
//   thar.price = 40000; // error because of thar hold the addresss of Car so
    (*thar).price = 400000;


    // alternate  - dynamic accise
    thar->price = 4000;
    cout<<thar->price<<endl;
    thar->power();




}