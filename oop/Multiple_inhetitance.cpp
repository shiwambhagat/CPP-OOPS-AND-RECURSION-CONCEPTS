#include<iostream>
using namespace std;
class A {
    public:
    int physics=1;
};
class B{
    public:
    int chemistry=2;
};
class C:public A,public B{
    public:
    int maths=3;
};
int main(){
    C obj;
    cout<<obj.physics<<" "<<obj.chemistry<<" "<<obj.maths<<endl;
    return 0;
}