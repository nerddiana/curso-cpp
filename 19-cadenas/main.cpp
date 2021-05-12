#include <iostream>
#include <string>

using namespace std;

int main() {
	char hola[5] = {'H', 'o', 'l', 'a', '\0'};
	cout << hola << endl;

	char holaimpl[] = "Hola de largo implicito";
	cout << holaimpl << endl;

	char *holaptr = "Hola con punteros";
	cout << holaptr << endl;

	string texto = "Hola mundo!";
	cout << texto << endl;

	cout << "Largo del texto: " << texto.size() << " letras" << endl;
	cout << "Tamaño del texto en memoria: " << sizeof(texto) << " bytes" << endl;

	texto = "Otro texto pero mas largo";
	cout << "Otro texto: " << texto << " de " << texto.size() << " letras" << endl;

	// String a entero
	string a = "100";
	int b = stoi(a);

	a = "0.24";
	float c = stof(a);

	cout << "string a entero: " << b << ", tipo: " << typeid(b).name() << endl;
	cout << "string a flotante: " << c << ", tipo: " << typeid(c).name() << endl;

	a = to_string(b);
	cout << "entero a string: " << a << endl;

	a = to_string(c);
	cout << "floatante a string: " << a << endl;

	return 0;
}