#include<iostream>
using namespace std;

int maze(int sr, int sc, int er, int ec, string s) {
    if(sr > er || sc > ec) return 0;  // Out of bounds, invalid path
    if(sr == er && sc == ec) {        // Reached the destination
        cout << s << endl;
        return 1;
    }
    
    // Explore right (R) and down (D)
    int right = maze(sr, sc + 1, er, ec, s + 'R');  // Move right
    int down = maze(sr + 1, sc, er, ec, s + 'D');   // Move down
    
    return right + down;  // Total number of valid paths
}

int main () {
    int sr, sc, er, ec;
    string s = "";
    
    cout << "Enter the starting row: ";
    cin >> sr;
    cout << "Enter the starting column: ";
    cin >> sc;
    cout << "Enter the ending row: ";
    cin >> er;
    cout << "Enter the ending column: ";
    cin >> ec;
    
    int totalPaths = maze(sr, sc, er, ec, s);
    cout << "Total paths: " << totalPaths << endl;

    return 0;
}
