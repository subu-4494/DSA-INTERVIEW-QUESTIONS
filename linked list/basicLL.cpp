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
int funcr(Node* head, int val)
{
    int c=0;
   Node* a= head;
while(a)
{
    //cout<<a->data<<" ";
    c++;
    if(a->data==val) return 1;
    a=a->next;
    // c++;
    
}
   return 0;
 //return c;
}
int main()
{
//    Node y = Node(2,nullptr);
//    Node*z= new Node(3,nullptr);
//    cout<<y.data<<endl;
//    cout<<z<<endl;
//    cout<<z->data<<endl;
//    cout<<z->next<<endl;

vector<int> arr={12,8,9,7,6};
Node* head = func(arr);
//cout<<head->data;
Node* a= head;
while(a)
{
    cout<<a->data<<" ";
    a=a->next;
}
cout<<endl;
cout<<funcr(head,9)<<endl;
return 0;
}