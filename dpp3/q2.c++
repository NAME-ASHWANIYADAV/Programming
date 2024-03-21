#include<iostream>
using namespace std;
int main(){
    cout<<"ENTER THE RADIUS OF THE CIRCLE\n";
    int x;
    cin>>x;

float area =3.14*x*x;

float circumference= 2*3.14*x;
if (area > circumference)
{
    cout<<"Numerically area of this circle is larger than its circumference";
}
if (area < circumference)
{
    cout<<"Numerically area of this circle is smaller than its circumference";
}
if (area = circumference)
{
    cout<<"Numerically area of this circle is equal to its circumference";
}
    
}
    