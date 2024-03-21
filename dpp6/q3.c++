// print the factorials of first x numbers
#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter the number of factorials to print: ";
    cin >> x;

    for (int i = 1; i <= x; i++) {
        int factorial = 1;
        for (int j = 1; j <= i; j++) {
            factorial *= j;
        }
        cout << "Factorial of " << i << " is: " << factorial << endl;
    }

    return 0;
}

