#include <iostream>
#include <vector>

using namespace std;

int main() {
    int x;
    cout << "Enter the number of elements of the array: ";
    cin >> x;
    
    int arr[x];
    for (int i = 0; i < x; i++) {
        cout << "Enter the " << i + 1 << " element of the array: ";
        cin >> arr[i];
    }

    cout << "Unique elements in the array are: ";
    for (int i = 0; i < x; i++) {
       int count = 0;
       for (int j = 0; j < x; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
       }
       if (count == 1) {
           cout << arr[i] << " ";
       }
    }
    
    return 0;
}
