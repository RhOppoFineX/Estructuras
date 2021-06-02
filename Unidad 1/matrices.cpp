#include <iostream>
using namespace std;

int m[2][2] = {{0,0},{0,0}};

void mostrar(){
    for(int fila=0; fila<2; fila++){
        for(int columna=0; columna<2; columna++)
            cout << m[fila][columna] << " ";
        cout << endl;
    }
}

void agregar(){
    int fila=0, columna=0, valor=0;
    cout << "Fila: ";
    cin >> fila;
    cout << "Columna: ";
    cin >> columna;
    if(fila>=0 && fila<2 && columna>=0 && columna<2){
        cout << "Valor: ";
        cin >> valor;
        m[fila][columna] += valor;
    }
    else
        cout << "Parametros invalidos!" << endl;
}

int main(){
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "\n1)Mostrar\n2)Agregar\n3)Salir\n";
        cout << "Opcion: ";
        cin >> opcion;

        switch(opcion){
        case 1:
            mostrar();
            break;
        case 2:
            agregar();
            break;
        case 3:
            continuar = false;
            break;
        default:
            cout << "Opcion invalida!" << endl;
            break;
        }
    }while(continuar);

    return 0;
}