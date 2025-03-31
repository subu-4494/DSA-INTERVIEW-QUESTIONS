//            Reverse a doubly linked list what brute solution we should think 
//     1 . think about reversing the data of a linked list means:
//                                      put last pointers data on first and than second last on second and so on 
//         for this we should use stack ( last in first out)  this take time complexity as 2N 

// 2.   swapping of links : we have to swap next and back of a particular node 



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

 void print(Node* head)
  {
    while(head!=nullptr)
    {
        cout<<head->data<<" ";
        head= head->next;
    }
  }

Node* reversedll(Node* head)       // T.C ==O(N)     S.C == O(1)
{
    if(head==nullptr || head->next==nullptr)
    {
        return head;
    }
    Node* prev = nullptr;
    Node* current = head;
    while(current!=nullptr)
    {
        prev = current->back;
        current->back= current->next;
        current -> next = prev;
        current= current->back;
    }
    return prev->back;
}
int main()
{
    vector<int> arr={12,8,9,7,6};
    Node* head = func(arr);   // convert an array to an doubly linked list 
    Node* temp= head;
    stack<int> st;
    while(temp!=nullptr)
    {
            st.push(temp->data);
            temp= temp->next;
    }
       Node* tem = head;
    while(tem!=nullptr)           //   T.C O(2N)   S.C = O(N)
    {
        tem->data= st.top();
        st.pop();
        tem= tem->next;
    }
   head = reversedll(head);
    print (head);
    return 0;
}