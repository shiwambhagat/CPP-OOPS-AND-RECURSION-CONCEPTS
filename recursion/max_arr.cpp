 #include<iostream>
 using namespace std;
void findmax(int arr[],int n,int i,int& max){
    if(i>=n){
        return;
    }
    if(arr[i]>max){
        max=arr[i];
    }
    findmax(arr,n,i+1,max);

    
    }


 int main(){
    int arr[]={101,6445,41,521,979,2,1};
    int n=7;
    int i=0;
    int max=0;
    findmax(arr,n,i,max);
    cout<<"max element is"<<max<<endl;
 }