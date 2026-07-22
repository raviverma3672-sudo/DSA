#include <bits/stdc++.h>
using namespace std;

void printSubarray(vector<int>& arr,int n,int s,int e) {
    if(s==n){
        return;
    }
    if(e==n){
        printSubarray(arr,n,s+1,s+1);
        return;
    }
	    for(int i=s;i<e;i++){
            cout<<arr[i]<<"";
            cout<<endl;
        }
        printSubarray(arr,n,s,e+1);
    }
    int main(){
        vector<int>arr={1,2,34,4,5};
        int n=arr.size();
        printSubarray(arr,n,0,0);
        return 0;
    }
        
