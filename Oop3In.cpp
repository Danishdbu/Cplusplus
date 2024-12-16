# include <iostream>
using namespace std;
// INHERITANCE

    
class Animal{
    public:
        int age;
        int weight;

        void sleep(){
            cout<<"Sleeping time"<<endl;

        }

};

class Dog: private Animal{
        public:
            void print(){
                cout<<this->age;
    }

};

//*******************************************

class Animal1{
    protected:
        int age;
        int weight;

        void sleep(){
            cout<<"Sleeping time"<<endl;

        }

};

class Dog1: private Animal1{
        public:
            void print(){
                cout<<this->age;
    }

};

// TYPE OF INHERITANCE



class Car{
    public:
    string name;
    int seats;
    int milage;

    void colour(){
        cout<<"Black"<<endl;

    }
    void speedUp(){
        cout<<"SpeedUp"<<endl;

    }

};

class Scorpio: public Car{
    public:
    int power;

    void engine(){
        cout<<"525cc"<<endl;
    }

Scorpio(){
    power = 122;
    name = "iTEN";
    seats = 7;
    milage = 15;

}

};

// MULTI LEVEL 

class Fruit{
    public:
    string name = "mango";
    void Baag_name(){
        cout<<"Malyabadi"<<endl;
    }

};
class Mango : public Fruit{
    public:
    string mango_name = "Sapheda";
};
class Sapheda: public Mango{
    public:
    int slices = 12;

    void rate(){
        cout<<"50 rupee per KG: "<<endl;
    }
};

//MULTIPLE 

class A{
    public:
    int math;

};
class B{
    public:
    int physics;
};
class C: public A,public B {
    public:
    int phy_Chemistry;
};


// HEIRARIHICAL
class father{
    public:
    string name_PAPA;

    father(){
        name_PAPA = "Anwer";
    }

};
class Son1: public father{
    public:
    string name1;
    Son1(){
        name1 = "Danish";
    }
};
class Son2:public father{
    public:
    string name2;
    Son2(){
        name2 = "Bilal";
    }
};



int main(){

//     Dog1 d1;
//    cout<<d1.age;
//    d1.print();


// SINGLE LEVEL
 
// Scorpio iTEN;
// cout<<"Name of Car: "<<iTEN.name<<endl;
// cout<<"iTEN milage: "<<iTEN.milage<<endl;
// cout<<"Number of iTEN seats: "<<iTEN.seats<<endl;
// cout<<"iTEN engine Power: "<<iTEN.power<<endl;
// iTEN.colour();
// iTEN.engine();
// iTEN.speedUp();


// MULTI LEVEL 

// Sapheda a;
// cout<< a.name <<" "<<a.mango_name<<" "<<a.slices<<endl;


//MULTIPLE 

// C obj;
// cout<<obj.math<<" "<<obj.physics<<" "<<obj.phy_Chemistry<<endl;

// HEIRARIHICAL

// Son1 d;
// cout<<"Son1"<<endl;
// cout<<d.name1<<endl;
// cout<<d.name_PAPA<<endl;
// Son2 b;
// cout<<"Son2"<<endl;
// cout<<b.name2<<endl;
// cout<<b.name_PAPA<<endl;













return 0;   
}