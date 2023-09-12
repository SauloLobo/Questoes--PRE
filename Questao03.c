#include <stdio.h>
#include <stdlib.h>

int num1,num2,num3,opcao,menor,meio,maior;
int main() {

  printf("Digite três numero inteiros positivos (a,b,c)\n");
  scanf("%d,%d,%d", &num1,&num2,&num3);
  while (num1 < 0 || num2 < 0 || num3 < 0) {
    printf("Números inválidos, tente novamente.\n");
    scanf("%d,%d,%d", &num1, &num2, &num3);
  }
  
  printf("ESCOLHA UMA DAS SEGUINTE OPÇÕES\n");
  printf("1 -  Mostre os números em ordem crescente\n");
  printf("2 -  Mostre os números em ordem decrescente\n");
  printf("3 - Mostre o menor número entre os demais.\n");
  scanf("%d", &opcao);

  if (opcao == 1) {
    if (num1>num2 && num1>num3){
       maior = num1; 
      
       if (num2 > num3){
        meio = num2;
        menor = num3;
       } else {
        meio = num3;
        menor = num2;
       }
    
    printf("A ordem crecente é: %d,%d,%d\n", menor, meio, maior);  
    }
    if (num2>num1 && num2>num3){
       maior = num2; 
      
       if (num1 > num3){
        meio = num1;
        menor = num3;
       } else {
        meio = num3;
        menor = num1;
       } 
    printf("A ordem crecente é: %d,%d,%d\n", menor, meio, maior);  
    }
    if (num3>num1 && num3>num2){
       maior = num3; 
      
       if (num2 > num1){
        meio = num2;
        menor = num1;
       } else {
        meio = num1;
        menor = num2;
       } 
    printf("A ordem crecente é: %d,%d,%d\n", menor, meio, maior);  
    }
  }
  if (opcao == 2) {
     if (num1>num2 && num1>num3){
       maior = num1; 
      
       if (num2 > num3){
        meio = num2;
        menor = num3;
       } else {
        meio = num3;
        menor = num2;
       }
    
    printf("A ordem decrecente é: %d,%d,%d\n", menor, meio, maior);  
    }
    if (num2>num1 && num2>num3){
       maior = num2; 
      
       if (num1 > num3){
        meio = num1;
        menor = num3;
       } else {
        meio = num3;
        menor = num1;
       } 
    printf("A ordem decrecente é: %d,%d,%d\n", menor, meio, maior);  
    }
    if (num3>num1 && num3>num2){
       maior = num3; 
      
       if (num2 > num1){
        meio = num2;
        menor = num1;
       } else {
        meio = num1;
        menor = num2;
       } 
    printf("A ordem decrecente é: %d,%d,%d\n", maior, meio, menor);  
    }  
  }
  if (opcao == 3) {
    if (num1>num2 && num1>num3){
       maior = num1; 
      
       if (num2 > num3){
        meio = num2;
        menor = num3;
       } else {
        meio = num3;
        menor = num2;
       }
    
    printf("O menor está entre os demais: %d,%d,%d\n", meio, menor, maior);  
    }
    if (num2>num1 && num2>num3){
       maior = num2; 
      
       if (num1 > num3){
        meio = num1;
        menor = num3;
       } else {
        meio = num3;
        menor = num1;
       } 
    printf("O menor está entre os demais: %d,%d,%d\n", meio, menor, maior);  
    }
    if (num3>num1 && num3>num2){
       maior = num3; 
      
       if (num2 > num1){
        meio = num2;
        menor = num1;
       } else {
        meio = num1;
        menor = num2;
       } 
    printf("O menor está entre os demais: %d,%d,%d\n", meio, menor, maior);  
    }
  } 
  return 0;
}