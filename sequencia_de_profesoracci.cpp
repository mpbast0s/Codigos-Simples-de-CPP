/*
  SEQUÊNCIA DE PROFESORACCI
Escreva um programa que leia do teclado dois números reais não-nulos EPS e A. O programa deve calcular a soma dos termos ai(i⩾1) de uma sequência, na qual cada termo é definido da seguinte forma:  ai=ai/12∗i, onde a0 é o valor de entrada A.  Ou seja, o primeiro termo a1 é igual a02∗1, o segundo termo a2 é igual a a12∗2, o terceiro termo a3  igual a a22∗3 e assim por diante.

A soma deve ser feita até que o valor do termo seja menor ou igual a EPS. O programa deve exibir na tela a soma dos termos e a quantidade de termos somados.

Por exemplo, se EPS=0.1 e A=3, o valor de a1  é  32∗1 (que resulta 1.5), a2  é  1.52∗2  (que resulta 0.375) e o valor de a3  é  0.3752∗3 (que resulta 0.0625).  Neste ponto o programa deve parar de calcular novos termos porque 0.0625 é menor que EPS.   O programa deve exibir 1.9375, que é o resultado da soma  1.5 + 0.375 + 0.0625 e a quantidade 3 de termos somados (vide exemplos abaixo).

Caso sejam digitados valores negativos ou nulos para EPS e A seu programa deve exibir a mensagem Valor invalido e terminar sem efetuar nenhum cálculo.
*/
#include <iostream>
using namespace std;

float validare (float valor){
  if(valor<=0)
    {
    cout << "Valor invalido" << endl;
    return 1;
    }
    else { 
    return 0;
    }
}


int main() {
 float A, EPS, solucao = 0, resultado = 1; 
 int contador = 0;
 
 cout << "Digite EPS: ";
 cin >> EPS;
 if(validare(EPS)>0){return 0;}
 cout << "Digite A: ";
 cin >> A;
 if(validare(A)>0){return 0;}

 while(resultado > EPS){
   contador++;
   resultado = A/(2*contador);
   solucao = solucao + resultado;
   A = resultado;
   
 }
 
 cout << "Soma de " << contador << " termos = " << solucao << endl;
 return 0;
}
