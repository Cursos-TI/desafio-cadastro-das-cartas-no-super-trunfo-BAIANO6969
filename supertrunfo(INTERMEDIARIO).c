#include <stdio.h>

typedef struct {
    char estado[3];
    char codigo[4];
    char nomeCidade[50];
    long populacao;
    float area;
    float pib;
    int numPontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
} Cidade; // contém todos os atributos necessários para armazenar as informações de cada cidade.

void exibirCidade(Cidade cidade) { // é responsável por imprimir os dados de uma cidade formatados.
    printf("Estado: %s\n", cidade.estado);
    printf("Código: %s\n", cidade.codigo);
    printf("Nome da Cidade: %s\n", cidade.nomeCidade);
    printf("População: %ld\n", cidade.populacao);
    printf("Área: %.2f km²\n", cidade.area);
    printf("PIB: %.2f bilhões de reais\n", cidade.pib);
    printf("Número de Pontos Turísticos: %d\n", cidade.numPontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", cidade.densidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", cidade.pibPerCapita);
    printf("\n");
}

int main() { // criei duas instâncias da estrutura, uma para São Paulo e outra para o Rio de Janeiro
    Cidade carta1 = {"A", "A01", "São Paulo", 12325000, 1521.11, 699.28, 50, 8102.47, 56724.32};
    Cidade carta2 = {"B", "B02", "Rio de Janeiro", 6748000, 1200.25, 300.50, 30, 5622.24, 44532.91};

    printf("Informações das Cidades:\n\n");// Por fim, chamei a função exibirCidade para mostrar as informações de ambas as cidades.
    exibirCidade(carta1);
    exibirCidade(carta2);

    return 0;
}
