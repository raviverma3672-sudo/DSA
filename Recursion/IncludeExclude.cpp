//subsequence

#include<iostream>
#include<vector>
using namespace std;

SubSequence(string str,vector<string>&ans,string output, int i){
    if(i==string.length()){
        ans.push_back(output);
        return;
    }
    char ch=str[i];
    SubSequence(str,i+1,output+ch,ans);
    SubSequence(str,i+1,output,ans);

}



int main(){
    string str= abc;
    string output="";
    int i=0;
    SubSequence(str,output,i)

}