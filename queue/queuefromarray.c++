#include <bits/stdc++.h>
using namespace std;
class Queue{
public:
    int f ;
    int b ;
    int arr[8];
    Queue(){ // constructor
        f=0;
        b=0;
    }
     void push(int val){
        if(b==5){
            cout<<"Queue is full"<<endl;
            return;
        } else{
            arr[b]= val;
            b++;

        } 
     }
     void pop(){
        if(f-b==0){
            cout<<"Queue is empty"<<endl;
            return;
        }
        f++;
     }
     void display(){
        if(f-b==0){
            cout<<"queue is empty";
            return ;
        }else{
            for(int i =f;i<b;i++){
                cout<<arr[i]<<" ";
            }
        }
     }
     int front(){
        if(f-b==0){
            cout<<"queue is empty";
            return 0;
        }else{
            cout<<arr[f];
        }
     }
};
int main()
{
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    q.display();
    cout<<endl;
    q.pop();
    q.display();
    cout<<endl;
}