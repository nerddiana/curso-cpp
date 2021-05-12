#include <iostream>

using namespace std;

int main() {
	int x = 3;
	int y = 2;

	cout << "Suma: " << (x + y) << endl;
	cout << "Resta: " << (x - y) << endl;
	cout << "Multiplicación: " << (x * y) << endl;
	cout << "División entera: " << (x / y) << endl;
	cout << "Resuduo/módulo: " << (x % y) << endl;

	cout << "Expresiones aritméticas: " << endl
		<< ( (2 * 4) + (500 / 2.5)) - 24 << endl;
	return 0;
}