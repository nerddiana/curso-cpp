#include <iostream>

using namespace std;

int main() {
	bool valor = false; // true
	cout << "Valor lógico: " << valor << endl;

	// cout << "Valor lógico negado: " << !true << endl;
	cout << "Valor lógico negado: " << !valor << endl;

	cout << "Evaluación lógica: " << (2 == 2) << endl;
	cout << "Evaluación lógica: " << (2 < 6) << endl;
	cout << "Evaluación lógica: " << (10 >= 6) << endl;
	cout << "Evaluación lógica: " << !true << endl;

	cout << "Operador AND: " << endl
		<< " false && false = " << (false && false) << endl 
		<< " false && true = " << (false && true) << endl 
		<< " true && false = " << (true && false) << endl 
		<< " true && true = " << (true && true) << endl;

	cout << "Operador OR: " << endl
		<< " false || false = " << (false || false) << endl 
		<< " false || true = " << (false || true) << endl 
		<< " true || false = " << (true || false) << endl 
		<< " true || true = " << (true || true) << endl;

	cout << "Expresiones lógicas: " << endl
		<< " (2 > 4) && ((2 * 4) == 8)" << endl;

	return 0;
}