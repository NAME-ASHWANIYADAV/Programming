#include<iostream>
using namespace std;
int area(float x){
   float area= 3.14*x*x;
   cout<<area <<" "<<"square unit";
}
int main(){
    float x;
    cout<<"Enter the radius of the circle: ";
    cin>>x;
    cout<<"The area of the  radius " <<x << " circle is: ";
     area(x);
    
}