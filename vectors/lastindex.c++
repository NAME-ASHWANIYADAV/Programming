#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(11);
    v.push_back(12);
    v.push_back(13);
    v.push_back(14);
    v.push_back(11);
    v.push_back(12);
    v.push_back(13);
    v.push_back(11);
    int x;
    cout<<"Enter the number whose index you want to check: ";
    cin>>x;
    int idx =404;
    for(int i=v.size()-1;i>=0;i--){
        if(v[i]==x){
            idx =i;
            break;
        }else{
            cout<<"The element does not exist ";
            break;
        }
    }
    cout<<idx;
}