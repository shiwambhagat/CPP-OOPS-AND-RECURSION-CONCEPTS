#include<iostream>
using namespace std;
class Maths{
    public:
    int sum(int a,int b){
       
        cout<<"I am the first signature"<<endl;
         return a+b;

    }
    int sum(int a,int b,int c){
        
        cout<<"I am the second signature"<<endl;
        return a+b+c;
    }
    int sum(int a,float b){
       
        cout<<"I am the third signature"<<endl;
         return a+b;
    }};
    int main(){
        Maths obj;
        cout<<obj.sum(10,20)<<endl;
        cout<<obj.sum(10,20,30)<<endl;
        cout<<obj.sum(10,10.0f);
        return 0;

    
}