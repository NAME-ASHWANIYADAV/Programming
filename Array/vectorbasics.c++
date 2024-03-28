#include<iostream>
#include<vector>
using namespace std;
int main(){
    //Declaration of an vector .
    //There is no need to mention size.
    vector<int>v;
    v.push_back(1);
    cout<<"The size of the vector at this point is "<<v.size()<<endl;
    cout<<"The capacity of the vector at this point is "<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"The size of the vector at this point is "<<v.size()<<endl;
    cout<<"The capacity of the vector at this point is "<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"The size of the vector at this point is "<<v.size()<<endl;
    cout<<"The capacity of the vector at this point is "<<v.capacity()<<endl;
    v.push_back(4);
    cout<<"The size of the vector at this point is "<<v.size()<<endl;
    cout<<"The capacity of the vector at this point is "<<v.capacity()<<endl;
    //IF you want to update/access
    v[0]=11;
    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";
    cout<<v[3]<<" ";

}