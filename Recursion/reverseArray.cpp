#include<iostream>
#include<vector>
using namespace std;

void reverse(vector<int>&arr,int i,int j){
    if(arr[i]>=arr[j]){
        return;
    }
    swap(arr[i],arr[j]);
    reverse(arr,i+1,j-1);
     
}

int main(){
    vector<int>arr={1,3,4,2,5,7};
    reverse(arr,0,arr.size()-1);
    for(int i=0;i<=arr.size();i++)
    cout<<arr[i];
}