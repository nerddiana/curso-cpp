#include <iostream>

using namespace std;

int main() {
	// Consideración especial sobre los incrementos/decrementos con operadores especiales
	/*int numero = 0;
	// El órden importa:
	cout << "De esta forma primero se muestra y luego se incrementa" << endl;
	cout << "  Valor del número: " << numero++ << endl;
	cout << "Si lo imprimimos de nuevo ahora es distinto" << endl;
	cout << "  Valor del número: " << numero << endl;
	cout << "De esta otra primero se incrementa y luego se muestra" << endl;
	cout << "  Valor del número: " << ++numero << endl;
	cout << "Pero en este caso es igual" << endl;
	cout << "  Valor del número: " << numero << endl;
	cout << "Es por eso que lo recomendable es utilizar el operador antes de la variable" <<  endl;*/

	// Forma básica de un ciclo for
	/*for (int i = 0; i < 5; ++i) {
		cout << "Vuelta número: " << i << endl;
	}*/

	/*int limit = 10;

	cout << "Introduce un límite para el ciclo (10 por defecto): ";
	cin >> limit;

	for (int i = 0; i < limit; ++i)	{
		cout << "Vuelta número: " << i << endl;
	}*/

	/*int lista[] = { 100, 200, 300, 400, 500 };
	int lista_size = sizeof(lista) / sizeof(lista[0]);

	for (int i = 0; i < lista_size; ++i) {
		cout << "Valor: " << lista[i] << endl;
	}*/

	// char texto[] = { 'h', 'o', 'l', 'a', ' ', 'm', 'u', 'n', 'd', 'o', '!', '\n' };
	char texto[] = "hola mundo!\n";
	/*int texto_size = sizeof(texto) / sizeof(texto[0]);

	for (int i = 0; i < texto_size; ++i)
	{
		cout << texto[i];
	}*/

	// Pero C++ puede inferirlo por tí...
	cout << texto << endl;

	// Funciona gracias a que cout es un stream.. justo cómo esto:
	// cout << 2 << 2 << 2 << endl; // Sale "222"

	// Un ciclo puede romperse intencionalmente!
	for (int i = 0; i < 100; ++i) {
		cout << "valor de i: " << i << endl;
		if (i == 50) {
			cout << "Break!" << endl;
			break;
		}
	}

	return 0;
}