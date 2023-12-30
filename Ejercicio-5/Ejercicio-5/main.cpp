//
//  main.cpp
//  Ejercicio-5
//
//  Created by Ceci Benitez on 12/30/23.
//  Leer un número “n” entero, positivo y menor que 100, verificar si
//  dicho número es:
//  a) par.
//  b) múltiplo de cinco.
//  c) a la vez par y múltiplo de cinco. Calcular el factorial de
//  dicho número, imprimir los resultados, indicando los casos.
//

#include <iostream>

using namespace std;

int main ()
{
    float n = 0.1f;
    long factorial = 1;
    
    cout << "Introdusca un numero menor que 100 entero y positivo: ";
    cin >> n;
    
    if (n > 0 && n < 100 && int(n) == n) {
        if((int(n) % 2 == 0) && (int(n) % 5 == 0))
            cout << "El numero es a la vez par y multiplo de 5.\n";
        else if (int(n) % 2 == 0)
            cout << "El numero es par.\n";
        else if (int(n) % 5 == 0)
            cout << "El numero es multiplo de 5.\n";
            
        for(int i = 1; i <= n; i++) {
            factorial *= i;
        }
         
         cout << "Su factorial es: " << factorial;
         cout << "\n\n";
      }
      else
          cout << "El numero no cumple las condiciones.\n\n";
        

    return 0;
}
