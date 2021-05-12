#include <iostream>

using namespace std;

int main() {

	//int count = 5;
	char option = ' ';
	bool salir = false;

	/*for (int i = 0; i < count; ++i) {
		cout << "Valor de i: " << i << endl;
		cout << "Deseas continuar? y/n" << endl;
		cin >> option;
		switch(option) {
			case 'y':
				cout << "Continuar" << endl;
				break;
			case 'n':
				cout << "Salir" << endl;
				salir = true;
				break;
			default:
				cout << "Selecciona una opción" << endl;
		}
		if (salir) {
			break;
		}
	}*/

	// Una mejor alternativa, un ciclo infinito: while.
	int i = 0;
	/*while(salir == false) {
		cout << "Valor de i: " << i << endl;
		cout << "Deseas continuar? y/n" << endl;
		cin >> option;
		switch(option) {
			case 'y':
				cout << "Continuar" << endl;
				break;
			case 'n':
				cout << "Salir" << endl;
				salir = true;
				break;
			default:
				cout << "Selecciona una opción" << endl;
		}
		if (salir) {
			break;
		}
	}*/

	// Otra opción para cuando siempre quieres hacer la primer iteración: do-while
	bool continuar = true;
	do {
		cout << "Valor de i: " << i << endl;
		cout << "Deseas continuar? y/n" << endl;
		cin >> option;
		switch(option) {
			case 'y':
				cout << "Continuar" << endl;
				break;
			case 'n':
				cout << "Salir" << endl;
				continuar = false;
				break;
			default:
				cout << "Selecciona una opción" << endl;
		}
	} while (continuar);

	return 0;
}