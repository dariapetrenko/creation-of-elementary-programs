/*Заповнити квадратну матрицю випадковими числами (функція). 
Знайти мінімальний з неповторюваних елементів матриці. 
Вивести матрицю (функція) і мінімальний елемент на екран.*/

#include <iostream>

using namespace std;

int main() {
    int n, m;
    cout << "n= ";
    cin >> n;
    cout << "m= ";
    cin >> m;
    if ((n < 1) || (m < 1)) {
        cout << "try again";
    }
    else {
        int array[n][m];
       
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                array[i][j] = ((rand() % 19) - 9);
            }
        }

        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << array[i][j] << " ";
            }
            cout << "\n";
        }

        int min = array[0][0], k = 0;
        bool f = true;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                k = 0;
                for (int o = 0; o < n; o++) {
                    for (int z = 0; z < m; z++) {
                        if ((array[i][j] == array[o][z]) && ((i != o) || (j != z))) { k++; }

                        if ((min == array[o][z]) && ((i != o) || (j != z)) && (k > 0)) {
                            f = !f;
                        }
                    }
                }
                if ((array[i][j] < min) && (k == 0)) { min = array[i][j]; }
            }
        }

        if (min == array[0][0]) {
            if (f) {
                cout << "\n" << "min ne povt:=" << min;
            }
            else cout << "\n" << "ne isnyye";
        }
        else { cout << "\n" << "min ne povt:=" << min; }
    }
    return 0;
}
