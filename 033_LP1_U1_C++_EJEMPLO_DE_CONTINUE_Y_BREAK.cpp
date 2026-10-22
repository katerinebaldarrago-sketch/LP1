// Programa: Ejemplo de continue y break
// Funcion : Muestra los numeros del 1 al 10 usando un bucle for, omitiendo el numero 3 con continue y deteniendo el bucle al llegar al 8 con break.
#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    for(int i = 1; i <= 10; i++) {
        if(i == 3) {
            continue;
        }
        if(i == 8) {
            break;  
        }
        
        cout << "Numero " << i << endl;
    }
    return 0;
}
