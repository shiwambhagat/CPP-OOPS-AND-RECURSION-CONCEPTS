 #include<iostream>
using namespace std;
bool sort(int arr[],int& size,int st){
    //base case
    if(st==size-1){
        return true;
    }
    //solve one small problem
    if(arr[st+1]<arr[st]){
        return false;
    }
   
    sort(arr,size,st+1);
}

int main(){
    int *arr=new int[10];
    cout<<"enter the elements of the array"<<endl;
    for(int i=0;i<10;i++){
        cin>>arr[i];
    
    }
    int size=sizeof(arr);
    int st=0;
    cout<<"the inputted array is"<<endl;
    for(int j=0;j<10;j++){
        cout<<arr[j]<<"  ";
    }
    cout<<endl;
    int ans=sort(arr,size,st);
    cout<<ans;
    return 0;

}
