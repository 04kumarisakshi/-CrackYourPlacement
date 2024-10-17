#include <iostream>
#include <vector>
#include <climits>

class Solution {
public:
    int maxSubArray(std::vector<int>& nums) {
        int sum = 0;
        int maximum = INT_MIN;
        
        // Standard for loop
        for(int i = 0; i < nums.size(); ++i) {
            sum = std::max(nums[i], sum + nums[i]);  // Compare current element and sum + current element
            maximum = std::max(maximum, sum);        // Track the maximum subarray sum
        }
        
        return maximum;
    }
};

int main() {
    Solution sol;
    std::vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    std::cout << "Maximum subarray sum: " << sol.maxSubArray(nums) << std::endl;
    return 0;
}
