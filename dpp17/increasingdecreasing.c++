#include<iostream>
using namespace std;
void increasingdecreasing(int x,int n){
if(x>=n){
    cout<<n<<" ";
    return ;
}
cout<<x<<" ";
increasingdecreasing(x+1,n);
cout<<x<<" ";
}
int main(){
    int n;
    cout<<"Enter the number ";
    cin>>n;
   increasingdecreasing(1,n);
}