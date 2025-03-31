// #include<bits/stdc++.h>
// using namespace std;
// int f(int n, vector<int> &dp)
// {
//         if(n<=1) return n;
//         if(dp[n]!=-1) return dp[n];
//         return dp[n]= f(n-1,dp)+f(n-2,dp);       -------->>>>>    memoization 
// }
// int main()
// {
//     int n;
//     cin>>n;
//     vector<int> dp(n+1,-1);
//     cout<< f(n,dp);
//     return 0;
// }









//  vector<int> dp (n+1,0);
//         dp[0]=1;
//         dp[1]=1;
//         for(int i=2;i<=n;i++)
//         {
//             dp[i]=dp[i-1]+dp[i-2];                 -------->>>>>   tabulation 
//         }
//         return dp[n];









// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int prev1=0;
//     int prev=1;
//     for(int i=2;i<=n;i++)
//     {                                               //  ------->>>>> space optimization
//         int curi=prev1+prev;
//         prev1=prev;
//         prev=curi;
//     }
//     cout<<prev<<endl;
//     return 0;
// }
