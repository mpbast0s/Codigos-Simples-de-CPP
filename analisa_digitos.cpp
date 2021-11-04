/*
  ANALISA DIGITOS:
Defina a função de nome analisaDigitos que recebe como parâmetro de entrada um inteiro n positivo  (n>0) e  devolve o número de dígitos,  o primeiro e último dígitos  de n . Esta função NÃO DEVE mostrar dados na tela ou solicitar valores do usuário. Faça também um programa que leia uma sequência de números terminada com o valor 0, e chame a função analisaDigitos mostrando quais são seus primeiros e últimos dígitos, bem como a quantidade de de dígitos que o número digitado possui. Além disso o programa deverá exibir a soma de todos os valores digitados que possuem um número de dígitos menor que 3.  Se o primeiro valor informado for 0, o programa deve exibir a mensagem “Nao foram fornecidos numeros” e terminar sem efetuar cálculo algum.

 
A função analisaDigito deve ter o seguinte tipo:

Deve ter 3 paràmetros e retornar um numero inteiro (número de dígitos de n) via return.
O primeiro parâmetro n deve ser passado por valor
O segundo e terceiro parâmetros são parâmetros de saída da função (tipo inteiro, indicando respectivamente o primeiro e último dígitos de n), e devem ser passados por referência

*/
#include <iostream>
#include <cmath>
using namespace std;

int analisaDigito(int & n, int & prim, int & ult){
  int digitos_n = 1;
  float divisao = n; 
  while ( divisao >= 10){ //quando a divisao der menor que 1, o numero acaba
    divisao = n*pow(10, -digitos_n);
    digitos_n++;
  }
  prim = n/pow(10, digitos_n-1);
  ult = n%10;

  return digitos_n;
}

int main () { 
  int numero, digitos_n, prim_n = 0, ult_n = 0, menor_q_3 = 0;
  cout << "Digite a lista de numeros: ";
  cin >> numero; //pede o primeiro num da lista

  if(numero == 0){ //caso o primerio seja 0
    cout << "Nao foram fornecidos numeros" << endl;
    return 0;
  }

  while(numero != 0){
    if(numero > 0){
      digitos_n = analisaDigito(numero, prim_n, ult_n);
      //parte que manda escrever
      cout << numero << " tem " << digitos_n << " digitos" << endl;
      cout << "Primeiro = " << prim_n << "\nUltimo = " << ult_n << endl;

      //parte da soma dos digitos menores que 3
      if (digitos_n < 3)
        menor_q_3 = menor_q_3 + numero;
      
    }
    else
      cout <<  "O numero deve ser positivo" << endl;
    

    cin >> numero;
  }

  cout << "Soma dos numeros com uma quantidade de digitos menor que 3:  " << menor_q_3 << endl; //no finall


  return 0;
}
