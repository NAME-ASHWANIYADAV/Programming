#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> convertArray(vector<int> arr) {
    vector<int> arr_copy = arr;
    sort(arr_copy.begin(), arr_copy.end());
    vector<int> result(arr.size());
    for(int i = 0; i < arr.size(); i++) {
        int index = find(arr_copy.begin(), arr_copy.end(), arr[i]) - arr_copy.begin();
        result[i] = index;
    }
    return result;
}

int main() {
    int N;
    cout << "Enter the number of elements: ";
    cin >> N;
    vector<int> arr(N);
    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    vector<int> result = convertArray(arr);
    cout << "Converted array: ";
    for(int i = 0; i < N; i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}