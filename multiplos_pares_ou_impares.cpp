/*
  MÚLTIPLOS: PARES OU ÍMPARES
Escreva um programa que leia dois valores inteiros N  e M,ambos maiores que zero.  Seu programa deve calcular e escrever: 1) a quantidade e a soma dos inteiros no intervalo [1,N] que são ao mesmo tempo pares e múltiplos de M; 2) a quantidade e a soma dos inteiros no intervalo [1,N] que são ao mesmo tempo ímpares e múltiplos de M.

No Exemplo 1 abaixo, o valor de N é 12 e o valor de M é 3.  No intervalo [1, 12] existem:
  → 2 pares e múltiplos de 3 que são:  6 e 12.  Portanto, a soma é 18;
  → 2 ímpares e múltiplos de 3 que são: 3 e 9. Portanto, a soma é 12.

Caso seja digitado um valor nulo ou negativo para N ou M, o programa deve terminar sem executar cálculos exibindo a mensagem Valor invalido.
*/

#include <iostream>
using namespace std;

float validar (float valor){
  if(valor<1)
    {
    cout << "Valor invalido" << endl;
    return 0.5;
    }
    else { 
    return 0;
    }
}

int main() 
{
  int n_final, n_divisor, n_dividendo, par_soma = 0, par = 0, impar_soma = 0, impar = 0;
  float a;
  cout << "Entre com o valor final do intervalo: ";
  cin >> n_final;
  a = validar(n_final);

  if(a == 0){
    cout << "Entre com o valor do divisor: ";
    cin >> n_divisor;
    a = validar(n_divisor);

    if(a == 0){
      n_dividendo = n_final/n_divisor;
      int i = 1;
      while (i <= n_dividendo){
        if(i%2==1){
          impar++;
          impar_soma = impar_soma + i*n_divisor;
        }else{
          par++;
          par_soma = par_soma + i*n_divisor;
        }
        i++;
      }
      cout <<"\nPares positivos e multiplos de " << n_divisor << " menores ou iguais a "<< n_final << ": \nquantidade=" << par << " soma=" << par_soma << "\nImpares positivos e multiplos de " << n_divisor << " menores ou iguais a "<< n_final << ":\nquantidade=" << impar << " soma=" << impar_soma << endl;
    }

  }
  return 0; 
}


/*
OUTRA VERSÃO:

#include <iostream>
using namespace std;

float validar (float valor){
  if(valor<1)
    {
    cout << "Entrada Inválida!" << endl;
    return 0.5;
    }
    else { 
    return 0;
    }
}

int main() 
{
  int n_final, n_divisor, n_dividendo, par_soma = 0, par = 0, impar_soma = 0, impar = 0;
  float a;
  cout << "Entre com o valor final do intervalo: ";
  cin >> n_final;
  a = validar(n_final);

  if(a == 0){
    cout << "Entre com o valor do divisor: ";
    cin >> n_divisor;
    a = validar(n_divisor);

    if(a == 0){
      n_dividendo = n_final/n_divisor;
      for(int i = 1; i <= n_dividendo; i++){
        if(i%2==1){
          impar++;
          impar_soma = impar_soma + i*n_divisor;
        }else{
          par++;
          par_soma = par_soma + i*n_divisor;
        }
      }
      cout <<"\nPares positivos e múltiplos de " << n_divisor << " menores ou iguais a "<< n_final << ": \n   Quantidade = " << par << "  \n   Soma = " << par_soma << " \n ----- " << endl;

      cout <<"\nÍmpares positivos e múltiplos de " << n_divisor << " menores ou iguais a "<< n_final << ": \n   Quantidade = " << impar << " \n   Soma = " << impar_soma << " \n ----- " << endl;
    }

  }
  return 0; 
}
*/
