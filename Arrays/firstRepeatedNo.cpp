#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int ans = -1;   

        for (int i = 0; i < nums.size() - 1; i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] == nums[j]) {
                    ans = i+1;
                    return ans;  
                }
            }
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<int> nums = {1, 2, 3, 4, 5, 3, 5};

    cout << s.findDuplicate(nums);
    return 0;
}
