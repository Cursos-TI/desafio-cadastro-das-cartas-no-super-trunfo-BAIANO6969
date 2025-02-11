#include <stdio.h>

int main(){
    int idade;
    int matricula;
    float altura;
    char nome[50];

    printf("digite sua idade: \n");
    scanf("%d", &idade);

    printf("digite sua altura: \n");
    scanf("%f", &altura);

    printf("digite o seu nome: \n");
    scanf("%s", &nome);

    printf("digite sua matricula: \n");
    scanf("%d", &matricula);

    printf("nome do aluno: %s\n", nome);
    printf("numero da matruicula: %d\n", matricula);
    printf("idade do aluno: %d\n", idade);
    printf("altura do aluno: %.2f\n", altura);


return 0;

}