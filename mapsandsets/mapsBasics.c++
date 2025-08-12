#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<string,int> m;
    pair<string,int> p1;
    p1.first = "ashwani";
    p1.second=  15;
    m.insert(p1);
    m["aditya"] = 11;
    m["deeksha"]= 12;
    for(auto p: m ){
        cout<<p.first<<p.second;
cout<<endl;
    }
    cout<<m.size();

}