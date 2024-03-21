#include <iostream>
using  namespace std;
int main(){
    char ch;
    cout<<" ENTER THE CHARACTER \n";
    cin>>ch;
    cout<<endl;
    //a to z -> 97 to 122
    // A to Z -> 65 to 90
    int ascii = (int)ch;
    if( ascii>=65 && ascii<=90 || ascii>=97 && ascii<=122 ){
          cout<<"THE GIVEN CHARACTER IS AN  ALPHABET";
    }
    else { cout<<"IT IS NOT AN  ALPHABET";}
    cout<<endl;
    
}