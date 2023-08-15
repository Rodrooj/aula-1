#include<stdio.h>
int main(){

    //declaração de vetores
    //chamadas em c de vetores de caracteres
    char nome[20] = "Ana da Silva";
    char endereco[50];
    char matricula[12];
    printf("\nNome: %s", nome);

    //recebendo os dados com scanf
    printf("\nDigite o endereco ");
    scanf("%[^\n]", endereco);
    fflush(stdin);
    printf("O endereco e: %s", endereco);

    //recebendo os dados com fgets
    printf("\nDigite a matricula ");
    fgets(matricula, 12, stdin);
    printf("\nA matricula e: %s", matricula);
    

    return 0;
}