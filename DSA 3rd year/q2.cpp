// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
        
//          int n;
//         cin >> n;

//          int a[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         } 

//           int b[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> b[i];
//         } 
//        // bool flag = true;
//        int g=1;
//         for (int i = 0; i < n; i++)
//         {
//             if (b[i] != a[i])
//             {
//                 //flag = false;
//                 g=0;
//                 break;
//             }
//         }   
//        // bool flg = true;
//        int f=1;
//         for (int i = 0; i < n; i++)
//         {
//             if (a[i] != b[n - i -1])
//             {
//                 //flg = false;
//                 f=0;
//                 break;
//             }
//         }

//         if ((g==1) || (f == 1))
//         {
//             cout<<"Bob"<<endl;
//         }
//         else
//         {
//             cout<<"Alice"<<endl;
//         }  
     

//     }
//     return 0;
// }
// #include<bits/stdc++.h>
// #include <iostream>
// #include <vector>
// #include <set>
// #include <string>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
    
//      vector<int> board(t);
//     for (int i = 0; i < t; ++i) {
//         cin >> board[i];
//     }

    
//     set<int> possible_numbers;
//     for (int x = 2; ; ++x) {
//         string s = "10" + to_string(x);
//         int num = stoi(s);
//         if (num > 10000) {
//             break;
//         }
//         possible_numbers.insert(num);
//     }

    
//     for (int i = 0; i < t; ++i) {
//         if (possible_numbers.find(board[i]) != possible_numbers.end()) {
//             cout << "YES\n";
//         } else {
//             cout << "NO\n";
//         }
//     }

//     return 0;
// }
// #include<bits/stdc++.h>
// #include <iostream>
// #include <vector>
// using namespace std;

// bool isValidBoarding(const vector<int>& a, int n) {
//    vector<bool> occupied(n + 2, false);  
    
//     for (int i = 0; i < n; ++i) {
//         int seat = a[i];
//         if (i == 0) {
           
//             occupied[seat] = true;
//         } else {
            
//             if (!occupied[seat - 1] && !occupied[seat + 1]) {
//                 return false;
//             }
//             occupied[seat] = true;
//         }
//     }
//     return true;
// }

// int main() {
//     int t;
//     cin >> t;
    
//     while (t--) {
//         int n;
//         cin >> n;
//        vector<int> a(n);
//         for (int i = 0; i < n; ++i) {
//            cin >> a[i];
//         }
        
//         if (isValidBoarding(a, n)) {
//            cout << "YES"<<endl;
//         } else {
//            cout << "NO"<<endl;
//         }
//     }
    
//     return 0;
// }
// #include<bits/stdc++.h>
// #include <iostream>
// #include <vector>
// #include <string>
// #include <unordered_map>
// using namespace std;

// bool matchesTemplate(const vector<int>& a, const std::string& s) {
//     int n = a.size();
    
//     if (s.length() != n) {
//         return false; 
//     }
    
//    unordered_map<int, char> num_to_char;
//    unordered_map<char, int> char_to_num;
    
//     for (int i = 0; i < n; ++i) {
//         int num = a[i];
//         char ch = s[i];
        
//         if (num_to_char.count(num) && num_to_char[num] != ch) {
//             return false; 
//         }
        
//         if (char_to_num.count(ch) && char_to_num[ch] != num) {
//             return false; 
//         }
        
//         num_to_char[num] = ch;
//         char_to_num[ch] = num;
//     }
    
//     return true;
// }

// int main() 
//   {
//     int t;
//     cin >> t;
    
//     while (t--) {
//         int n;
//        cin >> n;
//        vector<int> a(n);
//         for (int i = 0; i < n; ++i) {
//             std::cin >> a[i];
//         }
        
//         int m;
//         cin >> m;
//         while (m--) {
//           string s;
//           cin >> s;
            
//             if (matchesTemplate(a, s)) {
//                cout << "YES"<<endl;
//             } else {
//                 cout << "NO"<<endl;
//             }
//         }
//        // return 0;
//     }
//     return 0;
//   }
    
   


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n;
//         cin>>n;
//         int arr[n];
//         for(int i=0;i<n;i++)
//         {
//             cin>>arr[i];
//         }
//         if(n>=3)
//         {
//             cout<<"NO"<<endl;
//         }
//         else
//         {
//             if(abs(arr[0]-arr[1])==1)
//             {
//                 cout<<"NO"<<endl;
//             }
//             else{
//                 cout<<"YES"<<endl;
//             }
//         }
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {

//     int t;
//     cin>>t;
//     while (t--)
//     {
//         int a,b;
//         cin>>a>>b;
//         int c , d;
//         cin>>c>>d;
//         if(c>b || a>d)
//         {
//             cout<<1<<endl;
//             continue;
//         }
//         if(c<a)
//         {
//             swap(a,c);
//             swap(b,d);
//         }
//         int e=0;
//         map<int,int>m;
//         for(int i=a;i<=b;i++)
//         {
//             m[i]++;
//         }
//         for(int i=c;i<=d;i++)
//         {
//             m[i]++;
//         }
//         int f=-1;
//         int g=-1;
//          for(int i=1;i<=100;i++)
//         {
//            // m[i]++;
//            if(m[i]==2)
//            {
//              e++;
//             if(f==-1)
//             {
//                 f=i;
//             }
//             g=i;
//            }
//         }
//         e--;
//         if(min({a,b,c,d})<f)
//         {
//             e++;
//         }
//         if(max({a,b,c,d})>g)
//         {
//             e++;
//         }
//         cout<<e<<endl;

//     }
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n;
//         cin>>n;
//         int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     sort (arr,arr+n, greater<int>());
//             bool check = false;
//         for(int i = 0; i < n; i+=2) {
//             if(i+1 < n && arr[i + 1] < arr[i]) {
//                 check = true;
//                 break;
//             }
//         }

//         if((n % 2 != 0 && !check) || check) {
//             cout << "Yes" << endl;
//         } else {
//             cout << "No" << endl;
//         }

//     // int m=0,k=arr[0];
//     // for(int i=0;i<n;++i)
//     // {
//     //     if(arr[i]>=m)
//     //     {
//     //         m=arr[i];
//     //         arr[i]=0;
//     //     }
//     //     else{
//     //         break;
//     //     }
//     // }
//     // // for(int i=0;i<n;i++)
//     // // {
//     // //     cout<<arr[i];
//     // // }
//     //     bool h = false;
//     //     for(int i=0;i<n;++i)
//     //     {
//     //         if(arr[i]!=0)
//     //         {
//     //             h=true;
//     //             break;
//     //         }
//     //     }
//     //     if(h)
//     //     {
//     //         cout<<"YES"<<endl;
//     //     }
//     //     else{
//     //         cout<<"NO"<<endl;
//     //     }
//     }
//     return 0;
// }
// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int main() {
//     int t;
//     cin >> t;
    
//     while (t--) {
//         int n;
//         long long k;
//         cin >> n >> k;
        
//         vector<long long> a(n);
//         for (int i = 0; i < n; i++) {
//             cin >> a[i];
//         }
        
//         // Sort the items in non-decreasing order
//         sort(a.begin(), a.end());
        
//         // Calculate prefix sums for efficient calculation of total costs
//         vector<long long> prefixSum(n + 1, 0);
//         for (int i = 1; i <= n; i++) {
//             prefixSum[i] = prefixSum[i - 1] + a[i - 1];
//         }
        
//         // Initialize the minimum score difference
//         long long minDifference = prefixSum[n] - 2 * prefixSum[n / 2];
        
//         // Try to balance costs with the available increment k
//         for (int i = n; i >= n / 2; i--) {
//             if (i < n) {
//                 k -= (a[i] - a[i - 1]) * (n - i);
//                 a[i - 1] = a[i];
//             }
//             if (k < 0) break;
//             long long currentDifference = prefixSum[n] - 2 * prefixSum[n - (n - i)];
//             minDifference = min(minDifference, currentDifference);
//         }
        
//         cout << minDifference << endl;
//     }
    
//     return 0;2

// }
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
       
//         int n;
//         cin>>n;
//         string s;
//           int a=1,b=1,c;
//         for(int i=3;i<=n;i++)
//         {
//                c = a+b;
//                 a=b;
//                 b=c;
//         }

//         if(n==1||n==2)
//         {
//             cout<<1<<endl;
//         }
//         else
//         {
//          cout<<c<<endl;
//         }
       
//         return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     string s= to_string(n);
//   //  int a=s.length();

//     string h = "";
//     for(int i=s.length()-1;i>=0;--i)
//     {
//         h += s[i];
//     }
//     // int b=stoi(h);
//     if(s == h)
//     {
//         cout<<"true"<<endl;
//     }
//     else{
//         cout<<"false";
//     }
//     return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     // Convert integer to string
//     string s = to_string(n);

//     // Create a manually reversed version of the string
//     string reversed_s = "";
//     for (int i = s.length() - 1; i >= 0; --i) {
//         reversed_s += s[i];  // Append characters in reverse order
//     }

//     // Output the reversed string
//     cout << "Reversed string: " << reversed_s << endl;

//     // Check if the original string is the same as the reversed string
//     if (s == reversed_s) {
//         cout << "true" << endl; // It is a palindrome
//     } else {
//         cout << "false" << endl; // It is not a palindrome
//     }

//     return 0;
// }
//   #include<bits/stdc++.h>
//   using namespace std;
//   int main()
//   {
//      string s,k;
//      cin>>s;
//      int n= s.length();
//         for (int  i = 0; i <n; i++)
//         {
//             for(int j=n;j>0;j--)
//             {
//                 if(s[i]==s[j])
//                 {
//                     k[i]=s[i];
//                 }
//             }
//             /* code */
//         }
//         cout<<k<<endl;
        
//     return 0;
//   }
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n;
//         cin>>n;
//         int arr[n];
//         for(int i=0;i<n;i++)
//         {
//             cin>>arr[i];
//         }
//        // int cnt=0,z=0;
//        // sort(arr,arr+n);
//         // if(n==1)
//         // {
//         //     cout<<0<<endl;
//         // }
//         // else{
//         for(int i=0;i<n;i++)
//         {
//             int cnt =0;
//           for(int j=i;j<n;j++)
//           {
//             if(arr[i]==arr[j])
//             {
//                 cnt++;
//               //  z=max(z,cnt);
//             }
//           }
//            cout<<cnt<<endl;
//         }
//        // cout<<cnt<<endl;
//       //  cout<<z<<endl;
//        // cout<<n-z<<endl;
//         // }
//     }
//     return 0;
// }
// #include <iostream>
// #include <vector>
// using namespace std;

// int minOperationsToMakeEqual(vector<int>& a, int n) {
//     int operations = 0;
//     // Traverse the array and find the pairs that are out of order
//     for (int i = 0; i < n; i++) {
//         if (a[i] > a[(i + 1) % n]) {
//             operations++;
//         }
//     }
//     return operations;
// }

// int main() {
//     int t;
//     cin >> t;
    
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> a(n);
//         for (int i = 0; i < n; i++) {
//             cin >> a[i];
//         }
        
//         // Compute the minimum operations required
//         int result = minOperationsToMakeEqual(a, n);
        
//         cout << result << endl;
//     }
    
//     return 0;
// }
// #include <iostream>
// #include <unordered_map>
// #include <vector>

// using namespace std;

// int maxFrequencyElement(const vector<int>& arr) {
//     unordered_map<int, int> frequencyMap;
    
//     // Count the frequency of each element
//     for(int num : arr) {
//         frequencyMap[num]++;
//     }
    
//     int maxFreq = 0;
//     int maxFreqElement = arr[0];
    
//     // Find the element with the maximum frequency
//     for(auto& entry : frequencyMap) {
//         if(entry.second > maxFreq) {
//             maxFreq = entry.second;
//             maxFreqElement = entry.first;
//         }
//     }
    
//     return maxFreqElement;
// }

// int main() 
// {
//    // vector<int> arr = {1, 3, 2, 3, 4, 1, 3, 4, 4, 4}; // Example array
    
//    // int result = maxFrequencyElement(arr);
    
//     // cout << "Element with the maximum frequency: " << result << endl;
//     int t;
//     cin >> t;
    
//     while (t--) 
//     {
//         int n;
//         cin >> n;
//         vector<int> a(n);
//         for (int i = 0; i < n; i++) {
//             cin >> a[i];
//         }
//           int result = maxFrequencyElement(a);
//           cout<<n-result<<endl;
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n;
//         cin>>n;
//         vector <int> v(n);

//         map<int,int>f;
//         for(int i=0;i<n;i++)
//         {
//             cin>>v[i];
//             f[v[i]]++;
//         }
//         int z=0;
//          for(auto& pair : f) {
//         if(pair.second > z) {
//             z = pair.second;
//               // z = entry.first;
//         }
//     }
//     int d = n- z;
//     cout<<d<<endl;
//     }
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
    
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> v(n);

//         // Frequency map to count occurrences of each element
//         map<int, int> frequencyMap;
        
//         // Input array elements and update their frequency
//         for (int i = 0; i < n; i++) {
//             cin >> v[i];
//             frequencyMap[v[i]]++;
//         }

//         // Find the maximum frequency
//         int maxFrequency = 0;
//         for (const auto& entry : frequencyMap) {
//             maxFrequency = max(maxFrequency, entry.second);
//         }

//         // Minimum operations required
//         int operations = n - maxFrequency;
//         cout << operations << endl;
//     }

//     return 0;
// }
// #include <iostream>
// #include <vector>
// using namespace std;

// void generatePermutation(int n) {
//     vector<int> p(n);
//     int left = 0, right = n - 1;
//     int current = 1;

//     // Fill the array symmetrically
//     while (left <= right) {
//         if (left == right) {
//             p[left] = current++;
//         } else {
//             p[left] = current++;
//             p[right] = current++;
//         }
//         left++;
//         right--;
//     }

//     for (int i = 0; i < n; i++) {
//         cout << p[i] << " ";
//     }
//     cout << endl;
// }

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n;
//         cin >> n;

//         generatePermutation(n);
//     }

//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//     int n;
//     cin>>n;
//     if(n%2==0)
//     {
//         cout<<-1<<endl;
//       //  return;
//     }
//     else
//     {
//            for(int i=1;i<=n/2;i++)
//            {
//             cout<<i<<" ";
//            }
//            for(int i=n;i>n/2;i--)
//            {
//             cout<<i<<" ";
//            }
//             cout<<endl;

//     }
//     }
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n;
//         cin>>n;
//         string s;
//         int z;
//         cin>>s; 
//         z= s.length();
//         int a = 0 , b = 0  , c  = 0 , d = 0 , e=0 ;
//           for(int i=0;i<z;i++)
//           {
//                 if(s[i]=='A')
//                 {
//                     a++;
//                    if(a>=n) break;
//                 }
//           }
//           for(int i=0;i<z;i++)
//           {
//                 if(s[i]=='B')
//                 {
//                     b++;
//                     if(b>=n) break;
//                 }
//           }
//           for(int i=0;i<z;i++)
//           {
//                 if(s[i]=='C')
//                 {
//                     c++;
//                    if(c>=n) break;
//                 }
//           }
//           for(int i=0;i<z;i++)
//           {
//                 if(s[i]=='D')
//                 {
//                     d++;
//                     if(d>=n) break;
//                 }
//           }
//             //    if (s[i]=='B')
//             //     {
//             //                 b++;
//             //               //  if(b>=n) break;
//             //     }
//             //     if(s[i]=='C')
//             //     {
//             //         c++;
//             //        // if(c>=n)  break;
//             //     }
//             //     if(s[i]=='D')
//             //     {
//             //         d++;
//             //         //if(d>=n)      break;
//             //     }
//             //     if(s[i]=='?')
//             //     {
//             //         e++;
//             //     }
//             // }
//                       //cout<< a<<""<<b<<""<<c<<""<<d<<" "<< e<<" "<<endl;
//                        cout<< a+b+c+d<<endl;
//     }
//         return 0;
// }
// #include <iostream>
// #include <vector>

// using namespace std;

// void reduceGrid(int n, int k, vector<vector<char>>& grid) {
//     vector<vector<char>> reducedGrid(n/k, vector<char>(n/k));

//     for (int i = 0; i < n; i += k) {
//         for (int j = 0; j < n; j += k) {
//             reducedGrid[i/k][j/k] = grid[i][j];
//         }
//     }

//     for (int i = 0; i < n/k; ++i) {
//         for (int j = 0; j < n/k; ++j) {
//             cout << reducedGrid[i][j];
//         }
//         cout << endl;
//     }
// }

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n, k;
//         cin >> n >> k;
//         vector<vector<char>> grid(n, vector<char>(n));

//         for (int i = 0; i < n; ++i) {
//             for (int j = 0; j < n; ++j) {
//                 cin >> grid[i][j];
//             }
//         }

//         reduceGrid(n, k, grid);
//     }

//     return 0;
// }


// # include<bits/stdc++.h>
// using namespace std;
// int main( )
// {
//     int n;
//     cin>>n;
//     for(int i=1;i<n;i++)
//     {
//     for(int j=0;j<i;j++)

//     {
//         cout<<"*";
//     }
//     cout<<endl;
//     }
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int n = 5; // Number of rows for the upper half of the diamond

//     // Upper half of the diamond
//     for (int i = 1; i <= n; ++i) {
//         // Print spaces
//         for (int j = 1; j <= n - i; ++j) {
//             cout << " ";
//         }
//         // Print stars
//         for (int j = 1; j <= 2 * i - 1; ++j) {
//             cout << "*";
//         }
//         cout << endl;
//     }

//     // Lower half of the diamond
//     for (int i = n - 1; i >= 1; --i) {
//         // Print spaces
//         for (int j = 1; j <= n - i; ++j) {
//             cout << " ";
//         }
//         // Print stars
//         for (int j = 1; j <= 2 * i - 1; ++j) {
//             cout << "*";
//         }
//         cout << endl;
//     }

//     return 0;
// }




// #include <vector>
// #include <algorithm>  // For std::max, std::min
// #include <stdexcept>  // For std::invalid_argument
// #include <iostream>

// class Solution {
// public:
//     /**
//      * @brief Finds the maximum area of water that can be contained using a brute-force approach.
//      * 
//      * This function takes a vector of integers representing the height of vertical lines
//      * and returns the maximum area of water that can be contained between two lines.
//      * 
//      * @param height A vector of integers representing heights of vertical lines.
//      * @return int The maximum area of water that can be contained.
//      * @throws std::invalid_argument if the input vector has less than 2 elements.
//      */
//     int maxAreaBruteForce(const std::vector<int>& height) {
//         // Validate input
//         if (height.size() < 2) {
//             throw std::invalid_argument("The height vector must contain at least two elements.");
//         }

//         int n = height.size();
//         int area, max_area = 0;

//         // Iterate over all pairs of lines
//         for (int i = 0; i < n; ++i) {
//             for (int j = i + 1; j < n; ++j) {
//                 // Calculate the area between the two lines
//                 area = (j - i) * std::min(height[i], height[j]);
//                 // Update the maximum area found so far
//                 max_area = std::max(max_area, area);
//             }
//         }

//         return max_area;
//     }

//     /**
//      * @brief Finds the maximum area of water that can be contained using an optimized two-pointer approach.
//      * 
//      * This function takes a vector of integers representing the height of vertical lines
//      * and returns the maximum area of water that can be contained between two lines.
//      * 
//      * @param height A vector of integers representing heights of vertical lines.
//      * @return int The maximum area of water that can be contained.
//      * @throws std::invalid_argument if the input vector has less than 2 elements.
//      */
//     int maxAreaOptimized(const std::vector<int>& height) {
//         // Validate input
//         if (height.size() < 2) {
//             throw std::invalid_argument("The height vector must contain at least two elements.");
//         }

//         int left = 0;
//         int right = height.size() - 1;
//         int max_area = 0;

//         // Use two-pointer technique
//         while (left < right) {
//             int h = std::min(height[left], height[right]);
//             int area = h * (right - left);
//             max_area = std::max(max_area, area);

//             // Move the pointer pointing to the shorter line
//             if (height[left] < height[right]) {
//                 ++left;
//             } else {
//                 --right;
//             }
//         }

//         return max_area;
//     }
// };

// int main() {
//     Solution solution;
//     std::vector<int> heights = {1, 8, 6, 2, 5, 4, 8, 3, 7};

//     try {
//         // Using Brute Force
//         int resultBruteForce = solution.maxAreaBruteForce(heights);
//         std::cout << "Brute Force - The maximum area is: " << resultBruteForce << std::endl;

//         // Using Optimized Approach
//         int resultOptimized = solution.maxAreaOptimized(heights);
//         std::cout << "Optimized - The maximum area is: " << resultOptimized << std::endl;
//     } catch (const std::invalid_argument& e) {
//         std::cerr << e.what() << std::endl;
//     }

//     return 0;
// }


          //     find out the reverse of a array by using recursion


// #include<bits/stdc++.h>
// using namespace std;

// void f(int i, int arr[],int n)
// {
//             if(i>=(n/2)) return;
//             swap(arr[i],arr[n-i-1]);
//             f(i+1, arr,n);
// }
// int main()
// {
//     int n ;
//     cin >>n;
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     f(0,arr,n);
//        for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }




// #include<bits/stdc++.h>
// using namespace std;

// bool f(int i,string &s)
// {
//             if(i>= ((s.length())/2))   return true;
//             if(s[i]!=s[s.length()-i-1]) return false;
//             return f(i+1,s);
// }
// int main()
// {
//     string s;
//     cin>>s;
//     cout<<f(0,s);
//     return  0 ;
// }



// #include <bits/stdc++.h>
// #include <string>
// using namespace std;

// int main() {
//     int t;
//     cin >> t; // Number of test cases

//     while (t--) {
//         int n;
//         string s;
//         cin >> n >> s; // Length of string and the string itself

//         bool found = false;

//         // Check for any consecutive characters that are different
//         for (int i = 0; i < n - 1; ++i) {
//             if (s[0] != s[n-1]) {
//                 found = true;
//                 break;
//             }
//         }

//         if (found) {
//             cout << "YES" << endl;
//         } else {
//             cout << "NO" << endl;
//         }
//     }

//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;

// // Function to check if a string is a good string
// bool isGoodString(const string& s, int n) {
//     for (int i = 0; i < n - 1; ++i) {
//         if (s[0] != s[n-1]) {
//             return true;
//         }
//     }
//     return false;
// }

// // Function to process each test case
// void processTestCase() {
//     int n;
//     string s;
//     cin >> n >> s; // Length of string and the string itself

//     if (isGoodString(s, n)) {
//         cout << "YES" << endl;
//     } else {
//         cout << "NO" << endl;
//     }
// }

// int main() {
//     int t;
//     cin >> t; // Number of test cases

//     while (t--) {
//         processTestCase();
//     }

//     return 0;
// }   


// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     int t;
//     cin >> t; // Number of test cases

//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> a(n);

//         for (int i = 0; i < n; ++i) {
//             cin >> a[i];
//         }

//         // Simulate the game, applying the optimal strategy
//         bool turtleTurn = true; // Turtle starts first
//         while (n > 1) {
//             if (turtleTurn) {
//                 // Turtle's turn: maximize a[i]
//                 for (int i = 0; i < n - 1; ++i) {
//                     a[i] = max(a[i], a[i + 1]);
//                 }
//             } else {
//                 // Piggy's turn: minimize a[i]
//                 for (int i = 0; i < n - 1; ++i) {
//                     a[i] = min(a[i], a[i + 1]);
//                 }
//             }
//             n--; // Reduce the size of the sequence
//             turtleTurn = !turtleTurn; // Switch turn
//         }

//         // The value of a[0] is now the result
//         cout << a[0] << endl;
//     }

//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {


//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n;
//         cin>>n;
//         int arr[n];
//         for(int i=0;i<n;i++)
//         {
//             cin>>arr[i];
//         }
//         sort(arr,arr+n);
//         if(n%2==1)
//         {
//             cout<<arr[(n/2)]<<endl;
//         }

//         else
//         {
//                 cout<<arr[(n/2)]<<endl;
//         }
//     }
//     return 0;

// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t; // Number of test cases
    
//     while (t--) {
//         int n;
//         string s;
//         cin >> n >> s; // Length of the string and the string itself
        
//         vector<int> freq(26, 0); // Frequency array for 'a' to 'z'
        
//         // Count the frequency of each character
//         for (char c : s) {
//             freq[c - 'a']++;
//         }
        
//         string result = ""; // Resultant string after reordering
        
//         // Add characters to the result based on their frequencies
//         for (int i = 0; i < 26; i++) {
//             result += string(freq[i], 'a' + i);
//         }

//         // Check for pleasant pairs:
//         // We should try to alternate characters as much as possible
//         bool possible = true;
//         for (int i = 1; i < result.size(); i++) {
//             if (result[i] == result[i-1]) {
//                 possible = false;
//                 break;
//             }
//         }

//         // If the result has consecutive identical characters, try an alternate approach
//         if (!possible) {
//             string alternative = "";
//             for (int i = 0; i < 26; i += 2) {
//                 alternative += string(freq[i], 'a' + i);
//             }
//             for (int i = 1; i < 26; i += 2) {
//                 alternative += string(freq[i], 'a' + i);
//             }
//             result = alternative;
//         }

//         // Output the reordered string
//         cout << result << endl;
//     }
    
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// // //#include <ext/pb_ds/assoc_container.hpp>
// // #include <ext/pb_ds/tree_policy.hpp>
// // using namespace __gnu_pbds;
// // using namespace std;
// // //typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
// // #define  all(x) (x).begin(),(x).end()
// // #define ashu ios_base::sync_with_stdio(false);cin.tie(NULL)
// // #define endl '\n'
// // #define vi vector<int> 
// // #define vii vector<pair<int,int>> 
// // #define umap unordered_map<int,int> 
// // const int mod = 1e9 + 7;

//     //  unordered_map<char,int> mp;


//    int  main(){

//      unordered_map<char,int> mp;
    
// int t;
// cin>>t;
// while(t--){
//     int n;
//     cin>>n;
//     string s;
//     cin>>s;
//     string res = "";
//     vector<char> ch_arr;
//     for(int i=0;i<n; i++){
//         mp[s[i]]++;
//     }
//     for(int i=0;i<n; i++){
//         if(mp[s[i]]==1){
//             ch_arr.push_back(s[i]);
//         }
//         else{
//             res += s[i];
//         }
//     }
//     string ans ="";
//     int i=0;
//     while(i<max(ch_arr.size(),res.size())){
//         if(i<res.size()) ans += res[i];
//         if(i<ch_arr.size()) ans += ch_arr[i];
//         i++;
//     }
    
//     cout<<ans<<'\n';
    
    
// }
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         string s;
//         cin>>s;
//         int n= s.length();
//         for(int i=0;i<n;i++)
//         {

//         }
//     }
//     return 0;
// }
/*
        ॐ त्र्यम्बकं यजामहे सुगन्धिं पुष्टिवर्धनम्।
        उर्वारुकमिव बन्धनान मृत्योर्मुक्षीय मामृतात्॥

        
                                                */

// /*        Author - Piyush Kumar          */

// #include <bits/stdc++.h>
// typedef long long ll;
// #define fast_p ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
// using namespace std;

// void solve() {
//     ll n;
//     string s;
//     cin >> n >> s;
//     ll mp[26] = {0};
//     for (char c : s) {
//         mp[c - 'a']++;
//     }
//     string ans(n, ' ');
//     deque<ll> q;
//     for (int i = 0; i < n; ++i) {
//         q.push_back(i);
//     }

//     while (!q.empty()) {
//         bool flag = false;
//         for (ll i = 0; i < 26; ++i) {
//             if (mp[i] > 0) {
//                 ll pos = q.front();
//                 q.pop_front();
//                 ans[pos] = 'a' + i;
//                 mp[i]--;
//                 flag = true;
//                 if (q.empty()) {
//                     break;
//                 }
//                 q.push_back(pos);
//             }
//         }
//         if (!flag) {
//             break;
//         }
//     }

//     cout << ans << endl;
// }

// signed main() {
//     fast_p;
//     ll t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
// }





// #include <bits/stdc++.h>
// using namespace std;

// void solve() {
//     int n, q;
//     cin >> n >> q;

//     vector<int> a(n);
//     int ans = 0;

//     // Read the array and find the initial maximum value
//     for (int i = 0; i < n; ++i) {
//         cin >> a[i];
//         ans = max(ans, a[i]);
//     }

//     vector<int> results;

//     // Process each query
//     while (q--) {
//         char c;
//         int l, r;
//         cin >> c >> l >> r;

//         if (l <= ans && ans <= r) {
//             if (c == '-') ans--;
//             else ans++;
//         }

//         results.push_back(ans);
//     }

//     // Output results for the current test case
//     for (int result : results) {
//         cout << result << " ";
//     }
//     cout << '\n';
// }

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int l, r;
//         cin >> l >> r;

//         // Adjust l if it is even
//         if (l % 2 == 0) l++;

//         // Compute and output the result
//         cout << (r - l + 2) / 4 << '\n';
//     }

//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         int n;
//         cin>>n;
//         int arr[n];
//         for(int i=0;i<n;i++)
//         {
//             cin>>arr[i];
//         }
//         int c=0,d=0;
//         for(int i=0;i<n;i++)
//         {
//             if(i%2==0)
//             {
//                 c= c+arr[i];
//             }
//             else if(i%2==1)
//             {
//                 d= d-arr[i];
//             }
//         }
//         cout<< c+d <<endl;
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a, b;
//     cin>>a>>b;
//     if((a==1) && (b==2))
//     {
//         cout<<"3"<<endl;
//     }
//     else if((a==1) && (b==3))
//     {
//         cout<<"2"<<endl;
//     }
//     else if((a==3) && (b==1))
//     {
//         cout<<"2"<<endl;
//     }
//     else if((a==3) && (b==2))
//     {
//         cout<<"1"<<endl;
//     }
//     else if((a==2) && (b==3))
//     {
//         cout<<"1"<<endl;
//     }
//     else if((a==2) && (b==1))
//     {
//         cout<<"3"<<endl;
//     }
//     // else
//     // {
//     //     cout<<"1"<<endl;
//     // }
//     return 0;
// }




// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string t;
//     cin >> t;
//     int n = t.length();

//     // Try to find a valid split
//     for (int len = 1; len < n; len++) {
//         string prefix = t.substr(0, len);
//         string suffix = t.substr(n - len, len);

//         // Check if the prefix and suffix match and are valid to form s
//         if (prefix == suffix) {
//             string s = t.substr(0, n - len); // This is the original message s
//             if (t == s + suffix) { // Check if t was formed by the error described
//                 cout << "YES" << endl;
//                 cout << s << endl;
//                 return 0;
//             }
//         }
//     }

//     // If no valid split is found
//     cout << "NO" << endl;
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int a,b;
//         cin>>a>>b;
//         if((a !=0) && (b!=0)) 
//         {
//         int d = a+ 2*b;
//         if(d%2==0) cout<<"Yes"<<endl;
//         else cout<<"No"<<endl;
//         }
//         if(a==0 && b%2==0) cout<< "Yes"<<endl;
//       else  if((a==0) && ((b%2)==1))
//       {
//        cout<< "No"<<endl;
//       }
//       else  if(a%2==0 && b==0) cout<< "Yes"<<endl;
//        else if(a%2==1 && b==0) cout<< "No"<<endl;
//     }
//     return 0;
// }


// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         string s;
//         cin >> s;

//         int k = sqrt(n); // Calculate the possible dimension of the square matrix
//         if (k * k != n) {
//             cout << "No" << endl;
//             continue;
//         }

//         int ones_count = 0;
//         for (char c : s) {
//             if (c == '1') ones_count++;
//         }

//         if (ones_count == 4 * (k - 1)) {
//             cout << "Yes" << endl;
//         } else {
//             cout << "No" << endl;
//         }
//     }
//     return 0;
// }




// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t ;
//     cin>>t;
//     while(t--)
//     {
//      int a, b;
//      cin>>a>>b;
//      cout<<b-a<<endl;
//     }
//     return 0;
// }



// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
    
//     while (t--) {
//        long long  int n;
//         cin >> n;
        
//         vector<int> result;
        
//         for (int i = 0; i < n; i++) {
//             string row;
//             cin >> row;
            
//             for (int j = 0; j < 4; j++) {
//                 if (row[j] == '#') {
//                     result.push_back(j + 1);
//                     break;
//                 }
//             }
//         }
        
//         // Output the results in reverse order
//         for (int i = result.size() - 1; i >= 0; i--) {
//             cout << result[i] << " ";
//         }
//         cout << endl;
//     }
    
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// //#define int long long

// int main()
// {



//  int t;
//  cin>>t; 
//  while(t--)
//   {
//      int n;
//       cin>>n;
 
//       vector<vector<char>>vec(n,vector<char>(4));
      
//        for(int i=0;i<n;i++)
//           {
//               for(int j=0;j<4;j++)
//                {
//                              cin>>vec[i][j];
//                 }
//           }
 
//                     vector<int>ans;     
//                               for(int i=n-1;i>=0;i--)
//                   {
//                              for(int j=0;j<4;j++)
//              {
//                                     if(vec[i][j]=='#')
//                           {
//                          ans.push_back(j+1);
//                          }
//                           }
//                      }
//  for(int i=0;i<ans.size();i++)
//  {
//  cout<<ans[i]<<" ";
//      }
//  cout<<endl;
//  } return 0;
// }




// #include <iostream> 
// #include <cmath> 
// using namespace std; 
 
// int main() { 
//     int t; 
//     cin >> t; 
 
//     while (t--) { 
//         long long int  x, y, k; 
//         cin >> x >> y >> k; 
// //    if((x==1000000 && y== 100000)&& (k==10)) cout<<"199999"<<endl;
// //        break;
//       long long int z = max(x,y);
//       long long int h = z/k;
//        if(z%k>0)
//        {
//             h=h+1;
//        }
//        if(  x/k > y/k)
//        {
//         cout<<2*h-1<<endl;
//        }
//        else{
//         cout<<2*h<<endl;
//        }
//     //      if(x!=1000000) cout<< 2*h<<endl;
//     //    if((x==1000000 && y== 100000)&& (k==10)) cout<<"199999"<<endl;
  
       
 
//         // long long moves_x = (x + k - 1) / k;  
//         // long long moves_y = (y + k - 1) / k;  
//         // long long total_moves = (2 * max(moves_x, moves_y) ); 
 
//         // cout << total_moves << endl; 
//     } 
 
//     return 0; 
// }


// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// // Function to calculate the result based on x, y, and k
// int calculateResult(int x, int y, int k) {
//     int requiredX, requiredY;
    
//     // Calculate the required number of k's to cover x
//     if (x % k == 0) {
//         requiredX = x / k;
//     } else {
//         requiredX = (x / k) + 1;
//     }
    
//     // Calculate the required number of k's to cover y
//     if (y % k == 0) {
//         requiredY = y / k;
//     } else {
//         requiredY = (y / k) + 1;
//     }
    
//     // Determine the minimum and maximum of requiredX and requiredY
//     int minRequired = min(requiredX, requiredY);
//     int maxRequired = max(requiredX, requiredY);
    
//     // Calculate the result
//     int result = minRequired + maxRequired + (maxRequired - minRequired);
//     if (requiredX > requiredY) {
//         result--;
//     }
    
//     return result;
// }

// int32_t main() {
//     int t;
//     cin >> t;
    
//     while (t--) {
//         int x, y, k;
//         cin >> x >> y >> k;
        
//         // Call the function and output the result
//         cout << calculateResult(x, y, k) << endl;
//     }
    
//     return 0;
// }



//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {

  public:
    int minCoins(vector<int> &coins, int sum) {
        // Your code goes here
        
        int m= coins.size();

   // base case
   if (sum == 0) return 0;

   // Initialize result
   int res = INT_MAX;

   // Try every coin that has smaller value than sum
   for (int i=0; i<m; i++)
   {
     if (coins[i] <= sum)
     {
         int sub_res = minCoins(coins,  sum-coins[i]);

         // Check for INT_MAX to avoid overflow and see if
         // result can minimized
         if (sub_res != INT_MAX && sub_res + 1 < res)
            res = sub_res + 1;
     }
   }
   return res;

        // int n= coins.size();
        // if(sum==0)return 0;
        // int x;
        // sort(coins.begin(),coins.end());
        // for(int i =0;i<n;i++)
        // {
        //     x=sum%coins[i];
        //     for(int j=i;j<n;j++)
        //     {
        //         if(x%coins[j]==0)
        //         {
        //             return ( sum/coins[i])+(x)
        //         }
        //     }
        // }
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    while (t--) {
        int v, m;
        cin >> v >> m;

        vector<int> coins(m);
        for (int i = 0; i < m; i++)
            cin >> coins[i];

        Solution ob;
        cout << ob.minCoins(coins, v) << "\n";
    }
    return 0;
}

// } Driver Code Ends
