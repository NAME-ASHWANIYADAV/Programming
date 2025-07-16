#include<iostream>
#include<stack>
#include<array>
using namespace std;
void prevgreater(int ans[], int n){
    stack<int> st;
    int pge[n];
    for(int i = 0; i < n; i++){
        while(!st.empty() && st.top() <= ans[i]){
            st.pop();
        }
        if(st.empty()) pge[i] = -1;
        else pge[i] = st.top();
        st.push(ans[i]);
    }
    for(int i = 0; i < n; i++){
        ans[i] = pge[i];
    }
}


int main(){
    int n ;
     cout<<"enter the size of the array:-";
     cin>>n;
     int ans[n];
     for(int i =0;i<n;i++){
        cout<<"enter the "<<i+1<< " number of the array:-";
        int k;
        cin>>k;
        ans[i]=k;
     }
     cout<<"This is your array:-";
     for(int i =0;i<n;i++){
        cout<<ans[i]<<",";
     }
     cout<<endl;

     prevgreater(ans,n);
     cout<<"This is the array of previous greater of your input array:-";
     for(int i =0;i<n;i++){
        cout<<ans[i]<<",";
     }
}