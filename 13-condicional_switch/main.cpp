#include <iostream>

using namespace std;

int main() {
	// Condiciones exhaustivas
	cout << "Este es el menú principal de tu programa: " << endl
		<< " Selecciona una opción (introduce un número)" << endl << endl
		<< "  1) Acceder a mi cuenta" << endl
		<< "  2) Crear una cuenta" << endl
		<< "  3) Revisar mis configuraciones" << endl
		<< "  4) Leer los términos y condiciones" << endl
		<< "  5) Salir" << endl;

	int opcion = 0;
	cin >> opcion;

	/*if (opcion == 1) {
		cout << "Has accedido a tu cuenta" << endl;
	} else if (opcion == 2) {
		cout << "Ahora vamos a crear una cuenta para ti" << endl;
	} else if (opcion == 3) {
		cout << "Vamos a revisar tus configuraciones" << endl;
	} else if (opcion == 4) {
		cout << "Estos son nuestros términos y condiciones" << endl;
	} else if (opcion == 5) {
		cout << "Bye bye :D" << endl;
	}*/

	// Una mejor estrategia para condicionales por casos: switch-case

	switch(opcion) {
		case 1:
			cout << "Has accedido a tu cuenta" << endl;
			break;
		case 2:
			cout << "Ahora vamos a crear una cuenta para ti" << endl;
			break;
		case 3:
			cout << "Vamos a revisar tus configuraciones" << endl;
			break;
		case 4:
			cout << "Estos son nuestros términos y condiciones" << endl;
			break;
		case 5:
			cout << "Bye bye :D" << endl;
			break;
		default:
			cout << "Selecciona una opción válida" << endl;
	}

	return 0;
}