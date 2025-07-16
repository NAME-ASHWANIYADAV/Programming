#include<iostream>
#include<stack>
using namespace std;
void displayRev(stack<int> &st){
    if(st.size()==0) return;
    int x = st.top();
    st.pop();
    displayRev(st);
    cout<<x<<" ";
    st.push(x);
}
void pushatbottom(stack<int> &st, int val){
    if(st.size()==0){
        st.push(val);
        return;
    }
    int x = st.top();
    st.pop();
    pushatbottom(st, val);
    st.push(x);
}
int main(){
     stack<int> st;
    //cout<<st.size()<<endl;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    displayRev(st);
    pushatbottom(st,51);
    cout<<endl;
        displayRev(st);

}