#include <stdio.h>

int num, i, num_novo =1;

int main() {
  
printf("Digite um número inteiro e positivo. (Para sair digite 0)\n");
scanf("%d", &num);

while (num != 0) {
  if ( num < 0) {
    printf("Número digitado é inválido, tente novamente.\n");
    scanf("%d", &num);
  } else {
     for (i = 1; i <= num; i++) {
       num_novo = num_novo * i;
     }
     printf("O número digitado foi %d e o fatorial dele é %d\n", num, num_novo);
  }
  printf("Digite um número inteiro e positivo. (Para sair digite 0)\n");
  scanf("%d", &num);
  num_novo = 1;
}
printf("O programa foi encerrado");
  
  return 0;
}