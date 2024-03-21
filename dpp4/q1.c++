#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"ENTER THE CURRENCY IN RUPEES\n";
    cin>>x;
    int n1 = 0;
    int n2 = 0;
    int n5 = 0;
    int n10 = 0;
    int n20= 0;
    int n50= 0;
    int n100= 0;
    int n200= 0;
    int n500 = 0;
    int n2000 = 0;
    if (x>=2000)
    {
        n2000 = x/2000;
    x = x-(2000*n2000);
    }
    if (x>=500)
    {
        n500 = x/500;
    x = x-(500*n500);
    }
    if (x>=200)
    {
        n200 = x/200;
    x = x-(200*n200);
    }
    if (x>=100)
    {
        n100 = x/100;
    x = x-(100*n100);
    }
    if (x>=50)
    {
        n50 = x/50;
    x = x-(50*n50);
    }
    if (x>=20)
    {
        n20 = x/20;
    x = x-(20*n20);
    }
    if (x>=10)
    {
        n10 = x/10;
    x = x-(10*n10);
    }
    if (x>=5)
    {
        n5 = x/5;
    x = x-(5*n5);
    }
    if (x>=2)
    {
        n2 = x/2;
    x = x-(2*n2);
    }
    if (x>=1)
    {
        n1 = x/1;
    x = x-(1*n1);
    }
    cout<<"THE MINIMUM NUMBER OF NOTES USED FOR THE GIVEN CURRENCY IS "<<n2000+n500+n200+n100+n50+n20+n10+n5+n2+n1;
    
    return 0;
}