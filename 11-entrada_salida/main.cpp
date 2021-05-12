#include <iostream>

using namespace std;

int main() {
	int valor = 0;

	cout << "Valor inicial: " << valor << endl;

	cout << "Introduce un número: ";
	cin >> valor;

	cout << "Nuevo valor: " << valor << endl;

	cout << "Tamaño: " << sizeof(valor) << endl;

	return 0;
}