#include <iostream>
#include "./mylib/math.cpp"

using namespace std;

int main() {
	cout << "Suma: " << suma(2, 2) << endl; // uso
	cout << "Resta: " << resta(20, 2) << endl;
	cout << "Valor por parámetro: " << multiplica_o_duplica(6, 4) << endl;
	cout << "Valor por defecto: " << multiplica_o_duplica(8) << endl;

	saludar("Diana");

	return 0;
}