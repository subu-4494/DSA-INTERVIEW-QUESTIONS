#include<bits/stdc++.h>
#include<deque>
using namespace std;
int main()
{
  deque<int>d;

  d.push_back(1);
  d.push_front(2);
  d.push_front(3);

  for(int i:d)
  {
    cout<<i<<" ";
  }
  //d.pop_back();
  //d.pop_front();
  cout<<endl;
    for(int i=0;i<d.size();i++)
  {
    cout<<d[i]<<" ";
  }
  cout<<"print first index element"<<d.at(1)<<endl;
  cout<<"front"<<d.front()<<endl;
  cout<<"back"<<d.back()<<endl;

  cout<<"empty or not "<<d.empty()<<endl;
  cout<<"before erase"<<d.size()<<endl;
  d.erase(d.begin(),d.begin()+2);
  cout<<"after erase "<<d.size()<<endl;
  for(int i:d)
  {
    cout<<i<<endl;
  }

}