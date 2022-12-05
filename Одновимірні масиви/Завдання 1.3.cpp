/*3. В одномірному масиві, що складається з дійсних елементів, обчислити суму від’ємних елементів 
масиву; добуток елементів масиву, розташованих між максимальним і мінімальним елементами. 
Упорядкувати елементи масиву за зростанням.*/

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
        float array[n];

        for (int i = 0; i < n; i++) {
            cin >> array[i];
        }

        float min = array[0], max = array[0], maxi = 0, mini = 0; //min ta max

        for (int i = 0; i < n; i++) {
            if (array[i] > max) {
                max = array[i];
                maxi = i;
            }
            if (array[i] < min) {
                min = array[i];
                mini = i;
            }
        }
        float sumaVid = 0, dobutok = 1;

        for (int i = 0; i < n; i++) {
            if (array[i] < 0) sumaVid = sumaVid + array[i];
        }

        int startfrom = 0, endat = 0; //добуток

        if (maxi > mini) { startfrom = mini; endat = maxi; }
        else { startfrom = maxi; endat = mini; }

        for (int i = startfrom + 1; i < endat; i++) {
            dobutok = dobutok * array[i];
        }

        cout << "Ñóìà â³ä’ºìíèõ åëåìåíò³â ìàñèâó: " << sumaVid << endl;
        cout << "Äîáóòîê ì³æ ì³í òà ìàêñ: " << dobutok;

        //за зростанням
        int temp;
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (array[j] > array[j + 1]) {
                    temp = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = temp;
                }
            }
        }

        cout << '\n' << "Ìàñèâ: ";
        for (int i = 0; i < n; i++) {
            cout << array[i] << " ";
        }
    }
    return 0;
}
