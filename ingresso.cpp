/* 
  INGRESSO
Escreva um programa em C++ que imprime o preço de um ingresso para um parque de diversões. O programa deve ler,a partir do teclado, um número real representando o valor base do ingresso e um número inteiro representando a idade do usuário.

O valor do ingresso deve ser calculado de acordo com as seguintes condições:

Menores de 5 anos não pagam;
Crianças entre 5 e 12 anos pagam meia-entrada;
Adolescentes entre 13 e 17 anos têm 20% de desconto;
Adultos entre 18 e 70 anos pagam o valor-base;
Maiores de 70 anos não pagam;
*/

#include <iostream>

using namespace std;

int exercicio1 ()
{
float ingresso_base, ingresso;
int idade;
cout << "Digite o valor-base do ingresso: ";
cin >> ingresso_base;
cout << "Digite a idade do usuario: ";
cin >> idade;
if (idade < 5 || idade > 70 )
  ingresso = 0;
else if(idade < 13)
  ingresso = ingresso_base*0.5;
else if(idade < 18)
  ingresso = ingresso_base*0.8;
else
  ingresso = ingresso_base;
cout << "Valor final do ingresso: " << ingresso << " reais" << endl;
return  0;
}

/*
 para fazer isso rodar - no cmd: 
 clang++-7 -pthread -std=c++17 -o exercicio1 exercicios/exercicio1.cpp main.cpp
 ./exercicio1
*/
