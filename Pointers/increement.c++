#include<iostream>
using namespace std;
void find(int x, int *ptr1, int *ptr2){
     *ptr2 = x%10; //last number
    while(x>9){
        x/=10;
    }
    *ptr1= x; //first number
   
}
int main(){
    int a =15;
    int *ptr = &a;
                         // a ke address per jaake jo value given hai usko use kerna hai 
    int b = ++(*ptr); 
    cout<<a<<" "<<b;
cout<<endl;
    // Ques. write a program to find out the first and last digit of a number without returning anything
    int x;
    cout<<"enter the number: ";
    cin>>x;

    int firstdigit, lastdigit;
    int *ptr1= &firstdigit;
    int *ptr2= &lastdigit;
    find(x,ptr1,ptr2);
    cout<<"The first digit of " <<x<<" is "<<firstdigit;
    cout<<endl;
    cout<<"The last digit of" <<x<<" is "<<lastdigit;

}   