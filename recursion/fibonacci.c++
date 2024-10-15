#include<iostream>
using namespace std;

int fibo(int n){
    if (n == 1 || n == 2)
        return 1;
    return fibo(n-1) + fibo(n-2);
}

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    if (n < 1)
        cout << "Invalid input. Please enter a positive integer.";
    else
        cout << fibo(n);
    return 0;
}
