#include <stdio.h>

int main(){
    
    int idade = 0;
    float altura = 0;
    char opçao;
    char nome;

    
    //sintaxe scanf 
    //scanf(“formato1” “ formato2, &variavel1, variavel2, ...”);
    printf("entre com sua idade\n");
    
    

    scanf("%d", &idade);
    printf("idade: %d\n", idade);
    printf("entre com a altura\n");
    scanf("%f", &altura);
    printf("entre com a opção\n");
    scanf(" %c", &opçao);
    printf("%c", opçao);

    return 0;

}