#include <stdio.h>

int main(){

    int carta;

     printf("digite um numero de 1 a 8:\n");
     
     printf("digite sua carta:\n");
     scanf("%d", &carta);

     switch(carta){
        case 1:
        printf("estado:A\n");
        printf("codigo:A1\n");
        printf("nome da cidade: são paulo\n");
        printf("Área: 1521.11 km²\n");
        printf("população: 12.325,000\n");
        printf("PIB:699.28 bilhões de reais\n");
        printf("numero de pontos turisticos: 50\n");
        break;

        case 2:
        printf("estado:B\n");
        printf("codigo:B2\n");
        printf("nome da cidade: rio de janeiro\n");
        printf("Àrea: 1200.25 km²\n");
        printf("população: 6.748,000\n");
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
        
        case 5:
        printf("estado:E\n");
        printf("codigo:E5\n");
        printf("nome da cidade: curitiba\n");
        printf("Àrea: 432 km²\n");
        printf("população: 1,900.000\n");
        printf("PIB: 120 bilhões de reais\n");
        printf("numero de pontos turisticos: 20");
        break;

        case 6:
        printf("estado:F\n");
        printf("codigo:F6\n");
        printf("nome da cidade: Fortaleza\n");
        printf("Àrea: 313 km\n²");
        printf("população: 2,700.000\n");
        printf("PIB: 90 bilhões de reais\n");
        printf("numero de pontos turisticos: 30\n");
        break;

        case 7:
        printf("estado:G\n");
        printf("codigo:G7\n");
        printf("nome da cidade:Recife\n");
        printf("Àrea: 218 km²\n");
        printf("população: 1,600.000\n");
        printf("PIB: 80 bilhões de reais\n");
        printf("numero de pontos turisticos: 25\n");
        break;

        case 8:
        printf("estado:H\n");
        printf("codigo:h8\n");
        printf("nome da cidade:porto alegre\n");
        printf("Àrea: 496 km²\n");
        printf("população: 1,500.000\n");
        printf("PIB: 100 bilhões\n");
        printf("numero de pontos turisticos: 25\n");
        break;

        default:
        break;
        
    
    }

}
