/*1. Напишіть програму, що заміняє нулями всі від’ємні елементи заданого не 
порожнього масиву, що передують його першому максимальному елементу.*/

#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "n= ";
    cin >> n;
    if (n < 1) {
        cout << "try again";
    }
    else {

        float array[n], max, a;
        int k = 0;

        for (int i = 0; i < n; i++) {

            cin >> array[i];
            if (i == 0)max = array[0];
            else if (array[i] > max) {
                max = array[i];
                k = i;
            }

        }
        cout << "max is " << max << " on postion " << k << '\n';
        cout << "new array is:" << '\n';

        for (int i = 0; i < n; i++) {
            if (array[i] < 0 && i < k) {
                array[i] = 0;
            }
        }

        for (int i = 0; i < n; i++) {
            cout << array[i] << " ";
        }
    }
    return 0;
}