#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> ashwani;
    cout<<ashwani.size()<<endl;
    ashwani.push(10);
    ashwani.push(20);
    ashwani.push(30);
    ashwani.push(40);
    cout<<ashwani.size()<<endl;
    ashwani.pop();
    cout<<ashwani.size()<<endl;
    cout<<ashwani.top()<<endl;
}