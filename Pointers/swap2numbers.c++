#include<iostream>
using namespace std;
    void swap(int *p,int *q){
      int temp = *p;
      *p = *q;
      *q = temp;
      return;


    }
int main(){
    int x;
    cout<<"Enter the first number: ";
    cin>>x;
     int y;
    cout<<"Enter the second number: ";
    cin>>y;
    swap(&x,&y);
    cout<<x<<" "<<y;
}