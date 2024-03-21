// WAP to write fibonnacci numbers

#include<iostream>
using namespace std;
int main(){
   int num1 =1;
    int num2 = 1;
    int sum =0;
    int x;
    cout<<"Enter the number:";
    cin>>x;
    for(int i = 1; i <= x; i++){
         cout<<num1<<endl;
        sum = num1 + num2;
        num1 = num2;
        num2 = sum;
      
    }
     
}