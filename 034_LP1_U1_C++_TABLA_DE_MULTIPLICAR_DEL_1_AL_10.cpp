// Programa: Tabla de Multiplicar del 1 al 10
// Funcion : Muestra las tablas de multiplicar del 1 al 10 usando dos bucles for anidados, recorriendo el multiplicando y el multiplicador.
#include <iostream>

using namespace std;

int main()
{
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            cout << i << " x " << j << " = " << i * j << endl;
        }
    }
    
    return 0;
}
