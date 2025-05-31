// Part 1: Standard Binary Search (on sorted array)
// 1. Classic Binary Search
// Problem: Find the index of target in a sorted array.

// Logic:
// Directly search in sorted array.

#include<bits/stdc++.h>
using namespace std;
int binarySearch(vector<int>& arr, int target) {
    int low = 0, high = arr.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) low = mid + 1;
        else high = mid - 1;
    }

    return -1;
}
// 2. First and Last Occurrence of a Number
// Problem: Find the first and last index of target in a sorted array with duplicates.

// Logic:
// Modify binary search to go left/right when target is found.

int firstOccurrence(vector<int>& arr, int target) {
    int low = 0, high = arr.size() - 1, res = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            res = mid;
            high = mid - 1;
        } else if (arr[mid] < target) low = mid + 1;
        else high = mid - 1;
    }

    return res;
}
// 3. Search in Rotated Sorted Array
// Problem: Find index of target in array rotated at pivot.

// Logic:
// Use binary search, but decide which half is sorted.


int search(vector<int>& nums, int target) {
    int low = 0, high = nums.size() - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (nums[mid] == target) return mid;

        // Left half is sorted
        if (nums[low] <= nums[mid]) {
            if (nums[low] <= target && target < nums[mid])
                high = mid - 1;
            else
                low = mid + 1;
        } else {
            if (nums[mid] < target && target <= nums[high])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }

    return -1;
}
// 🧩 Part 2: Binary Search on Answer
// 4. Koko Eating Bananas
// Problem: Minimize eating speed k so Koko can finish all piles within h hours.

// Logic:
// Search space: [1, max(piles)]

// isValid(mid): check if total hours using speed mid ≤ h


bool isValid(vector<int>& piles, int h, int k) {
    long long time = 0;
    for (int pile : piles)
        time += (pile + k - 1) / k;
    return time <= h;
}

int minEatingSpeed(vector<int>& piles, int h) {
    int low = 1, high = *max_element(piles.begin(), piles.end()), ans = -1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (isValid(piles, h, mid)) {
            ans = mid;
            high = mid - 1;
        } else low = mid + 1;
    }

    return ans;
}
// 5. Aggressive Cows (SPOJ)
// Problem: Maximize the minimum distance between any two cows placed in stalls.

// Logic:
// Search space: [1, max_dist]

// isValid(mid): Can we place cows at ≥ mid distance?

bool isValid(vector<int>& stalls, int cows, int dist) {
    int count = 1, last = stalls[0];

    for (int i = 1; i < stalls.size(); i++) {
        if (stalls[i] - last >= dist) {
            count++;
            last = stalls[i];
        }
    }

    return count >= cows;
}

int aggressiveCows(vector<int>& stalls, int cows) {
    sort(stalls.begin(), stalls.end());

    int low = 1, high = stalls.back() - stalls[0], ans = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (isValid(stalls, cows, mid)) {
            ans = mid;
            low = mid + 1;
        } else high = mid - 1;
    }

    return ans;
}
// 6. Minimum Capacity to Ship Packages in D Days
// Problem: Find the least weight capacity of a ship to ship all packages in D days.

// Logic:
// Search space: [max(weights), sum(weights)]

// isValid(mid): check if we can ship in ≤ D days

bool isValid(vector<int>& weights, int D, int cap) {
    int days = 1, total = 0;
    for (int w : weights) {
        if (total + w > cap) {
            days++;
            total = 0;
        }
        total += w;
    }
    return days <= D;
}

int shipWithinDays(vector<int>& weights, int D) {
    int low = *max_element(weights.begin(), weights.end());
    int high = accumulate(weights.begin(), weights.end(), 0);
    int ans = high;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (isValid(weights, D, mid)) {
            ans = mid;
            high = mid - 1;
        } else low = mid + 1;
    }

    return ans;
}
// 7. Allocate Minimum Pages (GFG)
// Problem: Split books between m students such that max pages is minimized.

// Logic:
// Search space: [max(pages), sum(pages)]

// isValid(mid): can we allocate books so no student has more than mid pages?


bool isValid(vector<int>& pages, int m, int limit) {
    int students = 1, sum = 0;
    for (int p : pages) {
        if (sum + p > limit) {
            students++;
            sum = p;
        } else sum += p;
    }
    return students <= m;
}

int minPages(vector<int>& pages, int m) {
    int low = *max_element(pages.begin(), pages.end());
    int high = accumulate(pages.begin(), pages.end(), 0);
    int ans = high;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (isValid(pages, m, mid)) {
            ans = mid;
            high = mid - 1;
        } else low = mid + 1;
    }

    return ans;
}


// First and Last Occurrence of Element
// Logic: Use BS twice for first and last.

int firstOccurrence(vector<int>& arr, int x) {
    int l = 0, r = arr.size()-1, ans = -1;
    while (l <= r) {
        int mid = (l + r)/2;
        if (arr[mid] == x) ans = mid, r = mid - 1;
        else if (arr[mid] < x) l = mid + 1;
        else r = mid - 1;
    }
    return ans;
}
// ✅ 3. Square Root of Number (BS on Answer)
// Logic: Search space = [0, n]

int sqrtFloor(int x) {
    int l = 0, r = x, ans = -1;
    while (l <= r) {
        int mid = (l + r)/2;
        if (1LL * mid * mid <= x) {
            ans = mid;
            l = mid + 1;
        } else r = mid - 1;
    }
    return ans;
}
// ✅ 4. K-th Element of Two Sorted Arrays
// Logic: Use binary search on partition.

int kthElement(vector<int>& a, vector<int>& b, int k) {
    if (a.size() > b.size()) return kthElement(b, a, k);
    int n = a.size(), m = b.size();
    int l = max(0, k - m), r = min(k, n);

    while (l <= r) {
        int cut1 = (l + r)/2;
        int cut2 = k - cut1;
        int l1 = cut1 == 0 ? INT_MIN : a[cut1 - 1];
        int l2 = cut2 == 0 ? INT_MIN : b[cut2 - 1];
        int r1 = cut1 == n ? INT_MAX : a[cut1];
        int r2 = cut2 == m ? INT_MAX : b[cut2];

        if (l1 <= r2 && l2 <= r1) return max(l1, l2);
        else if (l1 > r2) r = cut1 - 1;
        else l = cut1 + 1;
    }
    return 1;
}
// ✅ 5. Median of Two Sorted Arrays
// Logic: Similar to kth element.

double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
    int n = a.size(), m = b.size();
    if (n > m) return findMedianSortedArrays(b, a);

    int l = 0, r = n;
    while (l <= r) {
        int cut1 = (l + r)/2;
        int cut2 = (n + m + 1)/2 - cut1;

        int l1 = cut1 == 0 ? INT_MIN : a[cut1 - 1];
        int l2 = cut2 == 0 ? INT_MIN : b[cut2 - 1];
        int r1 = cut1 == n ? INT_MAX : a[cut1];
        int r2 = cut2 == m ? INT_MAX : b[cut2];

        if (l1 <= r2 && l2 <= r1) {
            if ((n + m) % 2 == 0)
                return (max(l1, l2) + min(r1, r2))/2.0;
            else return max(l1, l2);
        } else if (l1 > r2) r = cut1 - 1;
        else l = cut1 + 1;
    }
    return 0.0;
}
// ✅ 6. Minimize Maximum Distance to Gas Station
// Logic: BS on the smallest possible maximum distance.

bool possible(vector<double>& stations, int k, double dist) {
    int count = 0;
    for (int i = 0; i < stations.size()-1; i++) {
        count += int((stations[i+1] - stations[i]) / dist);
    }
    return count <= k;
}

double minMaxDist(vector<double>& stations, int k) {
    double low = 0.0, high = 1e8, mid;
    while (high - low > 1e-6) {
        mid = (low + high)/2;
        if (possible(stations, k, mid))
            high = mid;
        else
            low = mid;
    }
    return high;
}