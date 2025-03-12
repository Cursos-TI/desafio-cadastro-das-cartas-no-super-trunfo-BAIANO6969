#include <stdio.h>

typedef struct {
    char estado;
    char codigo[4];
    char nome[50];
    long populacao;
    float area;
    float pib;
    int pontosTuristicos;
} Cidade;

int main() {
    Cidade carta1 = {'A', "A01", "São Paulo", 12325000, 1521.11, 699.28, 50};
    Cidade carta2 = {'B', "B02", "Rio de Janeiro", 6748000, 1200.25, 300.50, 30};

    printf("Carta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nome);
    printf("População: %ld\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Número de Pontos Turísticos: %d\n\n", carta1.pontosTuristicos);

    printf("Carta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nome);
    printf("População: %ld\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Número de Pontos Turísticos: %d\n", carta2.pontosTuristicos);

    return 0;
}
