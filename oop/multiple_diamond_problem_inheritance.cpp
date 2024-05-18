#include<iostream>
using namespace std;
class A {
    public:
    int chemistry=5;
};
class B{
    public:
    int chemistry=4;
};
class C:public A,public B{
    public:
    int maths=44;
};
int main(){
    C obj;
    cout<<" "<<obj.A::chemistry<<" "<<obj.maths<<" "<<obj.B::chemistry<<endl;
    return 0;
}