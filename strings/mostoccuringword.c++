#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>
#include <unordered_map>

using namespace std;

int main() {
    string str;
    getline(cin, str);
    
    stringstream ss(str);
    string temp;
    vector<string> v;
    
    // Splitting the string into words and storing in vector
    while (ss >> temp) {
        v.push_back(temp);
    }

    // Sorting the vector of words
    sort(v.begin(), v.end());

    // Finding the word with the maximum frequency
    int maxCount = 1;
    int count = 1;
    string maxWord = v[0];

    for (int i = 1; i < v.size(); i++) {
        if (v[i] == v[i - 1]) {
            count++;
        } else {
            count = 1;
        }
        if (count > maxCount) {
            maxCount = count;
            maxWord = v[i];
        }
    }

    // Printing all words that have the maximum frequency
    count = 1;
    for (int i = 1; i < v.size(); i++) {
        if (v[i] == v[i - 1]) {
            count++;
        } else {
            count = 1;
        }
        if (count == maxCount) {
            cout << v[i] << " " << maxCount << endl;
        }
    }
    
    return 0;
}
