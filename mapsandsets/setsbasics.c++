#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<int> s = {1,2,3,4,5,6,7,8,9,10};

    cout << "Initial size: " << s.size() << endl;

    s.erase(10);
    cout << "Size after erasing 10: " << s.size() << endl;

    cout << "Elements: ";
    for (auto x : s) {
        cout << x << " ";
    }
    cout << endl;

    int target = 51;
    if (s.find(target) != s.end()) {
        cout << target << " exists" << endl;
    } else {
        cout << target << " does not exist" << endl;
    }
}