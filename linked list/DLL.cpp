#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    Node* back;
    public:
    Node(int data1, Node* next1,Node* back1)
    {
            data=data1;
            next=next1;
            back= back1;
    }
    public:
    Node(int d)
    {
        data=d;
        next= nullptr;
        back= nullptr;
    }
};
  
  Node* func(vector<int>&arr)
{
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i=1;i<arr.size();i++)
    {
        Node* temp = new Node(arr[i],nullptr,prev);
        prev->next=temp;  // create a link to previous pointer
        prev=temp;  
    }
    return head;
}

Node* deletehead(Node* head)
{
  if(head== nullptr || head->next==nullptr) return nullptr;
  Node* prev = head;
  head= head->next;
  prev->back=nullptr;
  prev->next=nullptr;
  delete prev;
  return head;

}

  Node* deletetail(Node* head)
  {
    if(head==nullptr || head->next==nullptr)
    {
      return nullptr;
    }
    Node* tail = head;
    while(tail->next!= nullptr)
    {
      tail= tail->next;
    }
    Node* prev= tail->back;
    prev->next= nullptr;
    tail->back= nullptr;
    delete tail;
    return head;
  }
       
       Node* deleteknode( Node* head , int k)
       {
          if(head == nullptr)
          {
            return nullptr;
          }
          int c=0;
          Node* tempp= head;

          while(tempp->next!= nullptr )
          {
            c++;
            if(c==k) break;
            tempp= tempp->next;
          }
          Node* prev = tempp->back;
          Node* front = tempp->next;

          if( prev == nullptr && front == nullptr)
          {
            return nullptr;
          }
          else if(prev == nullptr)
          {
              return deletehead(head);
          }
          else if(front == nullptr)
          {
              return deletetail(head);
          }
          prev->next= front;
          front-> back= prev;
          tempp->next==nullptr;
          tempp->back==nullptr;
          delete tempp;
          return head;
       }

       void deletenode(Node* temp)
       {
          Node* prev = temp->back;
          Node* front = temp->next;

          if(front==nullptr)
          {
            prev->next= nullptr;
            temp->back=nullptr;
            free(temp);
            return ;
          }
          prev->next = front;
          front->back= prev;
          temp->next = temp->back=nullptr;
          free(temp);
       }

        Node* insertbhead(Node* head, int val)
        {
          Node* temp = new Node( val , head,nullptr);
          head->back=temp;
          return temp;
        }

        Node* insertbtail(Node* head, int val)
        {
          if(head->next ==nullptr)
          {
            return insertbhead(head,val);
          }

          Node* tail = head;
          while(tail->next!=nullptr)
          {
            tail=tail->next;
          }
          Node* prev = tail->back;
          Node* newnode= new Node(val,tail,prev);
          prev->next = newnode;
          tail->back=newnode;
          return head;
        }

        Node* insertbk(Node* head, int k, int val)
        {
          if(k==1)
          {
            return insertbhead(head,val);
          }
          Node* temp = head;
          int c=0;
          while(temp!=nullptr)
          {
            c++;
            if(c==k) break;
            temp=temp->next;

          }
            Node * prev = temp->back;
            Node* ghi = new Node(val,temp,prev);
            prev->next=ghi;
            temp->back=ghi;
            return head;

        }

        void insertbn( Node* node, int val)
        {
          Node* prev = node->back;
          Node* nw= new Node(val,node , prev);
          prev->next= nw;
          node->back=nw;
        }

  void print(Node* head)
  {
    while(head!=nullptr)
    {
        cout<<head->data<<" ";
        head= head->next;
    }
  }

int main()
{
    vector<int> arr={12,8,9,7,6};
    Node* head = func(arr);   // convert an array to an doubly linked list 
    // head= deletehead(head);    // delete the head of an array 
    // head= deletetail(head);    // delete the tail of an array   
    //head = deleteknode( head ,3);   // delete kth node
   // deletenode(head->next->next);   // delete by node(or value)
  // head = insertbhead(head,10);    // insert a elelment before head
     // head=insertbtail(head,98);   // insert before tail 
    // head = insertbk(head,4,10);    // insert before kth node
    insertbn(head->next->next, 89);    // insert before any node
    print (head);
    return 0;
}