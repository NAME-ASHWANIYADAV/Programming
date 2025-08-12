#include<iostream>
using namespace std;
class Node{ // linked list node
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val = val;
        this-> next = NULL;
        this-> prev = NULL;
    }
};
int main(){
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = NULL;
    d.prev = &c;
    c.prev = &b;
    b.prev = &a;
    a.prev = NULL;
    cout<<(b.next)->val;
}