/*Обчислити значення змінної , вираз якої вказано у таблиці 1. 
і – номер варіанта, к – цілі числа. Функцію вибрати з таблиці 2 та оформити в програмі як функцію. Вивести значення i, a, b, z.
1 варіант*/

#include<iostream>
#include<cmath>
#include<math.h>

using namespace std;

double function1(int x)
{
    double a;

    a = ((9 / 2) * cos(2 * x) - abs(sin(x / 1.1)));

    return a;
}

double function2(int x)
{
    double b;

    b = ((9 / 2) * cos(2 * x) - abs(sin(x / 1.1)));

    return b;
}

int main()
{
    int i = 1, k;
    double a, b, Z;

    double summ1 = 0;
    double summ2 = 0;

    k = i;

    for (int k = i; k <= i + 5; k++)
    {
        a = function1(2);
        summ1 = summ1 + a;
    }

    for (int k = i; k <= i + 8; k++)
    {
        b = function2(2);
        summ2 = summ2 + b;
    }

    Z = pow((summ1 * summ2), (1 / 4));

    cout << "i = " << i << endl;
    cout << "a = " << summ1 << endl;
    cout << "b = " << summ2 << endl;
    cout << "Z = " << Z << endl;

}
