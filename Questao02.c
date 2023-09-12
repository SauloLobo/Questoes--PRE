#include <stdio.h>

int main() {

int hora, minutos, hora_min, hora_sec;
  
  printf("Digite a hora no formato hora:minutos.\n");
   scanf("%d:%d", &hora, &minutos);
  
  while (hora > 23 || hora < 0 || minutos > 59 || minutos < 0){
      printf("O valor da hora é inválido, digite novamente.\n");
      scanf("%d:%d", &hora, &minutos);
    }
  
hora_min = (hora * 60) + minutos;
hora_sec = (hora_min * 60); 

printf("O valor da hora digitada equivale a %d minutos e %d segundos\n", hora_min, hora_sec);
  
  return 0;
}