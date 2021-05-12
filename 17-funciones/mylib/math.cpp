#pragma once
#include <iostream>
#include <string>

using namespace std;

// Definición
int suma(int a, int b) {
	return a + b;
}

int resta(int a, int b) {
	return a - b;
}

int multiplica_o_duplica(int a, int b = 2) {
	return a * b;
}

void saludar(string nombre) {
	cout << "Hola " << nombre << "!" << endl;
}