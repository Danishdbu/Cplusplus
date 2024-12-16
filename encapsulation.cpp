# include <iostream>
using namespace std;
// Encapsulation in C++ is defined as the wrapping up of data and information in a single unit.
class Animal{
    private:
          int age;
          int weight;
    public:
          void eat(){
            cout<< "Eating"<<endl;

          }
          int getAge(){
            return this->age;
          }
          int setAge(int age){
            this->age= age;
          }
};
    int main(){
        Animal cat;
        cat.setAge(12);
        cout<<cat.getAge();

    
    
    return 0;
}