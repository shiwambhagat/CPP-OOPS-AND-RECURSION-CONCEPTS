 #include<iostream>
 #include<vector>
 using namespace std;
void search(string& str,int& n,int i,char& s,vector<int>& ans){
    if(i>=n){
        return ; 
    }
    if(str[i]==s){
        ans.push_back(i);
    }
    return search(str,n,i+1,s,ans);

}

 int main(){
    string str="helloworld";
    int  n=str.length();
    int i=0;
    char s;
    cout<<"enter the keyword to search"<<endl;
    cin>>s;
    vector<int> ans;
    search(str,n,i,s,ans);
    cout<<"printing answers"<<endl;
    for(auto val:ans){
        cout<<val<<" ";
    }
    cout<<endl;
 }