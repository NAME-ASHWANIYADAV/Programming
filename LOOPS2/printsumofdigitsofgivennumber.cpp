#include<iostream>
using namespace std;
int main(){
        int x;
    cout<<"ENTER THE NUMBER\n";
    cin>>x;
    int SUM = 0;
    
    int lastdigit;
    while (x>0)
    {
       lastdigit=x%10;SUM = SUM + lastdigit; x/=10;
    }
     cout<<SUM<<"  IS THE SUM OF THE DIGITS OF GIVEN NUMBER";
     
    
    
}