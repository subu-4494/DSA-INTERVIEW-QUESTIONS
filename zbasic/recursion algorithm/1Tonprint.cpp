// #include<bits/stdc++.h>
// using namespace std;
// int print(int n)
// {
// if(n==0)
// {
// return 0;
// }
// // cout<<n<<endl;
// print(n-1);
// cout<<n<<endl;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     print(n);
    
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int print(int n)
{
if(n==0)
{
return 0;
}
// cout<<n<<endl;
return  n+print(n-1);
//cout<<n<<endl;
}
int main()
{
    int n;
    cin>>n;
   cout<< print(n);
    
    return 0;
}