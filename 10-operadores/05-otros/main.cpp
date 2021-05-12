#include <iostream>

using namespace std;

int main() {
	// Casting de tipos
	int numero = 100;
	float decimal = 2.5;
	char letra = '@';

	cout << "Entero a flotante: " << (float) numero << endl;
	cout << "Flotante a entero: " << (int) decimal << endl;
	cout << "Letra cómo número: " << (int) letra << endl;
	cout << "Entero a entero corto sin signo: " << (unsigned short int) numero << endl;

	// Se puede utilizar casting de tipos para forzar una division exacta
	int x = 3, y = 2;

	cout << "División exacta: " << ((float)x / (float)y) << endl;
	// La sintaxis tipo(valor) también es valida
	cout << "División exacta (sintaxis alternativa): " << (float(x) / float(y)) << endl;

	// Sizeof para medir el tamaño en bytes de un tipo o variable
	cout << "Sizeof int: " << sizeof(int) << " bytes" << endl;
	cout << "Sizeof int: " << sizeof(numero) << " bytes" << endl;
	cout << "Sizeof decimal: " << sizeof(decimal) << " bytes" << endl;
	cout << "Sizeof letra: " << sizeof(letra) << " bytes" << endl;

	return 0;
}