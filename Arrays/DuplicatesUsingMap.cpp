#include<bits/stdc++.h>
using namespace std;

int FindDuplicate(vector<int>&nums){
    unordered_map<int,int>count;
    for(int i=0;i<nums.size();i++){
        count[nums[i]]++;

    }
    for(auto x:count){
        if(x.second>1)
           return x.first;
    }
    return -1;
}