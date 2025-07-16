#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int>& v) {
    int n = v.size();
    int i = 0;
    while (i < n) {
        int correctIdx = v[i];
        if (v[i] < n && v[i] != v[correctIdx]) {
            swap(v[i], v[correctIdx]);
        } else {
            i++;
        }
    }

    for (int i = 0; i < n; i++) {
        if (v[i] != i) return i;
    }
    return n;
}

int main() {
    vector<int> v;
    cout << "Enter the size of the vector: ";
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        int z;
        cin >> z;
        v.push_back(z);
    }

    cout << "\nThe input vector is: ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    int missing = missingNumber(v);

    cout << "The vector after cycle sort is: ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << "\nMissing number is: " << missing << endl;

    return 0;
}
