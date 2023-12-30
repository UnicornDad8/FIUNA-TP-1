//
//  main.cpp
//  Ejercicio-2
//
//  Created by Ceci Benitez on 12/23/23.
//
// Leer los números de tipo entero a y b, y de coma flotante c y d; luego, exhibir dichos números en la
// pantalla e imprimir el valor de las variables e=a+c (e de tipo entero) y f= b*d (f de coma flotante)
//
#include <iostream>

using namespace std;

int main() {
    int a, b, e;
    float c, d, f;
    
    cout << "Introducir dos numeros de tipo entero: " << endl;
    cout << "a: ";
    cin >> a;
    cout << "\n";
    
    cout << "b: ";
    cin >> b;
    cout << "\n";
    
    cout << "Introducir dos numeros de tipo flotante" << endl;
    cout << "c: ";
    cin >> c;
    cout << "\n";
    
    cout << "d: ";
    cin >> d;
    cout << "\n";
    
    cout << a << "\t" << b << "\t" << c << "\t\t" << d << endl;
    
    cout << "luego tenemos una operacion de suma a + c de tipo entero" << endl;
    e = a + static_cast<int>(c);
    cout << e << endl;
    
    cout << "y una operacion de multiplicacion b * d de tipo flotante" << endl;
    f = b * d;
    cout << f << endl;

    return 0;
}
