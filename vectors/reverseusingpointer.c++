#include<iostream>
#include<vector>
using namespace std;
void display(vector <int> &a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }

}
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
int i =0;
int j= v1.size()-1;
while(i<=j){
    int temp = v1[i];
    v1[i]= v1[j];
    v1[j]= temp;
    i++;
    j--;
}
display(v1);
}