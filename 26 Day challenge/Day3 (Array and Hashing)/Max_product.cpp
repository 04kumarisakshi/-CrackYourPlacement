#include <bits/stdc++.h>
using namespace std;

int maxProduct(vector<int>& nums) {
    int pro = 1;
    int n = nums.size();
    int maximum = INT_MIN;

    // Forward iteration
    for (int i = 0; i < n; i++) {
        pro = pro * nums[i];
        maximum = max(maximum, pro);
        if (pro == 0) {
            pro = 1; // Reset product when encountering zero
        }
    }

    // Reset and reverse iteration
    pro = 1;
    for (int i = n - 1; i >= 0; i--) {
        pro = pro * nums[i];
        maximum = max(maximum, pro);
        if (pro == 0) {
            pro = 1; // Reset product when encountering zero
        }
    }

    return maximum;
}

int main() {
    vector<int> nums = {2, 3, -2, 4};
    cout << "Maximum product subarray: " << maxProduct(nums) << endl;
    return 0;
}
