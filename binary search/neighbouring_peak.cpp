// ✅ Question:
// Given an array where a peak element is defined as an element that is strictly greater than its neighbors,
// find any one peak element and return its index.
// Note: An element is a peak if it is greater than both its adjacent elements.
// For corner elements, only one neighbor is considered.

// 🔍 Example:
// Input: arr = [1, 2, 3, 4, 6, 4, 3, 2, 1]
// Output: 4 (because 6 > 4 and 6 > 4)

// 💡 Intuition:
// A peak is an element which is greater than its adjacent values. If an element is smaller than the one on its right,
// then a peak must exist on the right. Similarly, if it's greater than the one on the right, a peak could be here or on the left.
// Using this slope behavior, we can apply binary search to reduce the search space logarithmically.

// 🔧 Logic:
// 1. Use binary search.
// 2. At each mid, compare arr[mid] with arr[mid+1].
//    - If arr[mid] > arr[mid+1], then a peak exists on the left side (including mid).
//    - If arr[mid] < arr[mid+1], then a peak exists on the right side.
// 3. Continue until low == high → that index is a peak.
//
//
//        / \
//       /   \   (structure of our array )    if mid was somewhere at left side (low = mid+1)  
//      /                                     on, the other hand if mid was in right side right = mid
//


#include <iostream>
#include <vector>
using namespace std;

int findPeakElement(const vector<int>& arr) {
    int low = 0, high = arr.size() - 1;

    while (low < high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] > arr[mid + 1]) {
            // You're on the descending slope
            high = mid;
        } else {
            // You're on the ascending slope
            low = mid + 1;
        }
    }
    // low == high is the peak index
    return low;
}

int main() {
    vector<int> arr = {1, 2, 3, 4,8, 6, 4, 3, 2, 1};
    int peakIndex = findPeakElement(arr);
    cout << "Peak found at index: " << peakIndex << ", Value: " << arr[peakIndex] << endl;
    return 0;
}
