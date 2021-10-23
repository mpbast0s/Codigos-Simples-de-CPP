/*
  SUPERMERCADO DO GRUPO
Escreva um programa que obtenha o valor da compra de supermercado de cada pessoa de um grupo de moradores de um condomínio.  O programa deve inicialmente solicitar a quantidade M de moradores.  Na sequência,  para cada morador, o programa deve solicitar a quantidade N de itens no carrinho (N > 0),  seguida de N pares de valores do teclado, indicando a quantidade e o valor unitário do item, respectivamente.  Para cada pessoa, o programa deve escrever o valor total da compra.

 Caso seja digitado um valor igual ou menor que zero para a quantidade de pessoas (M<=0) a mensagem Valor invalido deverá ser exibida e o programa termina.   Se a quantidade de itens no carrinho for menor ou igual a zero (N <= 0), o programa deverá exibir a mensagem Valor invalido e um novo valor de N deve ser lido.   Caso seja digitado um valor igual ou menor que zero para a quantidade ou valor de um item, o programa deverá exibir a mensagem Valor invalido e solicitar um novo par de valores.
*/
#include <iostream>
using namespace std;

float validarr (int valor){
  if(valor<1)
    {
    //cout << "Entrada Inválida!" << endl;
    return 0.5;
    /* 
      Por que (lembra que i é int):
      i = i - 0.5 - 0.5 → simplifica: i - 1;
      i = i - 0.5 - 0.0 → simplifica: i - 1;
      i = i - 0.0 - 0.5 → simplifica: i - 1;
    */
    }
    else { 
    return 0;
    }
}
void valor_invalido(){
  cout << "Valor invalido" << endl;
}

int main() {
  int M, N, quantidade = 0;
  float valor = 0, soma = 0, a, b;  
  cout << "Digite a quantidade de pessoas: ";
  cin >> M;
  
  if(validarr(M) == 0){
    for(int i = 1; i <= M; i++){
    cout << "Digite quantidade de itens no carrinho do morador " << i << ": "; 
    cin >> N;
    a = -validarr(N);
    i = i + a;

    if(a == 0){
      for(int j = 1; j <= N; j++){
        cout << "Digite quantidade e valor do item: ";
        cin >> quantidade >> valor;
        b = -validarr(quantidade) - validarr(valor);
        j = j + b;
        if(b == 0){
          soma = soma + valor * quantidade;
        } else {
          valor_invalido();
        }  
      }
      cout << "Valor total da compra do morador " << i << ": R$ " << soma << endl;
      soma = 0;
    } else {
        valor_invalido();
    }
    }
   } else {
    valor_invalido();
  }
  
}
/*
 para fazer isso rodar - no cmd: 
 clang++-7 -pthread -std=c++17 -o exercicio3 exercicios/exercicio3.cpp main.cpp
 ./exercicio3
*/
