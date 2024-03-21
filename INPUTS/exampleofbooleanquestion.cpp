#include<iostream>
using namespace std;
int main(){
    bool p = false;
    bool q = false;  //Here first start from left compare p & q  
    bool r = true; // Then compare the result of p&q with r .
    cout<<(p==q==r)<<endl; // This is the final answer 
   cout<<" Here firstly start from left compare p & q"<<endl;  
  cout<<"  Then compare the result of p&q with r"<<endl;
  cout<<"  This is the final answer"<<endl;
}