// Storing Multiple Elements in One Number

// This technique involves encoding two values (or elements) into a single integer by taking advantage 
//of mathematical operations such as multiplication, addition, and modulus. It is especially useful when
// we want to store two values in an array while minimizing space usage and avoiding overflow.

// In this problem, we use the concept of encoding and decoding two elements of an array into one integer.
// This is particularly helpful when we need to manipulate the original values of the array without using extra space.

// Problem Description
// Given an array nums, we need to build a new array such that each element at index i is replaced 
//by nums[nums[i]]. However, we need to achieve this transformation without using extra space for another array.

// The challenge is to store both the original value nums[i] and the transformed value nums[nums[i]] 
//in the same position in the array.

// Solution Approach
// Encoding Two Values in One Integer:

// We want to store two values:

// nums[i] (original value at index i)

// nums[nums[i]] (transformed value at index i)

// To achieve this, we combine both values into one integer using multiplication and addition.
// We choose a factor large enough to separate the two values (e.g., 1001).

// First, store the transformed value nums[nums[i]] in the higher part by multiplying by 1001.

// Then, add the original value nums[i] in the lower part.

// Decoding the Combined Integer:

// After encoding both values into a single integer, we can easily decode the values by dividing the 
//combined value by 1001 to recover the transformed value.

// The remaining part (after the modulus operation) gives the original value nums[i].


class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n = nums.size();

        // First pass: Store the original value and the transformed value in one integer
        for (int i = 0; i < n; i++) {
            int z = nums[i];            // Original value at index i
            int k = nums[nums[i]];      // Transformed value at index i
            
            // Encode both values in one number
            nums[i] = (k % 1001) * 1001 + z;
        }

        // Second pass: Extract the transformed value from the combined number
        for (int i = 0; i < n; i++) {
            nums[i] = nums[i] / 1001;   // Get the transformed value
        }

        return nums;
    }
};
// Explanation of the Code:
// First Pass:

// We loop through each element in the array nums and encode both nums[i] (the original value) and nums[nums[i]] (the transformed value) into a single integer.

// The formula (k % 1001) * 1001 + z ensures that both values fit into the same integer, with k % 1001 being stored in the higher part (multiplied by 1001), and z stored in the lower part.

// Second Pass:

// After encoding the values, we need to decode them. We do this by dividing the encoded value by 1001, which gives us the transformed value (i.e., nums[nums[i]]).

// Time Complexity:

// The time complexity of this solution is O(n), where n is the number of elements in the array. We loop through the array twice: once for encoding and once for decoding.

// Space Complexity:

// The space complexity is O(1) since we only modify the original array nums and do not use any extra space for another array.