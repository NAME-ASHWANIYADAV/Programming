#include<iostream>
#include<queue>
#include<stack>
using namespace std;
 void display(queue<int> &q){
    int n = q.size();
    for(int i=0;i<n;i++){
        int x = q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
 }
 void reverseusingstack(queue<int> &q){
    stack<int> reverse;
    while(q.size()>0){
        int x=q.front();
        q.pop();
        reverse.push(x);
    }
    while(reverse.size()>0){
        int x = reverse.top();
        reverse.pop();
        q.push(x); 
    }
 }
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    display(q); 
    cout<<endl;
    reverseusingstack(q);
   
    display(q);
}