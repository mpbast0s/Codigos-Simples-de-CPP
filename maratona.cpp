/* 
  MARATONA
Escreva um programa em C++ que obtenha o tempo recorde atual da maratona em horas, minutos e segundos.  Se a entrada for inválida (ou seja, quantidade de horas negativa, quantidade de minutos negativa ou maior que 59, ou segundos negativos ou maiores que 59) o programa deve escrever "Entrada invalida" e finalizar o programa.   Caso contrário, o programa deve escrever o tempo recorde em segundos.

Em seguida, seu programa deve ler o tempo em segundos que um determinado corredor levou para completar a maratona.  Se o valor for menor ou igual a zero o programa deve finalizar escrevendo "Entrada invalida".  Caso contrário, o programa deve escrever o resultado do corredor: se ele bateu o recorde e em quanto segundos, se ele fez o mesmo tempo que o recorde ou se o tempo foi superior ao recorde e em quantos segundos.  Veja as mensagens que o programa deve escrever nos exemplos abaixo.
*/

#include <iostream>
using namespace std;
int exercicio2 ()
{
int horas_r, minutos_r, segundos_r, recorde, tempo_s, diferenca;

cout << "Entre com o tempo recorde da maratona (hora min seg): ";
cin >> horas_r >> minutos_r >> segundos_r;

//cout << "horas: " << horas << " || minutos: " << minutos << " || segundos: " << segundos <<endl;
if(minutos_r>=60 || segundos_r >= 60)
{
  cout << "Entrada inválida" << endl;
}
else{
  recorde = horas_r*60*60 + minutos_r*60 + segundos_r;
  cout << "Tempo recorde em segundos = " << recorde << endl;

  cout << "Entre com o seu tempo em segundos: ";
  cin >> tempo_s;
  if(tempo_s == 0){
    cout << "Entrada inválida" << endl;
  }
  else{
    diferenca = recorde - tempo_s;
    if (diferenca == 0)
      cout << "Tempo igual ao recorde atual" << endl;
    else if(diferenca < 0)
      cout << "Tempo superior ao recorde em " << -diferenca << " segundos" << endl;
    else
      cout << "Bateu o recorde em " << diferenca << " segundos" << endl;
  }
}
return 0;
}

/*
 para fazer isso rodar - no cmd: 
 clang++-7 -pthread -std=c++17 -o exercicio2 exercicios/exercicio2.cpp main.cpp
 ./exercicio2
*/
