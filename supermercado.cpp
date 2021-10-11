/*
  SUPERMERCADO
Escreva um programa que soma o valor total de uma compra em um supermercado. O programa deve solicitar inicialmente a quantidade N de itens no carrinho (N > 0). Em seguida, o programa deverá solicitar repetidamente pares de valores do teclado, indicando a quantidade e o valor unitário do item, respectivamente.

A cada par de valor lido, o programa deve somar na conta do cliente o produto quantidade * valor. Além disso, se a quantidade do item for maior ou igual a 5, um desconto de 20% deve ser aplicado ao item.

O programa também deverá exibir na tela, a cada item lido, o subtotal da compra.

Caso seja digitado um valor igual ou menor que zero para a quantidade de itens no carrinho (N <= 0), a mensagem Valor invalido deverá ser exibida e o programa termina. Caso seja digitado um valor igual ou menor que zero para quantidade ou valor, o programa deverá exibir a mensagem Valor invalido, e deverá solicitar um novo par de valores.

*/

#include <iostream>

using namespace std;

float validare (float valor){
  if(valor<1)
    {
    cout << "Valor invalido" << endl;
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

int main() 
{
  int itens, quantidade; 
  float valor, a, subtotal = 0;
  cout << "Digite quantidade de itens no carrinho: ";
  cin >> itens;
  validare(itens);
  int i = 1;
  while(i <= itens){
    cout << "Digite quantidade e valor do item: ";
    cin >> quantidade >> valor;
    a = - validare(quantidade) - validare(valor);
    i = i + a;
    
    if(a==0){
      if(quantidade>4){
        subtotal = subtotal + valor * quantidade*0.8;
      }else{
        subtotal = subtotal + valor * quantidade;
      }    
      cout << "Subtotal: R$ " << subtotal << endl;
    }
    
    i++;
  }
  if(itens > 0){
    cout << "Valor total da compra foi de: R$ " << subtotal << endl;
  }
  return 0; 
}

/* 
OUTRA VERSÃO:
#include <iostream>

using namespace std;

float validare (float valor){
  if(valor<1)
    {
    cout << "Entrada Inválida!" << endl;
    return 0.5;
    
      //Por que (lembra que i é int):
      //i = i - 0.5 - 0.5 → simplifica: i - 1;
      //i = i - 0.5 - 0.0 → simplifica: i - 1;
      //i = i - 0.0 - 0.5 → simplifica: i - 1;
    //
    }
    else { 
    return 0;
    }
}

int MAIN() 
{
  int itens, quantidade;
  float valor, a, subtotal = 0;
  cout << "Digite quantidade de itens no carrinho: ";
  cin >> itens;
  validare(itens);
  for(int i = 1; i <= itens; i++){
    cout << "Digite quantidade e valor do item: ";
    cin >> quantidade >> valor;
    a = - validare(quantidade) - validare(valor);
    i = i + a;
    if(a==0){
      subtotal = subtotal + valor * quantidade;      
      cout << "Subtotal: R$ " << subtotal << endl;
    }
  }
  if(itens > 0){
    cout << "Valor total da compra foi de: R$ " << subtotal << endl;
  }
  return 0; 
}
*/
