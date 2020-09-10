#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(void){
    srand(time(NULL));
    int arreglo5[5];

        for(int i=0; i<5; i++){
            arreglo5[i] = rand()%10 + 1;
        }

        cout << "Aleatorios" << endl;
        for(int i=0; i<5; i++)
        {
            cout << "arreglo[" << i << "]=";
            cout << arreglo5[i] << endl;
        }

}
