#include <iostream>
using namespace std;
class Animal{
    protected:
     int age;
     int weight;
     void eat(){
        cout<<"eating"<<endl;
     }
};
class Dog:public Animal{


};
class Cat: private Animal{
    public:
    void printt(){
        cout<<this->age;

    }
};

int main(){
    Cat c;
    c.printt();//when protected variables are accessed 
               //inside private 
}