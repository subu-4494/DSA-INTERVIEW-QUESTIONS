#include<bits/stdc++.h>
using namespace std;
struct Node
{
    public:
    int data;
    Node* next;

    public:
    Node(int data1 , Node* next1)
    {
        data=data1;
        next=next1;
    }
    public:
    Node(int data1)
    {
        data=data1;
        next=nullptr;
    }
};

Node* convert2LL(vector<int>&arr)
{
    Node* head= new Node(arr[0]);
    Node* mover = head;
    for(int i=1;i<arr.size();i++)
    {
        Node* temp = new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
};

int main()
{
    int cnt=0;
    vector<int> arr={9,4,6,8};
    // Node *head=convert2LL(arr);
    // cout<<head->data;
     Node *head=convert2LL(arr);
    // cout<<head->data;
    Node* temp=head;

    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
        cnt++;
    }
    cout<<endl;
    cout<<cnt<<endl;

    // Node* y= new Node (arr[1],nullptr);
    // Node* z= new Node (arr[0],nullptr);
    // cout<<z<<endl;
    // cout<<y <<endl;
    // int x=4;
    // int *y=&x;
    // cout<<y<<endl;
    return 0;
}