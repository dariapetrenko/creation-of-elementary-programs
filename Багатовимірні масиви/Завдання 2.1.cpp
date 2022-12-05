/*Визначити і надрукувати кількість додатних елементів матриці.*/

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
        int array[n][m], k;
       
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                array[i][j] = ((rand() % 19) - 9);
                if (array[i][j] > 0) k++;
            }
        }

      
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << array[i][j] << " ";
            }
            cout << "\n";
        }
        cout << "\n" << "Додатні: = " << k;
    }
    return 0;
}
