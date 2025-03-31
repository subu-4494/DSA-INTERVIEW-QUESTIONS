#include<bits/stdc++.h>
using namespace std;
// struct//
class Node
{
    public:
    int data;
    Node* next;
    public:
    Node(int data1, Node* next1)
    {
            data=data1;
            next=next1;
    }
    public:
    Node(int d)
    {
        data=d;
        next= nullptr;
    }
};

Node* func(vector<int>&arr)
{
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1;i<arr.size();i++)
    {
        Node* temp = new Node(arr[i]);
        mover->next=temp;  // create a link to next pointer
        mover=temp;  // move mover
    }
    return head;
}

int main()
{

vector<int> arr={1,2,0,0,1};
Node* head = func(arr);
Node* temp= head;
int cnt=0;
int cnt1=0;
int cnt2=0;
while(temp!= nullptr)
{
    if(temp->data==0)
    {
        cnt++;
    }
    else if(temp->data==1) cnt1++;
   else if(temp->data==2) cnt2++;
   temp= temp->next;
}
  temp = head;
  while(temp!= nullptr)
  {
    if(cnt)
    {
        temp->data=0;
        cnt--;
    }
    else if(cnt1)                               // T.C (2N) 
    {                                            // sort with help of value            
        temp->data=1;         
        cnt1--;
    }
    else{
        temp->data=2;
        cnt2--;
    }
    temp= temp->next;
  }
Node* a= head;
while(a)
{
    cout<<a->data<<" ";
    a=a->next;
}
cout<<endl;
return 0;
}