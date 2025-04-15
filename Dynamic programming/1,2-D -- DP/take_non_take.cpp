//question was simple you have an array and you have a target value . 
//you have to tell by how many ways you can choose elements of array . so your their sum become target.

// arr[] = [1,2,3,4,5,6] , target = 6 

// (1,2,3) , (4,2), (5,1), (6) == i.e 4 ways


#include<bits/stdc++.h>
using namespace std;
int func(vector<int> &v, int i, int t , int sum) {
    int n = v.size();
    if(i ==n) {
        if(sum== t) {
            return 1;
        }
        return 0;
    }

    int tc = func(v, i+1, t, sum + v[i]);
    int nt = func(v, i+1, t, sum);
    return tc+nt;


}
int main() {
    int n , t;
    cin>>n>>t;
    vector<int> v(n);
    for(int i=0;i<n;i++) {
        cin>>v[i];
    }
    int z = func(v,0, t,0);
    cout<<z<<endl;
    return 0;
}