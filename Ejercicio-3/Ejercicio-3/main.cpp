//
//  main.cpp
//  Ejercicio-3
//
//  Created by Ceci Benitez on 12/29/23.
/*
//  Leer los números a, b, c y d ; luego, exhibir dichos números en la pantalla y;
//  a) si son enteros y positivos, un mensaje, para cada uno de ellos, si es par o impar.
//  b) En caso contrario, “el número no es positivo” y/o “el número no es entero” y/o “el número es
//  entero” según sea el caso.
 */
//

#include<iostream>

using namespace std;

int main()
{
   float a, b, c, d;
   
   cout << "introducir cuatro numeros: \n \n";
   
   cout << "\ta=" ; cin >> a;
   cout << "\tb=" ; cin >> b;
   cout << "\tc=" ; cin >>c;
   cout << "\td=" ; cin >> d;
   cout << "\n \n";
   
   if (a > 0 && a == ((int)a)) // a entero y positivo
   
      if ((int)a % 2 == 0) // par
        cout << "\ta=" << a << "\tel numero es entero, positivo y par.\n ";
      else //impar
        cout << "\ta=" << a << "\tel numero es entero, positivo, pero impar. \n";
        
    else
    
        if ((int)a != a) //decimal
        
           if (a > 0) //positivo
              cout << "\ta=" << a << "\tel numero es decimal y positivo \n";
           else //negativo
               cout << "\ta=" << a << "\tel numero es decimal y negativo \n";
               
         else //entero negativo
         
              if (a == 0) // para el caso de 0
              cout << "\ta=" << a <<  "\tes un numer entero pero no es un numero ni par ni impar \n";
              
              else
             if ((int)a % 2 == 0) //par
         cout << "\ta=" << a << "\tel numero es entero, negativo y par.\n ";
              else //impar
          cout << "\ta=" << a << "\tel numero es entero, negativo, pero impar. \n";
          
          
    if (b > 0 && b == ((int)b)) // a entero y positivo
   
      if ((int)b % 2 == 0) // par
        cout << "\tb=" << b << "\tel numero es entero, positivo y par.\n ";
      else //impar
        cout << "\tb=" << b << "\tel numero es entero, positivo, pero impar. \n";
        
    else
    
        if ((int)b != b) //decimal
        
           if (b > 0) //positivo
              cout << "\tb=" << b << "\tel numero es decimal y positivo \n";
           else //negativo
               cout << "\tb=" << b << "\tel numero es decimal y negativo \n";
               
         else //entero negativo
         
              if (b == 0)
              cout << "\tb=" << b <<  "\tes un numero entero pero no es un numero ni par ni impar.\n";
              
              else
             if ((int)b % 2 == 0) //par
         cout << "\tb=" << b << "\tel numero es entero, negativo y par.\n ";
              else //impar
          cout << "\tb=" << b << "\tel numero es entero, negativo, pero impar. \n";
   
   if (c > 0 && c == ((int)c)) // a entero y positivo
   
      if ((int)c % 2 == 0) // par
        cout << "\tc=" << c << "\tel numero es entero, positivo y par.\n ";
      else //impar
        cout << "\tc=" << c << "\tel numero es entero, positivo, pero impar.\n";
        
    else
    
        if ((int)c != c) //decimal
        
           if (a > 0) //positivo
              cout << "\tc=" << c << "\tel numero es decimal y positivo \n";
           else //negativo
               cout << "\tc=" << c << "\tel numero es decimal y negativo \n";
               
         else //entero negativo
         
              if (c == 0)
              cout << "\tc=" << c <<  "\tes un numer entero pero no es un numero ni par ni impar.\n";
              
              else
             if ((int)c % 2 == 0) //par
         cout << "\tc=" << c << "\tel numero es entero, negativo y par.\n ";
              else //impar
          cout << "\tc=" << c << "\tel numero es entero, negativo, pero impar. \n";
   
   if (d > 0 && d == ((int)d)) // a entero y positivo
   
      if ((int)d % 2 == 0) // par
        cout << "\td=" << d << "\tel numero es entero, positivo y par.\n ";
      else //impar
        cout << "\td=" << d << "\tel numero es entero, positivo, pero impar. \n";
        
    else
    
        if ((int)d != d) //decimal
        
           if (d > 0) //positivo
              cout << "\td=" << d << "\tel numero es decimal y positivo. \n";
           else //negativo
               cout << "\td=" << d << "\tel numero es decimal y negativo. \n";
               
         else //entero negativo
         
              if (d == 0)
              cout << "\td=" << d <<  "\tes un numer entero pero no es un numero ni par ni impar.\n";
              
              else
             if ((int)d % 2 == 0) //par
         cout << "\td=" << d << "\tel numero es entero, negativo y par.\n ";
              else //impar
          cout << "\td=" << d << "\tel numero es entero, negativo, pero impar. \n";
    
    cout << "\n \n";
    
    return 0;
    
}
