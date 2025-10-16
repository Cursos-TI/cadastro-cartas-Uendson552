#include <stdio.h>

// Função para calcular a densidade populacional //

float calcularDensidadePopulacional(int populacao, float area) {
    return (float) populacao / area;
}

// Função para calcular o PIB per capita (em mil reais) //

float calcularPIBpercapita(float pib, int populacao) {
    return ((pib * 1000000000) / populacao) / 1000;

}

int main () {

    // Declaração de variaveis das cartas 1 //

    char Estado1[100];
    char Codigodacarta1[100];
    char Nomedacidade1[150];
    int População1;
    float Area1;
    float PIB1;
    int PontosTuristicos1;

// Entrada de dados das Cartas 1 //

printf("Digite o Estado da carta 1: \n");
scanf(" %s", Estado1);

printf("Digite o Código da Carta 1: \n");
scanf(" %s", Codigodacarta1);

printf("Digite o Nome da Cidade da carta 1: \n");
scanf(" %[^\n]", Nomedacidade1);

printf("Digite a População da carta 1: \n");
scanf("%d", &População1);

printf("Digite a Área da carta 1: \n");
scanf("%f", &Area1);

printf("Digite o PIB da carta 1: \n");
scanf("%f", &PIB1);

printf("Digite os Pontos Turisticos da carta 1: \n");
scanf("%d", &PontosTuristicos1);

// Exibição das Cartas 1 //

printf("\n===== DADOS DA CARTA 1 =====\n");
printf("Estado: %s\n", Estado1);
printf("Código da carta: %s\n", Codigodacarta1);
printf("Cidade: %s\n", Nomedacidade1);
printf("População: %d\n", População1);
printf("Área: %.2f km²\n", Area1);
printf("PIB: %.2f bilhões\n", PIB1);
printf("Pontos turísticos: %d\n", PontosTuristicos1);
printf("Densidade Populacional: %.2f hab/km²\n", (float)População1 / Area1);
printf("PIB per capita: %.2f mil\n", (PIB1 * 1000000000) / População1);
printf("=============================\n");

// Declaração das variaveis da carta 2 //

char Estado2[200];
char Codigodacarta2[200];
char Nomedacidade2[300];
int População2;
float Area2;
float PIB2;
int PontosTuristicos2;

// Entrada de dados das Cartas 2 //

printf("Digite o Estado da carta 2: \n");
scanf(" %s", Estado2);

printf("Digite o Código da Carta 2: \n");
scanf(" %s", Codigodacarta2);

printf("Digite o Nome da Cidade da carta 2: \n");
scanf(" %[^\n]", Nomedacidade2);

printf("Digite a População da carta 2: \n");
scanf("%d", &População2);

printf("Digite a Área da carta 2: \n");
scanf("%f", &Area2);

printf("Digite o PIB da carta 2: \n");
scanf("%f", &PIB2);

printf("Digite os Pontos Turisticos da carta 2: \n");
scanf("%d", &PontosTuristicos2);

// Exibição das Cartas 2 //

printf("\n===== DADOS DA CARTA 2 =====\n");
printf("Estado: %s\n", Estado2);
printf("Código da carta: %s\n", Codigodacarta2);
printf("Cidade: %s\n", Nomedacidade2);
printf("População: %d\n", População2);
printf("Área: %.2f km²\n", Area2);
printf("PIB: %.2f bilhões\n", PIB2);
printf("Pontos turísticos: %d\n", PontosTuristicos2);
printf("Densidade Populacional: %.2f hab/km²\n", (float)População2 / Area2);
printf("PIB per capita: %.2f mil\n", (PIB2 * 1000000000) / População2);
printf("=============================\n");

return 0;
}