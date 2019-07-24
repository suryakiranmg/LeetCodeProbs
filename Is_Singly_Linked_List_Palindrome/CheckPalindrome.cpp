#include<bits/stdc++.h>
using namespace std;

class Node
{ 
public:
    int data;
    Node *ptr;
    Node(int d) {data = d;}  
};

//Check Palindrome or not
bool Palindrome(Node* head)
{
    Node* temp = head;
    stack <int> s;
    while(temp != NULL) //push elements to stack
    {
        s.push(temp->data);
        temp = temp->ptr;
    }
    
    //Pop from stack and check for matching
    int i;
    while(head != NULL)
    {
        i = s.top();//get top element
        s.pop();
        if(head->data != i) return false;
        head = head->ptr;
    }
    return true;
}

int main()
{
    Node a = Node(1), b = Node(2), c = Node(3);
    Node d = Node(2), e = Node(1);
    e.ptr = NULL;
    a.ptr = &b;
    b.ptr = &c;
    c.ptr = &d;
    d.ptr = &e;
    
    //Fun to check palindrome
    int res = Palindrome(&a);
    if(res == 1) cout<<"Yes, palindrome"<<endl;
    else cout<<"Not palindrome"<<endl;
    return 0;
}
