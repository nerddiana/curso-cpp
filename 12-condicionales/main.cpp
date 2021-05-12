#include <iostream>

using namespace std;

int main() {

	/*if (true) {
		cout << "El valor es verdadero" << endl;
	}

	if (false) {
		// Esto nunca pasará
	} else {
		cout << "El valor es falso" << endl;
	}

	if (2 + 2 == 4) {
		cout << "¡Por supuesto que si!" << endl;
	} else {
		// Esto nunca pasaría
	}

	int numero = 0;

	if (numero < 5) {
		cout << "¡El valor es menor que 5! (porque es cero)" << endl;
	}

	cout << "Introduce un número: ";
	cin >> numero;

	if (numero >= 5) {
		cout << "¡El número que introdujiste es mayor o igual que 5!" << endl;
	} else {
		cout << "¡El número que introdujiste es menor que 5!" << endl;
	}*/

	// Cualquier otra expresión que nos sea útil para el programa
	/*int password_almacenado = 12345;
	int password = 0;

	cout << "Introduce tu contraseña: ";
	cin >> password;

	if (password == password_almacenado) {
		cout << "Tu password es correcto, ¡bienvenide!." << endl;
	} else {
		cout << "Lo siento, tu password es incorrecto :C" << endl;
	}*/

	// Cualquier cadena de condiciones necesaria
	int password = 0;

	cout << "Establece un password: ";
	cin >> password;

	/*if (password < 10000) {
		cout << "Tu password es muy corto" << endl;
	} else {
		// Continúa el proceso...
		if (password > 1000000) {
			cout << "Tu password es demasiado largo" << endl;
		} else {
			// Continúa el proceso...
			cout << "Excelente, tu password ha sido actualizado" << endl.
		}
	}*/

	// Una forma más organizada: else if
	if (password < 10000) {
		cout << "Tu password es muy corto" << endl;
	} else if (password > 1000000) {
		cout << "Tu password es demasiado largo" << endl;
	} else {
		cout << "Excelente, tu password ha sido actualizado" << endl;
	}

	return 0;
}