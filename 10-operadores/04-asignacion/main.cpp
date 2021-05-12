#include <iostream>

using namespace std;

int main() {
	int numero = 0;

	cout << "Asignación simple: " << (numero = 100) << endl;

	cout << "Asignación aritmética: " << endl
		<< " Suma: " << (numero += 1) << endl
		<< " Resta: " << (numero -= 2) << endl
		<< " Multiplicación: " << (numero *= 2) << endl
		<< " División entera: " << (numero /= 2) << endl
		<< " Residuo/módulo: " << (numero %= 2) << endl;

	cout << "Incremento en uno: " << numero++ << endl; // equivale a variable += 1
	cout << "Decremento en uno: " << numero-- << endl; // equivale a variable -= 1

	return 0;
}