#include<iostream>
using namespace std;
int main()
{
  float a,b;
  cin>>a;
  cin>>b;
  char c;
  cin>>c;
  switch(c)
  {
    case '+':
    cout<<a+b<<endl;
    break;
    case '-':
    cout<<a-b<<endl;
    break;
    case '*':
    cout<<a*b<<endl;
    break;
    case '/':
    cout<<a/b<<endl;
    break;

  }

    return 0;
}