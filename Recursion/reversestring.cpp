#include<iostream>
#include<string>
using namespace std;
void reverse(string &str, int i, int j){
    if(i>=j){
        return;
    }
    swap(str[i],str[j]);
    reverse(str,i+1,j-1);

   
}
int main(){
    string str;
    cout<<"Enter the string: ";
    
    cin>>str;
    reverse(str,0,str.length()-1);
    cout<<"Reversed string: "<<str;
    return 0;
}