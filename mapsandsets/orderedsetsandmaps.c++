#include<iostream>
#include<set>
#include<map>
using namespace std;
int main(){
    set<int> s;
    s.insert(5);
    s.insert(7);
    s.insert(87);
    map<int,int> m;
    m[2] = 83;
    m[4] =8;
    m[1]=43;
    for(auto x: m){
        cout<<x.first<<"->"<<x.second;
        cout<<endl;
    }
}