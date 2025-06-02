// #include<bits/stdc++.h>
// using namespace std;

// void hashed(string t, unordered_map<char,int>& mpp) {

//     for(int i=0;i<t.size(); i++) {
//         mpp[t[i]]++;
//     }

// }

// int func(string s, int k) {
//        int ans=0;
//       int n = s.size();
//       for(int i=0;i<n;i++)
//       {
//         for(int j=i;j<n;j++) 
//         {
//             string t = s.substr(i,j-i+1);
//             unordered_map<char,int> mpp;
//             hashed (t,mpp);
//             if(mpp.size()==k) 
//             {
//                 ans = max(ans,j-i+1);
//             }
//         }
//       }
//       return ans;
// }

// int main() {
//     string s;
//     int k;
//     cin>>s;
//     cin>>k;
//     int z = func(s,k);
//     cout<<z<<endl;
//     return 0;
// }






#include<bits/stdc++.h>
using namespace std;

void hashed(string t, unordered_map<char,int>& mpp) {

    for(int i=0;i<t.size(); i++) {
        mpp[t[i]]++;
    }

}

int func(string s, int k, unordered_map<char,int>& mpp) {
       int ans=0;
      int n = s.size();
      int i=0;
      int j=0;

      while(j<n && i<n)
      {
          mpp[s[j]]++;
          if(mpp.size()<=k)  {
            j++;
            if(mpp.size()==k) {
                ans = max(ans,j-i);
            }
          }   else {
               while(mpp.size()>k) {
               mpp[s[i]]--;
               if(mpp[s[i]]==0) mpp.erase(s[i]);
               i++;
               }

                ans = max(ans,j-i);
          }
      }
      return ans;
}

int main() {
    string s;
    int k;
    cin>>s;
    cin>>k;
    unordered_map<char,int> mpp;
    int z = func(s,k,mpp);
    cout<<z<<endl;
    return 0;
}