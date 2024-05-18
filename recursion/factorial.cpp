 #include<iostream>
 using namespace std;
 int factorial(int n){
    //base case
    if(n==1)
    return 1;

    int chotiProbAns=factorial(n-1);
    int badiProbAns=n*chotiProbAns;
    return badiProbAns;
 }
 int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    int ans=factorial(n);
    cout<<"answer is"<<ans;
 }