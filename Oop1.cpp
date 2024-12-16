# include <iostream>
using namespace std;

class Animal{
    // state or properties will be variable
    private:
    int weight;
    public:
    int age;
    string name;

    // CONSTRUCTOR
    Animal(){
        this->weight = 0;
        this->age = 0;
        this->name = " ";
        cout<<"Contructor call"<<endl;
    }
    // parameterised Constructor
    Animal(int age){
        this->age = age;
        cout<<"Parametrise"<<endl;
    }

    Animal(int weight,int age){
        this->age = age;
        this->weight = weight;
        cout<<"Parametrise2"<<endl;
    }

    // Destructer
    ~Animal(){
        cout<<"I am destructer"<<endl;
    }

    // Behaviour/method will be function
    void eat(){
        cout<<"eating"<<endl;

    }
    void sleep(){
        cout<<"sleeping"<<endl;


    }
    int getWeight(){
        return weight;
    }
    void setWeight(int w){
        this->weight = weight;
    }

    

};



int main(){
    // // object creation
    // Animal obj1;
    // obj1.age = 12;
    // obj1.name = "Dada";

    // // static 
    // cout<<"Age of "<<obj1.age<<endl;
    // cout<<"name of "<<obj1.name<<endl;

    // obj1.eat();
    // obj1.sleep();
    
    // obj1.setWeight(101);
    // cout<<"weight of obj1 "<<obj1.getWeight()<<endl;





    // Dynamic 
    // Animal * obj2 = new Animal;

    // obj2->age = 15;
    // obj2->name = "billi";

    // cout<<"Age of "<<obj2->age<<endl;
    // cout<<"name of "<<obj2->name<<endl;


    // obj2->eat();
    // obj2->sleep();
    // obj2->setWeight(12);
    // cout<<"HII"<<endl;


    // Animal a(10);
    // Animal*b = new Animal(100,12);

    Animal a;
    a.age = 4;


    Animal *v = new Animal();
    v->age = 12;


    // manually
    delete v;




    



  
 



return 0;
}