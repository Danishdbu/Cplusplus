# include <iostream>
using namespace std;
// ENCAPSULATION

class Animal{
    private:

        int age;
        int weight;
    public:

        void eating(){
            cout << "Animal eat everything"<<endl;
        }

        int getAge(){
            return this->age;
        }
        void setAge(int age){
            this->age = age;
        }




};

class demo {
    private:
        //private member hidden from outside world
        int var;
         
    public:
        //to set the value of var
        void set_var(int temp)
        {
            var =temp;
        }
         
        //to get the value of var
        int get_var()
        {
            return var;
        }
};

int main(){
    // Animal *cat = new Animal();
    // cat->setAge(12);
    // cout<<cat->getAge()<<endl;
    // cat->eating();

        //creating object of demo class
    demo obj;
     
    //using set_var function to set the value 100 to private member var
    obj.set_var(100);
     
    //using get_var function to get/access the value of private member var
    cout<<obj.get_var();

    
     
}