/*
  CONSUMO DE ENERGIA:
Deseja-se calcular a média de aumento e de queda de consumo de energia em um bairro da cidade. Para isto, deve ser feito um programa que leia um valor inteiro N de residências neste bairro. Em seguida, o programa deve ler pares de valores reais representando o consumo (em kW) de energia de uma residência no mês corrente e o consumo no mês anterior. Ao final, o programa deve imprimir a média de aumento de consumo de energia no bairro (apenas se houve casos de aumento) e a média de queda de consumo (apenas se houve casos de queda). Em cada situação, deve ser mostrado a quantidade de residências (vide exemplos). Caso não tenha havido nem aumento nem queda de consumo em qualquer residência, deve ser mostrada a mensagem Consumo no bairro estavel. (OBS: com o ponto final inclusive no VPL)

Caso seja digitado um valor nulo ou negativo para N, o programa deve terminar sem executar cálculos exibindo a mensagem Valor invalido.

Caso seja digitado um valor negativo para um consumo de energia, o programa deverá exibir a mensagem Valor invalido, e deverá solicitar um novo par de valores.
*/

#include <iostream>

using namespace std;

float validarr (int valor){
  if(valor<1)
    {
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
  int N = 0, maior = 0, menor = 0;
  float soma_aumento, soma_diminuicao, valor1, valor2;
  cout << "N: ";
  cin >> N;
  float b = validarr(N);
  if(b != 0)
    cout << "Valor invalido" << endl;
  int i = 1;
  while(i <= N){
    cout << "Consumo casa " << i << " (kW): ";
    cin >> valor1 >> valor2;
    float a = - validarr (valor1) - validarr (valor2);
    i = i + a;
    if (a == 0){
      if (valor1 > valor2)
      {
        soma_aumento = soma_aumento + valor1 - valor2;
        maior++;
      }
      if (valor2 > valor1)
      {
        soma_diminuicao = soma_diminuicao + valor2 - valor1;
        menor++;
      }
    }else {
      cout << "Valor invalido" << endl;
    }
    i++;
  }

  if(maior > 0){
    cout << "Media de aumento de consumo (" << maior << " casas): " << soma_aumento/maior << " kW" << endl;
  }
  if (menor > 0){
    cout << "Media de queda de consumo (" << menor << " casas): " << soma_diminuicao/menor << " kW" << endl;
  }
  if (N>0 && maior == 0 && menor == 0){
    cout << "Consumo no bairro estavel." << endl;
  }

  return 0;
}

/* 
OUTRA VERSÃO:
  - -------
  #include <iostream>
using namespace std;

float validarr (int valor){
  if(valor<1)
    {
    cout << "Entrada Inválida!" << endl;
    return 0.5;
    / 
      //Por que (lembra que i é int):
      //i = i - 0.5 - 0.5 → simplifica: i - 1;
      //I = i - 0.5 - 0.0 → simplifica: i - 1;
      //i = i - 0.0 - 0.5 → simplifica: i - 1;
    
    }
    else { 
    return 0;
    }
}

int exercicio3() 
{
  int N = 0, maior = 0, menor = 0;
  float soma_aumento, soma_diminuicao, valor1, valor2;
  cout << "N: ";
  cin >> N;
  validarr(N);

  for(int i = 1; i <= N; i++){
    cout << "Consumo casa " << i << " (kW):";
    cin >> valor1 >> valor2;
    float a = - validarr (valor1) - validarr (valor2);
    i = i + a;
    if (a == 0){
      if (valor1 > valor2)
      {
        soma_aumento = soma_aumento + valor1 - valor2;
        maior++;
      }
      if (valor2 > valor1)
      {
        soma_diminuicao = soma_diminuicao + valor2 - valor1;
        menor++;
      }
    }
  }

  if(maior > 0){
    cout << "Média de aumento de consumo (" << maior << " casas): " << soma_aumento/maior << " kW" << endl;
  }
  if (menor > 0){
    cout << "Média de queda de consumo (" << menor << " casas): " << soma_diminuicao/menor << " kW" << endl;
  }
  if (N>0 && maior == 0 && menor == 0){
    cout << "Consumo no bairo estável" << endl;
  }

  return 0;
}
*/
