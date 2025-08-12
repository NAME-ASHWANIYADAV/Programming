#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
    
};
Node* construct(vector<int>&input,int n){
    queue<Node*> q;
    Node* root = new Node(input[0]);
    q.push(root);
    int i =1;
    int j=2;
    while(q.size()>0 && i<n){
        Node* temp = q.front();
        q.pop();
        Node* l;
        Node* r;
        if(input[i]!=INT_MIN) l = new Node(input[i]);
        else l= NULL;
         if(j!=n && input[j]!=INT_MIN) r = new Node(input[j]);
        else r = NULL;
        temp->left = l;
        temp->right=r;
        if(l!=NULL)q.push(l);
        if(r!=NULL)q.push(r);
        i+=2;
        j+=2;
    };

    return root;
}

void levelOrderQueue(Node* root){
    queue<Node*>q;
    q.push(root);
    while(q.size()>0){
        Node *temp =q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left!=NULL)q.push(temp->left);
        if(temp->right!=NULL)q.push(temp->right);
    }
    cout<<endl;
}
int main(){
    vector<int>input={9,3,1,INT_MIN,0,0,INT_MIN,3,6,7,INT_MIN,0,1,INT_MIN};
    int n = input.size();
    Node* root = construct(input,n);
    levelOrderQueue(root);
}