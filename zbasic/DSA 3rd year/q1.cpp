// // // #include <iostream>
// // // using namespace std;

// // // int main() {
// // //     int t;  // number of test cases
// // //     cin >> t;

// // //     while (t--) {
// // //         int a1, a2, b1, b2;
// // //         cin >> a1 >> a2 >> b1 >> b2;

// // //         int suneetWins = 0;

        
// // //         int round1 = (a1 > b1) - (a1 < b1); 
// // //         int round2 = (a2 > b2) - (a2 < b2); 
// // //         if (round1 + round2 > 0) suneetWins++; 

       
// // //         round1 = (a1 > b2) - (a1 < b2); 
// // //         round2 = (a2 > b1) - (a2 < b1); 
// // //         if (round1 + round2 > 0) suneetWins++; 

       
// // //         round1 = (a2 > b1) - (a2 < b1); 
// // //         round2 = (a1 > b2) - (a1 < b2); 
// // //         if (round1 + round2 > 0) suneetWins++; 

        
// // //         round1 = (a2 > b2) - (a2 < b2); 
// // //         round2 = (a1 > b1) - (a1 < b1); 
// // //         if (round1 + round2 > 0) suneetWins++; 

// // //         cout << suneetWins << endl;
// // //     }

// // //     return 0;
// // // }
// // #include <iostream>
// // #include <string>
// // #include <vector>
// // using namespace std;

// // bool isSubsequence(const string &s, const string &t) {
// //     int j = 0;
// //     for (char c : s) {
// //         if (j < t.length() && c == t[j]) {
// //             j++;
// //         }
// //     }
// //     return j == t.length();
// // }

// // int main() {
// //     int T;  // number of test cases
// //     cin >> T;

// //     while (T--) {
// //         string s, t;
// //         cin >> s >> t;

// //         bool possible = false;
// //         for (int i = 0; i <= s.length() - t.length(); ++i) {
// //             string candidate = s;
// //             int k = 0;
// //             bool canForm = true;
// //             for (int j = 0; j < candidate.length(); ++j) {
// //                 if (k < t.length() && j >= i && j < i + t.length()) {
// //                     if (candidate[j] == '?' || candidate[j] == t[k]) {
// //                         candidate[j] = t[k];
// //                         k++;
// //                     } else {
// //                         canForm = false;
// //                         break;
// //                     }
// //                 } else if (candidate[j] == '?') {
// //                     candidate[j] = 'a';
// //                 }
// //             }
// //             if (canForm && isSubsequence(candidate, t)) {
// //                 possible = true;
// //                 s = candidate;
// //                 break;
// //             }
// //         }

// //         if (possible) {
// //             cout << "YES" << endl;
// //             cout << s << endl;
// //         } else {
// //             cout << "NO" << endl;
// //         }
// //     }

// //     return 0;
// // }
// // #include <iostream>
// // using namespace std;

// // int main() {
// //     int t;  // number of test cases
// //     cin >> t;

// //     while (t--) {
// //       long long  int l, r;
// //         cin >> l >> r;
// //         long long int n=r-l+1;
// //             long long int arr[n];
// //            int count=0;
// //         for( long long int i=1;i<=n;i++)
// //         {
// //           arr[i]=l;
// //           l++; 
// //           if(arr[i]!=0)
// //           {
// //             arr[i]=arr[i]/3;
// //             arr[i+1]=arr[i+1]*3;
//         //     count++;
//         //   }
//         // }
//         //  cout<<count<<endl;
            
//         // for(long long int i=1;i<=n;i++)
//         // {
//         // //   arr[i]=l;
//         // //   l++;
//         // cout<<arr[i]<<" ";
//         // }

//        // cout << minOperations << endl;
//    // }

//     //return 0;
// // }
// // 
// // #include <iostream>
// // #include <vector>

// // using namespace std;

// // int main() {
// //     int t;
// //     cin >> t;

// //     while (t--) {
// //         int xc, yc, k;
// //         cin >> xc >> yc >> k;

// //        // int arr[k][2];
// //         vector<pair<int, int>> points;
// //         if(k%2==0)
// //         {
// //             for(int i=1;i<=(k/2);i++)
// //             {
              
// //                // cout<<
// //                     points.push_back({xc + i, yc });
// //                     points.push_back({xc - i, yc });
                
// //             }
// //         }
// //         else if(k==1)
// //         {
// //                 points.push_back({xc , yc });
// //         }
// //         else
// //         {
// //             for(int i=1;i<=((k-1)/2);i++)
// //             {
              
// //                // cout<<
// //                      points.push_back({xc , yc });
// //                     points.push_back({xc + i, yc });
// //                     points.push_back({xc - i, yc });
                
// //             }
// //         }
// //         //vector<pair<int, int>> points;

// //         // // Generate k distinct points such that their center is (xc, yc)
// //         // for (int i = 0; i < k; ++i) {
// //         //     points.push_back({xc + i, yc + i});
// //         // }

// //         // // Output the points
// //         for (const auto& p : points) {
// //             cout << p.first << " " << p.second << endl;
// //         }
// //     }

// //     return 0;
// // }
// // #include <bits/stdc++.h>
// // #include <vector>
// // #include <algorithm>

// // using namespace std;

// // int main() {
// //     int t;
// //     cin >> t;

// //     while (t--) {
// //         int n;
// //         cin >> n;

// //         vector<int> p(n);
// //         for (int i = 0; i < n; ++i) {
// //             cin >> p[i];
// //         }
// // // y i o f 9 089
// //         vector<int> q(n);
// //         for(int i=0;i<n;++i)
// //         {
// //             q[i]=p[(i+1)%n];
// //         }
// //         for(int i=0;i<n;++i)
// //         {
// //            cout<<q[i]<<" ";
// //         }
// //         cout << endl;
// //     }

// //     return 0;
// // }
// // #include<bits/stdc++.h>
// // using namespace std;
// // int main()
// // {
// //    long long int t,n,cs;
// //    cin>>t;
// //     while(t--)
// //     {
// //         cs=1;

// //         cin>>n;
// //        // cs=1;
// //         long long int b[300005],a[300005],c[300005];
// //        // vector<int> ay(n),by(n);
// //         for(int i=1;i<=n;i++)
// //         {
// //             cin>>a[i];
// //             // cin>>b[i];
// //             c[n-i+1]=a[i];
// //         }
// //         for(int i=1;i<=n;i++)
// //         {
// //               cin>>b[i];
// //             if(b[i]!=a[i])
// //             {
// //                 cs=0;
// //             }
// //         }
// //         if(cs==0)
// //         {
// //             cs=1;
// //             for(int i=1;i<=n;i++)
// //             {
// //                 if(b[i]!=c[i])
// //                 {
// //                     cs=0;
// //                 }
// //             }
// //         }

// //         if (cs)
// //         {
// //             cout<<"Bob"<<endl;
// //         }
// //         else{
// //             cout<<"Alice"<<endl;
// //         }
       
// //     }
// //     return 0;
// // }
// // #include<bits/stdc++.h>
// // using namespace std;

// // long long dist(long long e,long long f,long long g, long long h)
// // {
// //     int m= f-e;
// //         int n= h-g;
// //         return (m*m)+(n*n);
// // }
// // int main()
// // {
// //     long long int t;
// //     cin>>t;
// //     while(t--)
// //     {
// //        long long int n,i,flag=0;
// //         cin>>n;
// //         long long int a[n],b[n];
// //         for(i=0;i<n;i++)
// //         {
// //             cin>>a[i]>>b[i];
// //         }
// //        long long int x,y,z,d;
// //         cin>>x>>y>>z>>d;
// //         // int m= y-x;
// //         // int n= d-z;
// //           long long int k = dist(x,y,z,d);
// //         for(i=0;i<n;i++)
// //         {
// //             if(k>= dist(a[i],b[i],z,d))
// //             {
// //                 flag =1;
// //                 break;
// //             }
// //         }
// //         if (flag)
// //         {
// //                 cout<<"NO"<<endl;
// //         }
// //         else{
// //             cout<<"YES"<<endl;
// //         }

// //     }
// //     return 0;
// // }
// // #include<bits/stdc++.h>
// // #include <iostream>
// // #include <vector>
// // #include <algorithm>

// // using namespace std;

// // bool canAddPointClosestToAll(const vector<int>& points) {
// //     int n = points.size();
// //     int minGap = points[1] - points[0];
    
// //     for (int i = 2; i < n; ++i) {
// //         minGap = min(minGap, points[i] - points[i-1]);
// //     }
    
// //     return minGap > 1;
// // }

// // int main() {
// //     int t;
// //     cin >> t;
    
// //     while (t--) {
// //         int n;
// //         cin >> n;
// //         vector<int> points(n);

        
// //         for (int i = 0; i < n; ++i) {
// //             cin >> points[i];
// //         }
// //         int n = points.size();
// //     int minGap = points[1] - points[0];
    
// //     for (int i = 2; i < n; ++i) {
// //         minGap = min(minGap, points[i] - points[i-1]);
// //     }
    
// //     return minGap > 1;
        
// //         if (canAddPointClosestToAll(points)) {
// //             cout << "YES" << endl;
// //         } else {
// //             cout << "NO" << endl;
// //         }
// //     }
    
// //     return 0;
// // }


// // #include <iostream>
// // #include <unordered_map>
// // #include <vector>
// // using namespace std;

// // int minOperationsToEqualElements(vector<int>& arr, int n) {
// //     unordered_map<int, int> frequencyMap;

// //     // Count the frequency of each element
// //     for (int num : arr) {
// //         frequencyMap[num]++;
// //     }

// //     // Find the element with the maximum frequency
// //     int maxFreq = 0;
// //     int maxFreqElement = arr[0];
// //     for (auto& entry : frequencyMap) {
// //         if (entry.second > maxFreq) {
// //             maxFreq = entry.second;
// //             maxFreqElement = entry.first;
// //         }
// //     }

// //     // Count the number of transitions where arr[i] != maxFreqElement
// //     int operations = 0;
// //     for (int i = 0; i < n; i++) {
// //         if (arr[i] != maxFreqElement && arr[(i + 1) % n] == maxFreqElement) {
// //             operations++;
// //         }
// //     }

// //     // The minimum operations needed is the number of transitions
// //     return operations;
// // }

// // int main() {
// //     int t;
// //     cin >> t;

// //     while (t--) {
// //         int n;
// //         cin >> n;
// //         vector<int> arr(n);
// //         for (int i = 0; i < n; i++) {
// //             cin >> arr[i];
// //         }

// //         // Compute the minimum operations required
// //         int result = minOperationsToEqualElements(arr, n);

// //         cout << result << endl;
// //     }

// //     return 0;
// // }


// // #include<bits/stdc++.h>
// // using namespace std;
// // int main()
// // {
// //    string s;
// //    cin>>s;
// //          int n= s.size();
// //         int cnt =0,cn=0,c=0;
// //         for(int i=0;i<n;i++)
// //         {
// //           if(s[i]=='(') 
// //           {
// //             cnt++;
// //           }
// //           else if(s[i]==')') 
// //           {
// //             cnt--;
// //           }
// //           if(cnt<0) 
// //           {
// //             cout<<"false";
// //           }

// //         }
         
// //          for(int i=0;i<n;i++)
// //          {
// //             if(s[i]=='{') 
// //             {
// //                 cn++;
// //             }
// //             else if(s[i]=='}')
// //             {
// //                 cn--;
// //             }
// //              if(cn<0) 
// //              {
// //                 cout<<"false";
// //              }
// //          }
       

// //         for(int i=0;i<n;i++)
// //         {
// //               if(s[i]=='[')
// //               { 
// //                 c++;
// //               }
// //                else if(s[i]==']') 
// //                {
// //                 c--;
// //                }  
// //                 if(c<0) 
// //                 {
// //                     cout<<"false";
// //                 }
// //         }
         
        
// //         if   ((cnt==0 && cn==0) && c==0)
// //         {
// //          cout<<"true"<<endl;
// //         }
// //       cout<<cnt<<" "<<cn<<" "<<c<<endl;

// //    return 0;
// // }



// // #include <bits/stdc++.h>
// // #include <string>
// // #include <algorithm> 
// // using namespace std;

// // int main() {
// //     int t;
// //     cin >> t;
// //     string vowels = "aeiou";  
// //     while (t--) {
// //         int n;
// //         cin >> n;
        
        
// //         string result;
// //         for (int i = 0; i < n; i++) {
// //             result += vowels[i % 5];  
// //         }
        
        
// //         sort(result.begin(), result.end());
        
        
// //         cout << result << endl;
// //     }
    
// //     return 0;
// // }


// #include<bits/stdc++.h>
// using namespace std;

// void readInput(int &n,int &m,int &q,int &a,int &b, int &pos)
// {
//     cin>>n>>m>>q>>a>>b>>pos;
// }

// int calculateResult(int n,int a, int b, int pos)
// {
//     if(pos< min(a,b))
//     {
//         return min(a,b)-1;
//     }
//     else if ( pos> max(a,b))
//     {
//         return n- max(a,b);
//     }
//     else 
//     {
//       int   midVal=  (a+b)/2;
//       return min(abs(midVal-a),abs(midVal-b));
//     }
// }

// void processtestcases(int t)
// {
//     while(t--)
//     {
//         int n,m,q,a,b,pos;
//         readInput(n,m,q,a,b,pos);
//         cout<<calculateResult(n,a,b,pos)<<endl;
//     }
// }
// int main()
// {
//     int t;
//     cin>>t;
//     processtestcases(t);
//     return 0;
// }



// #include <iostream>
// #include <cmath>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int n, m, q, a, b, p;
//         cin >> n >> m >> q >> a >> b >> p;

//         int r;
//         if (p < min(a, b))
//         {
//             r = min(a, b) - 1;
//         }
//         else if (p > max(a, b))
//         {
//             r = n - max(a, b);
//         }
//         else
//         {
//             int mid = (a + b) / 2;
//             r = min(abs(mid - a), abs(mid - b));
//         }

//         cout << r << endl;
//     }

//     return 0;
// }



#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    // Traverse through all elements in the array
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false; // To track if a swap happened
        // Last i elements are already sorted, so ignore them
        for (int j = 0; j < n - i - 1; j++) {
            // If the current element is greater than the next element, swap them
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true; // A swap happened
            }
        }
        // If no two elements were swapped in the inner loop, break
        if (!swapped)
            break;
    }
}

int main() {
    vector<int> arr = {5,8,3,7,4,2,6,1};
    
    cout << "Original array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    
    bubbleSort(arr);
    
    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
