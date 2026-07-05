#include<iostream>
#include<vector>
using namespace std;

void sort(vector<int>&arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
       int min_index= i;
        for(int j=i+1;j<n;j++){
           if(arr[min_index]>arr[j]){
            min_index=j;
             }
    }
    int temp=arr[i];
    arr[i]=arr[min_index];
    arr[min_index]=temp;
 }
}
int main(){
    vector<int>arr={0,1,2,1,2,0,0};
    sort(arr);
    for(int x:arr)
    cout<<x<<"";
}