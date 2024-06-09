#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m;
    cout << "Enter the number of rows of the 1st matrix ->";
    cin >> m;
    int n;
    cout << "Enter the number of columns of the 1st matrix ->";
    cin >> n;
    int p;
    cout << "Enter the number of rows of the 2nd matrix ->";
    cin >> p;
    int q;
    cout << "Enter the number of columns of the 2nd matrix ->";
    cin >> q;

    if (n == p) {
        vector<vector<int>> a(m, vector<int>(n));
        for (int i = 0; i < m; i++) {
           
            for (int j = 0; j < n; j++) {
                 cout << "Enter the elements of the 1st matrix ";
                cin >> a[i][j];
            }
        }

        vector<vector<int>> b(p, vector<int>(q));
        
        for (int i = 0; i < p; i++) {
            for (int j = 0; j < q; j++) {
                cout << "Enter the elements of the 2nd matrix ";
                cin >> b[i][j];
            }
        }

        vector<vector<int>> res(m, vector<int>(q, 0));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < q; j++) {
                for (int k = 0; k < n; k++) {
                    res[i][j] += a[i][k] * b[k][j];
                }
            }
        }

        // Print the result matrix
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < q; j++) {
                cout << res[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        cout << "The matrices cannot be multiplied!";
    }

    return 0;
}
