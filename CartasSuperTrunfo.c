#include <stdio.h>

// Estrutura da carta
typedef struct {
    char estado;               // Letra de 'A' a 'H'
    char codigo[4];            // Código da carta (ex: A01, B03)
    char nomeCidade[50];       // Nome da cidade
    int populacao;             // População da cidade
    float area;                // Área em km²
    float pib;                 // PIB em bilhões
    int pontosTuristicos;      // Número de pontos turísticos
} Carta;

// Função para exibir os dados da carta
void exibirCarta(Carta carta, int numero) {
    printf("\n=== Carta %d ===\n", numero);
    printf("Estado: %c\n", carta.estado);
    printf("Código: %s\n", carta.codigo);
    printf("Nome da Cidade: %s\n", carta.nomeCidade);
    printf("População: %d\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: %.2f bilhões de reais\n", carta.pib);
    printf("Número de Pontos Turísticos: %d\n", carta.pontosTuristicos);
}

int main() {
    // Carta 1: São Paulo
    Carta carta1 = {
        'A',
        "A01",
        "São Paulo",
        12325000,
        1521.11,
        699.28,
        50
    };

    // Carta 2: Rio de Janeiro
    Carta carta2 = {
        'B',
        "B02",
        "Rio de Janeiro",
        6748000,
        1200.25,
        300.50,
        30
    };

    // Exibição das cartas
    exibirCarta(carta1, 1);
    exibirCarta(carta2, 2);

    return 0;