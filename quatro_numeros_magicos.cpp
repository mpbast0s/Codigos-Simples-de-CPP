/*
    QUATRO ALGARISMOS MÁGICOS
  Considere n=3025. Se você separar n em duas dezenas, 30 e 25, e somar essas dezenas, o resultado é 55. Multiplicando 55*55, você terá n. Faça um programa em C++ que encontre quais outros números de quatro algarismos têm essa característica. 
*/

#include <iostream>
#include <cmath>

using namespace std; 
int main() {
  int numero, quadrado, valor;
  numero = 1000;

  while (numero < 10000){
    valor = numero/100;
    valor = valor + numero%100; 
    quadrado = pow (valor, 2); 
    
     if(numero == quadrado)
     cout << numero << "\n"; 
    numero++;
  }

return 0;
}

