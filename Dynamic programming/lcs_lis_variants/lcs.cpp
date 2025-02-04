// problem statement : given two strings s and t you have output length of longest common subsequence 

// recursive logic 

#include<bits/stdc++.h>
using namespace std;
int func(int i, int j, string &s, string &t)
{
    if(i<0||j<0)
    {
        return 0;
    }
    if(s[i]==t[j])
    {
        return 1+func(i-1,j-1,s,t);
    }
    return max(func(i-1,j,s,t),func(i,j-1,s,t));
}
int main()
{
    string s= "abcde";
    string t="bczwe";
    int n = s.size();
    int m = t.size();
    int z = func(n-1,m-1,s,t);
    cout<<z<<endl;
    return 0;
}