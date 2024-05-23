#include<iostream>
#include<vector>
using namespace std;
void display(vector <int> &a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }

}
void reversepart(int i, int j, vector<int> &v1){
while(i<=j){
    int temp = v1[i];
    v1[i]= v1[j];
    v1[j]= temp;
    i++;
    j--;
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
int m;
cout<<"Enter the number of last digit from where you want to rotate: ";
cin>>m;
int i =m;
if (i>x)
{
    i = i%x;
}

reversepart(0,x-i-1,v1);
reversepart(x-i,x-1,v1);
reversepart(0,x-1,v1);
display(v1);
}