/*
  CORRIDA
Escreva um programa que calcula qual foi o participante mais rápido de um treino de corrida composta por 3 voltas. O tempo total do treino de corrida é a soma do tempo de cada uma das voltas. 

O programa deve ler do teclado um valor inteiro N maior que 0 (zero), representando o identificador do corredor na corrida. Em seguida, o programa deve solicitar uma sequência de 3 valores reais, representando os tempos de cada volta do corredor. Este processo se repete até que o usuário insira o valor 0 para o identificador do corredor.

O programa deve calcular o tempo total obtido por cada corredor e exibir na tela qual foi o participante mais rápido e qual foi o tempo total obtido por ele.
*/

#include <iostream>
using namespace std;

int main() {
  float tempo_menor = 0, tempo1, tempo2, tempo3, tempo_soma;
  int corredor = -1;
  int corredor_menor = 0;

  while(corredor != 0){
    cout << "Insira o identificador do corredor: ";
    cin >> corredor;
    if(corredor < 0){
      tempo_menor = -2;
      corredor = 0;
    }
    if(corredor > 0){
      cout << "Insira os tempos das 3 voltas do corredor " << corredor << ": ";
      cin >> tempo1 >> tempo2 >> tempo3;
      tempo_soma = tempo1 + tempo2 + tempo3;

      if(tempo_menor == 0 || tempo_menor > tempo_soma){
        tempo_menor = tempo_soma;
        corredor_menor = corredor;
      }
    }
  }
  if(tempo_menor > 0){
    cout << "Corredor com menor tempo: " << corredor_menor << "\nTempo total da corrida: " << tempo_menor << endl;
  }else if(corredor_menor == 0 && tempo_menor == 0) {
    cout << "Nao teve corrida" << endl;
  } else {
    cout << "Valor invalido" << endl;
  }
  
return 0;
}
