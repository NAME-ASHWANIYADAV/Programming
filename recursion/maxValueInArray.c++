#include <iostream>
#include <climits>
using namespace std;

void printMax(int arr[], int n, int idx, int max) {
    if (idx == n) {
        cout << max;
        return;
    }
    if (max < arr[idx]) max = arr[idx];
    printMax(arr, n, idx + 1, max);
}

int maxInArray(int arr[], int n, int idx) { // Corrected `inr` to `int`
    if (idx == n) return INT_MIN;
    return max(arr[idx], maxInArray(arr, n, idx + 1));
}

int main() {
    int arr[] = {2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    printMax(arr, n, 0, INT_MIN);
    cout << "\n" << maxInArray(arr, n, 0); // Added newline for clarity
}
