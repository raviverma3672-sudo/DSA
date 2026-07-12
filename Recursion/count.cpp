#include<iostream>
using namespace std;
void count(int n){
    if(n==1){
        cout<<1 <<"";
        return;
    }
    count(n-1);  
    cout<<n<<endl; 
}
    int main(){
    int n;
    cout<<"enter the no to print its count";
    cin>>n;
    count(n);

}
