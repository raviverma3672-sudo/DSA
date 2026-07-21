#include<iostream>
#include<vector>
using namespace std;

void Subarray(vector<int>&ans,string output,string str,int i){
    if(i==ans.size()-1){
        ans.push_back(output);
        return;
    }
    char ch=str[i];
    Subarray(ans,output+ch,i+1);
    Subarray(ans,output,i+1);

}
int main(){
    string str = "abc";
    string output="";
    Subarray(output,str,0);

}
