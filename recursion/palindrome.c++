#include<iostream>
#include<string>
using namespace std;
bool isPalindrome(string s){
    int i =0;
    int j= s.length()-1;
    while(i<j){
        if(s[i] !=s[j]) return false;
        i++;
        j--;
    }
    return true;
}

bool isPalindromerecursive(string s , int i , int j){
if(i>j) return true;
if(s[i]!= s[j]){
    return false;
} else {
    return isPalindromerecursive(s,i+1,j-1);
}
}
int main(){
    string s = "mom";
    cout<<isPalindrome(s)<<endl;
 
    cout<<isPalindromerecursive(s,0,s.length()-1);
}