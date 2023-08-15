#include<stdio.h>

main(){
 
 //declaração de variáveis
 int numero1 = 0;
 double numero2;
 float numero3;

 printf("Digite o numero 2 \n");
 scanf("%lf", &numero2);

 printf("Digite o numero 3 \n");
 scanf("%lf", &numero3);

//mostrar os valores das variáveis
printf("\nO numero 1: %d", numero1);
printf("\nO numero 2: %lf", numero2);
printf("\nO numero 3: %f", numero3);

}