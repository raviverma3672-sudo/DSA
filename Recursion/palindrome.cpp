#include<iostream>
#include<string>
using namespace std;
bool isPalindrome(string str,int i,int j){

    if(i>=j){
        return true;
    }
    if(str[i]!=str[j]){
        return false;
    }
    return isPalindrome(str,i+1,j-1);
}
int main(){
    
    string str;
    cout<<"Enter the string: ";
    cin>>str;
    bool result=isPalindrome(str,0,str.length()-1);
    if(result){
        cout<<"The string is a palindrome";
    }
    else{
        cout<<"The string is not a palindrome";
    }
}