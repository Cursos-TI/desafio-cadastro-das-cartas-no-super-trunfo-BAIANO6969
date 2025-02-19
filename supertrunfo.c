#include <stdio.h>

int main(){

    int carta;

     printf("digite um numero de 1 a 4:\n");
     
     printf("digite sua carta:\n");
     scanf("%d", &carta);

     switch(carta){
        case 1:
        printf("estado:A\n");
        printf("codigo:A1\n");
        printf("nome da cidade: são paulo\n");
        printf("Área: 1521.11 km²\n");
        printf("população: 12325000\n");
        printf("PIB:699.28 bilhões de reais\n");
        printf("numero de pontos turisticos: 50\n");
        break;

        case 2:
        printf("estado:B\n");
        printf("codigo:B2\n");
        printf("nome da cidade: rio de janeiro\n");
        printf("Àrea: 1200.25 km²\n");
        printf("população: 6748000\n");
        printf("PIB:300.50 bilhões de reais\n");
        printf("numero de pontos turisticos: 30\n");
        break;

        case 3:
        printf("estado:C\n");
        printf("codigo:C3\n");
        printf("nome da cidade: salvador\n");
        printf("Àrea: 693,44 km²\n");
        printf("população: 2.568.928\n");
        printf("PIB: 62.954 bilhões de reais\n");
        printf("numero de pontos turisticos: 25\n");
        break;

        case 4:
        printf("estado:D\n");
        printf("codigo:D4\n");
        printf("nome da cidade: Natal\n");
        printf("Àrea: 167,3 km²\n");
        printf("população: 785.368\n");
        printf("PIB: 26.972 milhões de reais\n");
        printf("numero de pontos turisticos: 15\n");
        break;

        default:
        break;
        
    
    }

}
