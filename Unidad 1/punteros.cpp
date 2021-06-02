#include <iostream>
using namespace std;

int main(){
    int q = 5;
    q = 100;
    
    cout << "Contenido de Q: " << q << endl;
    cout << "Direccion de Q: " << &q << endl;
    
    int *p = &q;
    
    cout << "Puntero contiene: " << p << endl;
    cout << "Puntero apunta a: " << *p << endl;
    
    *p = 50;
    
    cout << "Puntero contiene: " << p << endl;
    cout << "Puntero apunta a: " << *p << endl;
    cout << "Contenido de Q: " << q << endl;

    return 0;
}
//Un puntero es una variable que contiene una dirección de memoria