/*Є дані про шість товарів. ввести числовий код одного з них і вивести 
про нього такі відомості: ціну і кількість товару на складі;*/

#include <iostream>

using namespace std;

int main()
{
	int a = 1;
	int b = 2;
	int c = 3;
	int d = 4;
	int e = 5;
	int f = 6;
	double code_t;

	cout << "Введіть код товару: " << endl;
	cin >> code_t;

	if (code_t == a) {
		cout << "3$ per pack, 230 packs" << endl;

	}
	else if (code_t == b) {
		cout << "25$ per pack, 560 packs" << endl;

	}
	else if (code_t == c) {
		cout << "43$ per pack, 400 packs" << endl;

	}
	else if (code_t == d) {
		cout << "10$ per pack, 1200 packs" << endl;

	}
	else if (code_t == e) {
		cout << "23$ per pack, 256 packs" << endl;

	}
	else if (code_t == f) {
		cout << "5$ per pack, 456 packs" << endl;
	}
	else {
		cout << "none" << endl;
	}
	return 0;
}
