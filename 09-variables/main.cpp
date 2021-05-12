#include <iostream>

using namespace std;

int main() {
	int numero = 2147483647; // 10;
	char letra = 65; // 'A'; // Valor de la tabla ASCII
	float decimal = 2.5;
	bool valor_logico = true;

	unsigned short otro_numero = 65536; // 65535;

	unsigned int numero_sin_signo = 4294967295;

	cout << "Numero: " << numero << endl;
	cout << "Letra: " << letra << endl;
	cout << "Decimal: " << decimal << endl;
	cout << "Valor lógico: " << valor_logico << endl;

	cout << "Numero + 1 (desbordamiento): " << numero + 1 << endl;

	cout << "Otro numero (desbordamiento): " << otro_numero << endl;

	cout << "Numero sin signo: " << numero_sin_signo << endl;
	cout << "Numero sin signo + 1 (desbordamiento): " << numero_sin_signo + 1 << endl;
	cout << "Numero sin signo + 2 (desbordamiento): " << numero_sin_signo + 2 << endl;

	int numeros[] = { 100, 200, 300, 400, 500 };

	cout << "Número en la posición 0: " << numeros[0] << endl;
	cout << "Número en la posición 1: " << numeros[1] << endl;
	cout << "Número en la posición 2: " << numeros[2] << endl;
	cout << "Número en la posición 3: " << numeros[3] << endl;
	cout << "Número en la posición 4: " << numeros[4] << endl;

	// cout << "Cuantos números tiene? " << sizeof(numeros) << endl; // ¿Porqué dice 20?
	cout << "Cuantos números tiene? " << sizeof(numeros) / sizeof(numeros[0]) << endl;

	cout << "Reemplazar un valor (10) por el índice 1: " << (numeros[1] = 10) << endl;
	cout << "Nuevo valor: " << numeros[1] << endl;

	return 0;
}