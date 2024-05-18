bool sort(int arr[10],int& size,int st){
    //base case
    if(arr[st]<=size){
        return;
    }
    //solve one small problem
    if(arr[st+1]>arr[st]){
        return true;
    }
    else return false;
    sort(arr[10],size,st+1);
}