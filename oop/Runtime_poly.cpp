#include <iostream>
using namespace std;
class Animal{
    public:
    void speak(){
        cout<<"speaking"<<endl;
    }

};
class Dog:public Animal{
    public:
    //override
    void speak(){
        cout<<"bark"<<endl;
    }
};
int main(){
    Animal obj;
    obj.speak();
  
    Dog d;
    d.speak();
    return 0;
    
}