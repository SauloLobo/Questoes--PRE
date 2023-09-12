#include <stdio.h>
#include <math.h>

int main() {

int num, quad, cubo;
float raiz_quad, raiz_cub, resto_div;
  
printf("Digite um número positivo maior que 0.\n");
scanf("%d", &num);

  if (num <= 0) {
    while (num <= 0) {
     printf("Número não está correto, tente novamente.\n");
    scanf("%d", &num); 
    }
  }
quad = num * num;
cubo = num * num * num;
raiz_quad = pow(num,1.0 / 2.0);
raiz_cub = pow(num,1.0 / 3.0);
resto_div = num % 3;

printf("O número ao quadrado é: %d\n", quad);
printf("O número ao cubo é: %d\n", cubo);
printf("A raiz quadrada do número é: %.2lf\n", raiz_quad);
printf("A raiz cúbica do número é: %.2lf\n", raiz_cub);
printf("O resto da divisão por 3 é: %.2lf\n", resto_div);
  
  return 0;
}