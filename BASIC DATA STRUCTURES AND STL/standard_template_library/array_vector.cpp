//pairs
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,string> p;   // declaration of pair::::::
  //  p = make_pair(2,"abc");     // make pair ----->used to make pair
      p={2,"abc"};                // also used to make pair
      pair<int,string>&p1=p;
      p1.first=3;
    cout<<p.first<<" "<<p.second<<endl;
    pair<int ,int>p_array[3];
    p_array[0]={1,2};
    p_array[1]={2,3};
    p_array[2]={3,4};    
    swap(p_array[0],p_array[2]);
    for(int i=0;i<3;i++)
    {
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }
    return 0;
}
                          /// vector
#include<bits/stdc++.h>
using namespace std;
 void printvec(vector<string> &v)
 {
    cout<<"size:"<<v.size()<<endl;   // v.size()--->tells the size of vector
    for(int i=0;i<v.size();++i)
    {
        cout<<v[i]<<" ";
    }
    //v.push_back(2);
    cout<<endl;
 }
 int main()
 {
   /* vector<int>v;//vector declaration
    int n;
    cin>>n;
    for(int i=0;i<n;++i)
    {
        int x;
        cin>>x;
        printvec(v);
        v.push_back(x);//function for putting the value in vector
    }
    printvec(v);
   /* vector<int>v;//(10 ,3);
    v.push_back(7);
    v.push_back(6);
    vector<int>&v2=v;
    v2.push_back(5);
    printvec(v);
   // v.pop_back();
    printvec(v2);
    vector<string>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        v.push_back(s);
    }
    printvec(v);
    return 0;
 }*/
                // array in stl-->contigious memory allocation
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    array<int,4>a={1,2,3,4};
    int size =a.size();
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<"element of 2nd index-->"<<a.at(2)<<endl;
    cout<<"empty or not-->"<<a.empty()<<endl;
    cout<<"first element"<<a.front()<<endl;
    cout<<"last element"<<a.back()<<endl;
    return 0;
} */
/// vector--> dynamic array size changes    
// capacity -->kitna elements ke liyespace assign hai
// size -->kitna elements pda hai        
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    vector<int> s(5,1);
    vector<int> last(s);
    cout<<"print last"<<endl;
    for(int i:last)
    {
        cout<<i<<" ";
    } cout<<endl;
    //cout<<"print last"<<endl;
    cout<<"capacity-->"<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"capacity-->"<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"capacity-->"<<v.capacity()<<endl;  

    v.push_back(3);
    cout<<"capacity-->"<<v.capacity()<<endl;
    cout<<"size-->"<<v.size()<<endl;  
    cout<<"element at second index "<<v.at(2)<<endl;

    cout<<"front "<<v.front()<<endl;
    cout<<"back "<<v.back()<<endl;
    cout<<"before pop"<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }cout<<endl;

    v.pop_back();

        cout<<"after pop"<<endl;    
        for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }cout<<endl;

       v.clear();// clear the size of vector
       cout<<"after clear size"<<v.size()<<endl;
}
