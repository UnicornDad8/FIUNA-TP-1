//
//  main.cpp
//  Ejercicio-6
//
//  Created by Ceci Benitez on 1/1/24.
//  --------------------------------------------------------------------
//  Leer un número entero y positivo “n” y luego leer n números enteros.
//  De los números leídos, identificar e imprimir, los números que
//  estén entre 25 y 50 (intervalo cerrado). Al final del programa
//  imprimir la media geométrica de los números que
//  cumplen dicha condición.
//

#include<iostream>
#include<math.h>

using namespace std;

int main () {
 int n = 0, a = 0, c = 1;
 float total = 0, promedio = 0, producto = 1;
 
 cout << "Introdusca un numero entero y positivo: ";
 cin >> n;
 cout << "introduzca " << n << " numeros enteros: \n";
 
 while (c <= n) {
       c++;
       cout << c - 1 << ":";
       cin >> a;
       
       if ( a>=25 && a<=50 ) {
          cout << a << " esta entre 25 y 50\n\n";
          total++;
          producto *= a;
       }
 }
 
 if (total != 0) {
  promedio = pow (producto, (1 / total));
  
  cout << "La media de los numeros ingresados entre 25 y 50 es: " << promedio << "\n\n";
  }
 else
     cout << "Los numeros no se encuentran entre 25 y 50 \n\n";
  
  return 0;
}
