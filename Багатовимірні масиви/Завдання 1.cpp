/*Заповнити матрицю послідовними числами від 1 до n2 за зразком (11 варіант)*/

#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "n:=";
    cin >> n;
    if (n < 1) {
        cout << "try again";
    }
    else {
        int array[n][n];
        int k = 0, x, y;

        for (int i = 0; i < n; i++) {
            y = 0;
            x = i;
            while (x >= 0) {
                k++;
                array[x][y] = k;
                y++;
                x--;
            }
        }
        for (int i = 0; i < n; i++) {
            y = i;
            x = n;
            while (y < n) {
                array[x][y] = k;
                k++;
                y++;
                x--;
            }
            k--;
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << array[i][j] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}

