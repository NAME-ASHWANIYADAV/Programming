#include<iostream>
#include<string>
using namespace std;
void printSubset(string ans , string original, int idx){
    if(idx == original.length()){
      cout<<ans<<endl;
    return;
    }
    char ch = original[idx];
    printSubset(ans, original,idx+1);
    printSubset(ans+ch ,original, idx+1);
}
int main(){
    string str = "ram";
    printSubset("",str,0);
}