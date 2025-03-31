// jo last me jayega wo sbse phle aayega
#include<bits/stdc++.h>
#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<string>s;
    s.push("sourabh");
    s.push("roy");
    s.push("right");

    cout<<"top element-->"<<s.top()<<endl;

    s.pop();
    cout<<"top element-->"<<s.top()<<endl;

    cout<<"size of stack "<<s.size()<<endl;
     cout<<"empty or not"<<s.empty()<<endl;h
}