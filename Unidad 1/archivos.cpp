#include <iostream>
#include "funciones.hpp"
using namespace std;

int main(){
    // Declarando variables
	int elementos = 5, numeros[elementos];
	float promedio = 0;
	
	// Solicitar valores al usuario
	solicitar(numeros, elementos);
	
	// Calcular el promedio
	promedio = media(numeros, elementos);
	cout << "Promedio: " << promedio << endl;
	
	// Calcular mayor
	cout << "Calculando mayor..." << endl;
	cout << "Mayor: " << mayor(numeros, elementos) << endl;
}
