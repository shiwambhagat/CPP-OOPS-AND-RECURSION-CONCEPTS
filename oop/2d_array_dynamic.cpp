#include<iostream>
using namespace std;
int main(){
    int row=5;
    int col=3;
    int **arr=new int *[5];
    for(int i=0;i<row;i++){
        arr[i]=new int[col];
    }
    //pointing
    for(int j=0;j<row;j++){
        for(int k=0;k<col;k++){
            cout<<arr[j][k]<<" ";
        }
        cout<<endl;
    } 
    //deallocate or delete
    // for(int i=0;i<row;i++){
    //     delete []arr[i];
    // }
    // delete []arr;

    return 0;
} 