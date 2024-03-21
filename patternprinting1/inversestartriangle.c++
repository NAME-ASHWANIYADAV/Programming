#include<iostream>
using namespace std;
int main(){
    cout<<"no of rows:-";
    int x;
    cin>>x;
    //no of stars = n+1-i
    for (int i = 1; i <=x ; i++)
    {
      for (int j = 1; j <=x+1-i ; j++)
    {
      cout<<"* ";
    }
    cout<<endl;
}
    }