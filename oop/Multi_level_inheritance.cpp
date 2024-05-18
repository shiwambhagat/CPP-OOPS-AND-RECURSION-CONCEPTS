#include<iostream>
using namespace std;
class Fruit{
    public:
    string name;

};
class Mango:public Fruit{
    public:
    int weight;

};
class Alphonso:public Mango{
    public:
    int sugarlevel;
};
int main(){
    Alphonso a;
    cout<<a.name<<" "<<a.weight<<" "<<a.sugarlevel<<endl;
     return 0;   
}
