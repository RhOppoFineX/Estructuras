#include <iostream>
using namespace std;

void solicitar(int a[], int tamano){
    for(int i = 0; i < tamano; i++){
		cout << "Digite un numero: ";
		cin >> a[i];
	}
}

float media(int a[], int tamano){
    float suma = 0;
    for (int i = 0; i < tamano; i++)
        suma += a[i];
    return suma / tamano;
}

int mayor(int a[], int tamano){
    int mayor = a[0];
	for(int i = 1; i < tamano; i++){
	    if (a[i] > mayor)
	        mayor = a[i];
	}
	return mayor;
}
