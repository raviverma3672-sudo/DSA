#include<bits/stdc++.h>
using namespace std;

int PivotIndex(vector<int>& nums) {
    int totalSum = 0;

    for (const int &x : nums) {
        totalSum += x;
    }

    int leftSum = 0;
    int rightSum = 0;

    for (size_t i = 0; i < nums.size(); i++) {
        rightSum = totalSum - leftSum - nums[i];

        if (leftSum == rightSum) {
            return static_cast<int>(i);
        }

        leftSum += nums[i];
    }

    return -1;
}
