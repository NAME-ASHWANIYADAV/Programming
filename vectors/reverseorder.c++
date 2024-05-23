#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v1;
int x;
cout<<"Enter the length of the array: ";
cin>>x;

for(int i=0;i<x;i++){
    cout<<"Enter the "<<i<<" order element: ";
    int p;
    cin>>p;
    v1.push_back(p);
}
for(int i=v1.size()-1;i>=0;i--){
    cout<<v1[i]<<" ";
}
}