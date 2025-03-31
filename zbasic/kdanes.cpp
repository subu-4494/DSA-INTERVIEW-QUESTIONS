#include <iostream>
#include <vector>
#include <algorithm>

int maxSubArray(const std::vector<int>& nums) {
    int a = nums[0];
    int b = nums[0];
    
    for (size_t i = 1; i < nums.size(); ++i) {
        a = std::max(nums[i], a + nums[i]);
        b= std::max(b,a);
    }
    return b;
}

int main() {
    std::vector<int> nums = {1,-7,3,4,-4,-2};
    std::cout << "Maximum Subarray Sum: " << maxSubArray(nums) << std::endl;
    return 0;
}
