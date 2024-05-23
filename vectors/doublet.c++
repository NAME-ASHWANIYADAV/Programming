#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x;
    cout<<"Enter the target ";
    cin>>x;
    vector<int> v;
    int n;
    cout<<"Enter the array size ";
    cin>>n;

    
    for(int i=0; i<n;i++){
        cout<<"Enter the "<<i << " array element ";
        int p;
        cin>>p;
        v.push_back(p);
    }
    cout<<"The required pairs are as follows: ";
    for(int i=0;i<v.size()-2;i++){
        for(int j=i+1;j<v.size()-1;j++){
            if (x==i+j)
            {
               cout<<"("<<i<<","<<j<<")";
            }
            cout<<endl;
        }
    }
}