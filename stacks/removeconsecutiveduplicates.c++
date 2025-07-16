#include<iostream>
#include<stack>
#include<string>
using namespace std;
string reverse(string s){
    string finalans;
    for(int i = s.length() - 1; i >= 0; i--){
        finalans.push_back(s[i]);
    }
    return finalans;
}

string compressed(string s){
    stack<char> st;
    for(int i = 0; i < s.length(); i++){
        if(st.empty() || st.top() != s[i]){
            st.push(s[i]);
        }
    }
    string ans;
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
    return reverse(ans);

}
int main(){
 string s;
 cout<<"enter the string:-";
 cin>>s;
 cout<<"here is your compressesd string:-";
 cout<<compressed(s);
}