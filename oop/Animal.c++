#include <iostream>
using namespace std;

class Animal {
// state or properties
private:
int weight;
public:
int age;
public:
string name;

// constructor
Animal() {
    cout << "constructor called" << endl;
}

// parameterized constructor
Animal(int age) {
    this->age = age;
    cout << "parameterized constructor called" << endl;
}

// copy constructor
Animal(const Animal& obj) {
    this->age = obj.age;
    this->weight = obj.weight;
    this->name = obj.name;
    cout << "I am inside copy constructor" << endl;
}

// destructor
~Animal() {
    cout << "destructor called" << endl;
}

// behavior
void eat(string food) {
    cout << "eating " << food << endl;
}
void sleep(int hours) {
    cout << "sleeping for " << hours << " hours" << endl;
}

int getWeight() const {
    return weight;
}
void setWeight(int weight) {
    this->weight = weight;
}

void print() const {
    cout << this->age << " " << this->weight << " " << this->name << endl;
}
};

int main() {
    // static memory allocation
    Animal ramesh;
    ramesh.age = 12;
    ramesh.name = "hello";

    cout << "age of ramesh is " << ramesh.age << endl;
    cout << "name of ramesh is " << ramesh.name << endl;
    ramesh.eat("grass");
    ramesh.sleep(8);
    ramesh.setWeight(101);
    cout << "weight " << ramesh.getWeight() << endl;

    // dynamic memory allocation
    Animal* suresh = new Animal(15);
    suresh->name = "billi";

    suresh->eat("meat");
    suresh->sleep(10);

    // object copy
    Animal a(12);
    Animal b;
    b.age = 2;
    b.setWeight(20);
    b.name = "barbie";

    Animal c = b;

    b.print();
    c.print();

    delete suresh;

    return 0;
}


/*#include <iostream>
using namespace std;

class Animal{
//state or properties
private:
int weight;
public:
int age;
public:
string name;

//constructor
Animal(){
   this->weight=0;
   this->age=0;
   this->name=0; 
    cout<<"constructor called"<<endl;
}

//behaviour
void eat(){
cout<<"eating"<<endl;
}
void sleep(){
cout<<"sleeping"<<endl;
} 

int getWeight(){//getter and setter
    return weight;
}
int setWeight(int weight){
    this->weight = weight;
}};
int main(){
    //static memory allocation 
    Animal ramesh;     
    ramesh.age=12;
    ramesh.name="hello";
    
    cout<<"age of ramesh is"<<ramesh.age<<endl;
    cout<<"name of ramesh is"<<ramesh.name<<endl;
    ramesh.eat();
    ramesh.sleep();
    ramesh.setWeight(101);
    cout<<"weight "<<ramesh.getWeight()<<endl;

//Dynamic Memory Allocation 
Animal *suresh=new Animal;
(*suresh).age=15;
(*suresh).name="billi";

//altername-dynamic alllocation
suresh->age=17;
suresh->name="kutta";    

suresh->eat();
suresh->sleep();






}*/