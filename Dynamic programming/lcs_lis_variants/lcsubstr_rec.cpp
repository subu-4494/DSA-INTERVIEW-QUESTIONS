


//   problem statement: You are given two strings s1 and s2. Your task is to find the length of the longest common 
//                       substring among the given strings.

// Examples:

// Input: s1 = "ABCDGH", s2 = "ACDGHR"            // means order bhi mai rehna chahyie + consecutive bhi hona chahyie!!
// Output: 4
// Explanation: The longest common substring is "CDGH" with a length of 4.

#include<bits/stdc++.h> 
using namespace std;



int lcstrfunc(int i, int j, string s, string t, int c)
{
    if(i<0 || j<0)
    {
        return c;
    }

    int d=c;

    if(s[i]==t[j])
    {
        
        d=  lcstrfunc(i-1,j-1,s,t,c+1);
        
    }

      int z =  max(lcstrfunc(i-1,j,s,t,0),lcstrfunc(i,j-1,s,t,0));
    return max(d,z);
}
int main()
{
    string s="ABCDGH";
    string t="ACDGHR";
    int n = s.size();
    int m = t.size();

    int c=0;

    int z = lcstrfunc(n-1,m-1,s,t,c);

    cout<<z<<endl;

    return 0;
}