#include<iostream>
using namespace std;
int main(){
    int a = 5455745;// a means dividend 
    int b = 4745;// b means divisor
    int q = a/b;// q means quotient
    int r;// r means remainder
    r = a - (b*q);// this is the divison rule 
    //we can do it by another function also which is know as modulus 
    //function whose sign is of %
    cout<<r <<endl; 
             // ANOTHER METHOD 
      int x = 54768745;// x means dividend 
    int y  = 477745;// y means divisor
    int w = x/y ;// w means quotient
    int z = x % y ; // z means remainder


    cout<<z;
}
