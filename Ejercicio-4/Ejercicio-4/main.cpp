//
//  main.cpp
//  Ejercicio-4
//
//  Created by Ceci Benitez on 12/30/23.
//  Leer tres números, A, B, y C controlando o verificando que sean enteros, positivos, en orden
//  ascendente. A continuación imprimir en pantalla el mensaje: “Los números introducidos están en
//  progresión aritmética” o “Los números introducidos están en progresión geométrica” o “Los números
//  introducidos no están en progresión aritmética ni en progresión geométrica” según sea el caso.
//

#include<iostream>

using namespace std;

int main () {
     float a, b, c;
     
     cout << "\n\tIntrodusca 3 numeros enteros, positivos y en orden ascendente\n";
     cout << "(empiece a partir del numero 2)\n";
    
     cout << "\ta="; cin >> a;
     cout << "\tb="; cin >> b;
     cout << "\tc="; cin >> c;
     
     if (int(c) == c && c > 0 && c > b && int(b) == b && b > 0 && b > a && int(a) == a && a > 0)
     {
        if (c - b == b - a)
           cout << "\n\tlos numeros estan en progresion aritmetica.\n";
        if (c / b == b / a && int (c / b) == (c / b))
           cout << "\n\tlos numeros estan en progresion geometrica.\n";
    }
     else
         cout << "\t\nLos numeros introducidos no satisfacen las condiciones.\n\n";
     
     return 0;
     
}
