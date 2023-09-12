#include <stdio.h>

int idade, i , peso, soma_idade = 0, pessoas_PA = 0, pessoas_altas = 0,pessoas_jovens = 0;
float altura, media_idade = 0,grupo_3;

int main() {

  for (i = 1; i <= 2; i++) {
    printf("Digite a idade da pessoa %d\n", i);
    scanf("%d", &idade);
    printf("Digite o peso em Kg da pessoa %d\n", i);
    scanf("%d", &peso);
    printf("Digite a altura, em metros, da pessoa %d\n", i);
    scanf("%f", &altura);
    printf("-------------------------------------------\n");
    soma_idade = soma_idade + idade;
    if (peso > 80 && altura < 1.50) {
      pessoas_PA++;
    } // fecha o if
    if (altura > 1.90) {
      pessoas_altas++;
    } // fecha o if
    if (idade >= 10 && idade <= 30) {
      pessoas_jovens++;
    }
  } //fechando o for

  media_idade = soma_idade / 2;
  grupo_3 = (pessoas_jovens / pessoas_altas) * 100.0;

  printf("1 - A média das idades das dez pessoas é: %.2f\n", media_idade);
  printf("2 - A quantidade de pessoas com peso superior a 80Kg e altura inferior a 1,50 metro é: %d\n", pessoas_PA);
  printf("3 - A porcentagem de pessoas com idade entre 10 e 30 anos entre as pessoas que medem mais de 1,90m é : %.f%%\n", grupo_3);
  return 0;
}