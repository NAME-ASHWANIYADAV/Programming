#include<iostream>
using namespace std;
int main(){
cout <<"ENTER THE NUMBER \n";
int x;
cin>>x;
int r=0;
int lastdigit=0;
while(x>0){
        r=r*=10;
        lastdigit=x%10;
        r = r + lastdigit;
         x=x/=10;
}
cout<<r<<"  IS THE reverse OF GIVEN NUMBER";
}