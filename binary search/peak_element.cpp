#include <vector>
using namespace std;

// Function to find the peak in a bitonic array that may contain duplicates
// question an array contains first increasing element than decreasing elements find the peak element in an array
int findPeak(vector<int>& arr) {
    int low = 0, high = arr.size() - 1;

    while (low < high) {
        int mid = (low + high) / 2;

        // If plateau or duplicate detected, fallback to linear search
        if (arr[mid] == arr[mid + 1]) {
            // Linear scan to find peak (may happen in worst case)
            for (int i = low + 1; i < arr.size() - 1; ++i) {
                if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
                    return i;  // Found actual peak
                }
            }
            return arr.size() - 1; // No internal peak found
        }

        // Binary search logic
        if (arr[mid] < arr[mid + 1]) {
            low = mid + 1;
        } else {
            high = mid;
        }
    }

    return low; // peak index
}

/*
    ✅ Time Complexity:
        Best Case: O(log n) → If no duplicates or plateau, binary search finds peak quickly
        Worst Case: O(n)    → If duplicates create a plateau, fallback to linear scan
*/
