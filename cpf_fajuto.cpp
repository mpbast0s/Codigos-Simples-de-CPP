/* 
  CPF FAJUTO
Faça um programa em C++ que leia um valor numérico inteiro N com no mínimo 5 dígitos. Seu programa deve gerar um valor  A expresso pelos dois último dígitos de N, e um valor  B expresso pelos dígitos restantes de N. Por exemplo, se N é 12345, o valor A será 45 e o valor B será 123.

Se o valor B for divisível pelo valor A, seu programa deve exibir a mensagem "Numero fornecido aceito" seguido do quociente da divisão de B por A. Caso contrário, deve ser exibida a mensagem "Numero fornecido recusado". Se valor N fornecido não tiver mínimo de 5 dígitos, seu programa deve exibir a mensagem "Entrada invalida" e o programa deve terminar.
*/
#include <iostream>
using namespace std;
int exercicio3 ()
{
int valor1, primeiros, ultimos, resto;
cout << "Digite valor (minimo 5 digitos):" << endl;
cin >> valor1;
if(valor1-9999 < 1){
  cout << "Entrada inválida." << endl;
}
else{
  primeiros = valor1/100;
  //cout << "Primeiros valores: "<< primeiros << endl;
  ultimos = valor1 - primeiros*100;
  //cout << "Últimos valores: "<< ultimos << endl;
  resto = primeiros%ultimos;
  if(resto==0)
    cout << "Número fornecido aceito: "<< primeiros/ultimos << endl;
  else
    cout << "Número fornecido recusado." << endl;
  }

return 0;
}

/*
 para fazer isso rodar - no cmd: 
 clang++-7 -pthread -std=c++17 -o exercicio3 cpf_fajuto.cpp main.cpp
 ./exercicio3
*/
