#include<iostream>
#include<vector>
using namespace std;
bool checkSorted(vector<int>&arr,int i=0){
    
    if(i == arr.size()-1)
        return true;
    
    bool CurrentAns=false;
    bool recursionAns=false;

    if(arr[i]<arr[i+1])
        CurrentAns=true;

    recursionAns = checkSorted(arr,i+1);
    return (CurrentAns && recursionAns);
    
    
}
int main(){
    vector<int>arr={1,4,6,8,111,13,15};

   bool ans = checkSorted(arr);
   cout<<"array is sorted or not :"<<ans;
     }