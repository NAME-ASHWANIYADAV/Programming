#include <iostream>
#include <vector>
#include <climits> // for INT_MIN

using namespace std;

int main() {
    int x;
    cout << "Enter the number of elements in the array: ";
    cin >> x;
    
    if (x < 3) {
        cout << "Array must have at least 3 elements to find the three largest elements." << endl;
        return 1;
    }

    int arr[x];
    for (int i = 0; i < x; i++) {
        cout << "Enter the " << i + 1 << " element of the array: ";
        cin >> arr[i];
    }

    int max = INT_MIN;
    int smax = INT_MIN;
    int tmax = INT_MIN;

    for (int i = 0; i < x; i++) {
        if (arr[i] > max) {
            tmax = smax;
            smax = max;
            max = arr[i];
        } else if (arr[i] > smax && arr[i] != max) {
            tmax = smax;
            smax = arr[i];
        } else if (arr[i] > tmax && arr[i] != max && arr[i] != smax) {
            tmax = arr[i];
        }
    }

    cout << "First largest element is " << max << endl;
    cout << "Second largest element is " << smax << endl;
    cout << "Third largest element is " << tmax << endl;

    return 0;
}
