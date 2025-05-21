#include<bits/stdtr1c++.h>
using namespace std;

long double minimisemaxdist(vector<int>&arr, int k) {
    int n = arr.size();
    vector<int> hmany(n-1,0);
    for(int gs=1; gs<=k; gs++) {
        long double maxsec =-1;
        int maxind =-1;
        for(int i=0;i<n-1;i++) {
            long double diff = (arr[i+1] - arr[i]);
            long double sectionlength = diff / (long double ) (hmany[i]+1);

            if(sectionlength>maxsec) {
                maxsec= sectionlength;
                maxind =i;
            }

        }
        hmany[maxind]++;
    }

    long double maxans =-1;
    for(int i=1; i<n-1;i++) {
        long double diff = arr[i+1]-arr[i];
        long double sectionlength = diff / (long double) (hmany[i] + 1);

        maxans = max(maxans, sectionlength);
    }
    return maxans;
}

// priority queue logic 
long double minimisemaxdist(vector<int>&arr, int k) {
    int n = arr.size();
    vector<int> v(n-1,0);
    priority_queue<pair<long double,int>> pq;

    for(int i=0;i<n-1; i++) {
        pq.push({arr[i+1]-arr[i],i});
    }

    for(int gs =1; gs<=k;gs++) {
        auto tp = pq.top();
        pq.pop();
        int ind = tp.second;
        v[ind]++;
        long double diff = arr[ind+1] - arr[ind];
        long double len = diff / (long double) (v[ind]+1);
        pq.push({len,ind});
    }

    return pq.top().first;
}

// binary search approach 


bool isPossible(vector<int>& arr, int k, double maxDist) {
    int stationsNeeded = 0;
    for (int i = 0; i < arr.size() - 1; i++) {
        double diff = arr[i + 1] - arr[i];
        stationsNeeded += (int)(ceil(diff / maxDist)) - 1;
    }
    return stationsNeeded <= k;
}

double minimiseMaxDistance(vector<int> &arr, int k){
    	
    double low = 0.0, high = arr.back() - arr.front();  // high = max segment (sorted array so max segment was first - last element)
    double eps = 1e-6;  // precision tolerance

    while (high - low > eps) {
        double mid = (low + high) / 2.0;
        if (isPossible(arr, k, mid)) {
            high = mid;
        } else {
            low = mid;
        }
    }
    return high;
}


// priority queue 

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

double minmaxGasDist(vector<int>& stations, int K) {
    // Max heap: pair<maxSegmentLength, pair<originalLength, parts>>
    priority_queue<pair<double, pair<double, int>>> pq;

    // Push initial segments
    for (int i = 0; i < (int)stations.size() - 1; ++i) {
        double length = stations[i+1] - stations[i];
        pq.push({length, {length, 1}});  // Initially, parts = 1
    }

    // Place K gas stations greedily
    while (K--) {
        auto top = pq.top(); pq.pop();

        double maxSegment = top.first;
        double length = top.second.first;
        int parts = top.second.second;

        parts++;  // Increase number of parts for this segment
        maxSegment = length / parts;

        pq.push({maxSegment, {length, parts}});
    }

    // The top segment after all insertions has the minimized max distance
    return pq.top().first;
}

int main() {
    vector<int> stations = {0, 10, 20};
    int K = 3;

    cout << "Minimized max distance: " << minmaxGasDist(stations, K) << "\n";
    return 0;
}

