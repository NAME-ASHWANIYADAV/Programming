#include<iostream>
using namespace std;

int power(int base , int exponent) {
    if (exponent == 0)
    return 1;

    int halfPower = power(base, exponent/2);

    if (exponent % 2 ==0 ){
        return halfPower*halfPower;
    }
    else {
        return base*halfPower*halfPower;
    }

}

int main() {
    int base, exponent;

    cout<<"Enter the base :-";
    cin>> base;
    cout << "Enter the exponent:-";
    cin>> exponent;

    int result = power(base, exponent);
    cout <<base <<"^"<< exponent << "=" << result << endl;
    return 0;
}
