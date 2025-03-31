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

  Node* remove(Node* head)
  {
    if(head==nullptr) return head;
    Node* temp=head;
    head=head->next;
    delete temp;
    return head;
  }

  Node* removetail(Node* head)
  {
    if(head== nullptr || head->next==nullptr)return nullptr;
    Node* temp=head;
    while(temp->next->next!=nullptr)
    {
        temp=temp->next;
    }
    delete temp->next;
    temp->next= nullptr;
    return head;
  }

  Node* removek(Node* head,int k)
  {
    if(head==nullptr) return head;
    if(k==1)
    {
        Node* temp=head;
        head=head->next;
        delete temp;
        return head;
    }
    int c=0;
    Node* temp=head;
    Node* prev = nullptr;
    while(temp !=nullptr)
    {
        c++;
        if(c==k)
        {
            prev->next=prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp=temp->next;
    }
    return head;
  }




   Node* removeel(Node* head,int e)
  {
    if(head==nullptr) return head;
    if(head->data==e)
    {
        Node* temp=head;
        head=head->next;
        delete temp;
        return head;
    }
    //int c=0;
    Node* temp=head;
    Node* prev = nullptr;
    while(temp !=nullptr)
    {
       // c++;
        if(temp->data==e)
        {
            prev->next=prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp=temp->next;
    }
    return head;
  }

  Node* inserthead(Node* head, int val)
  {
    Node* temp= new Node(val,head);
    return temp;
  }

  Node* inserttail(Node* head, int val)
  {
    if(head==nullptr)
    {
        return new Node(val,nullptr);
    }
    Node* temp=head;
    while(temp->next!=nullptr)
    {
            temp= temp->next;// move the temp loop closes when temp reach to last element
    }
    Node* newNode = new Node(val,nullptr);
    temp->next= newNode;
    return head;
  }

  Node* insertposition(Node* head, int r, int k)
  {
    if(head==nullptr)
    {
        if(k==1)
        {
            return new Node(r);
        }
        else{
            return head;
        }
    }
    if(k==1) {
        return new Node(r,head);
    }
    int cntt=0;
    Node* temp= head;
    while(temp!= nullptr)
    {
        cntt++;
        if(cntt==(k-1))
        {
            Node* x= new Node(r,temp->next);
            temp->next=x;
            break;
        }
        temp=temp->next;
    }
    return head;
  }


  Node* insertvalue(Node* head, int r, int b)
  {
    if(head==nullptr)
    {
        
            return nullptr;
    }
    if(head->data==b) {
        return new Node(r,head);
    }
    int cntt=0; 
    Node* temp= head;
    while(temp->next!= nullptr)
    {
        if(temp->next->data==b)
        {
            Node* x= new Node(r,temp->next);
            temp->next=x;
            break;
        }
        temp=temp->next;
    }
    return head;
  }


int main()
{
vector<int> arr={12,8,9,7,6};
Node* head = func(arr);// converted an array to a linked list
//head= remove(head);// deletion of head
//head= removetail(head);// removal of tail
//head=removek(head,4);//k element
  //head= removeel(head,8);//   deletion by value
 // head= inserthead(head,78); // inserting a new head in linked list//o(1)---> complexity
// Node* temp= new Node(100,head);
// head= temp;
//head=inserttail(head,230);
//head= insertposition(head,897,006);
head = insertvalue(head,786,9);
Node* a= head;
while(a)
{
    cout<<a->data<<" ";
    a=a->next;
}
cout<<endl;
return 0;
}