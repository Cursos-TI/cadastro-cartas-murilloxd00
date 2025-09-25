#include <stdio.h>

int main() {
    // Carta 1 - Brasil
    char nome1[] = "Brasil";
    int populacao1 = 214000000;
    float area1 = 8515767.0;
    float pib1 = 22000.0;
    int pontos1 = 30;
    float densidade1 = populacao1 / area1;
    float pibpercapita1 = pib1 / populacao1;

    // Carta 2 - Uruguai
    char nome2[] = "Uruguai";
    int populacao2 = 3500000;
    float area2 = 176215.0;
    float pib2 = 65.0;
    int pontos2 = 15;
    float densidade2 = populacao2 / area2;
    float pibpercapita2 = pib2 / populacao2;

    int opcao1, opcao2;
    float valor1_carta1, valor1_carta2;
    float valor2_carta1, valor2_carta2;

    printf("Escolha o primeiro atributo:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("6 - PIB per Capita\n");
    scanf("%d", &opcao1);

    switch(opcao1) {
        case 1: valor1_carta1 = populacao1; valor1_carta2 = populacao2; break;
        case 2: valor1_carta1 = area1; valor1_carta2 = area2; break;
        case 3: valor1_carta1 = pib1; valor1_carta2 = pib2; break;
        case 4: valor1_carta1 = pontos1; valor1_carta2 = pontos2; break;
        case 5: valor1_carta1 = densidade1; valor1_carta2 = densidade2; break;
        case 6: valor1_carta1 = pibpercapita1; valor1_carta2 = pibpercapita2; break;
        default: printf("Opcao invalida!\n"); return 0;
    }

    printf("\nEscolha o segundo atributo:\n");
    if(opcao1 != 1) printf("1 - Populacao\n");
    if(opcao1 != 2) printf("2 - Area\n");
    if(opcao1 != 3) printf("3 - PIB\n");
    if(opcao1 != 4) printf("4 - Pontos Turisticos\n");
    if(opcao1 != 5) printf("5 - Densidade Demografica\n");
    if(opcao1 != 6) printf("6 - PIB per Capita\n");
    scanf("%d", &opcao2);

    switch(opcao2) {
        case 1: valor2_carta1 = populacao1; valor2_carta2 = populacao2; break;
        case 2: valor2_carta1 = area1; valor2_carta2 = area2; break;
        case 3: valor2_carta1 = pib1; valor2_carta2 = pib2; break;
        case 4: valor2_carta1 = pontos1; valor2_carta2 = pontos2; break;
        case 5: valor2_carta1 = densidade1; valor2_carta2 = densidade2; break;
        case 6: valor2_carta1 = pibpercapita1; valor2_carta2 = pibpercapita2; break;
        default: printf("Opcao invalida!\n"); return 0;
    }

    // Regra da densidade: vence o menor valor
    float pontos_carta1 = 0, pontos_carta2 = 0;

    if(opcao1 == 5) {
        if(valor1_carta1 < valor1_carta2) pontos_carta1++;
        else if(valor1_carta2 < valor1_carta1) pontos_carta2++;
    } else {
        if(valor1_carta1 > valor1_carta2) pontos_carta1++;
        else if(valor1_carta2 > valor1_carta1) pontos_carta2++;
    }

    if(opcao2 == 5) {
        if(valor2_carta1 < valor2_carta2) pontos_carta1++;
        else if(valor2_carta2 < valor2_carta1) pontos_carta2++;
    } else {
        if(valor2_carta1 > valor2_carta2) pontos_carta1++;
        else if(valor2_carta2 > valor2_carta1) pontos_carta2++;
    }

    float soma1 = valor1_carta1 + valor2_carta1;
    float soma2 = valor1_carta2 + valor2_carta2;

    printf("\nComparacao entre %s e %s\n", nome1, nome2);
    printf("Soma dos atributos %s: %.2f\n", nome1, soma1);
    printf("Soma dos atributos %s: %.2f\n", nome2, soma2);

    if(soma1 > soma2) {
        printf("\nVencedor: %s\n", nome1);
    } else if(soma2 > soma1) {
        printf("\nVencedor: %s\n", nome2);
    } else {
        printf("\nEmpate!\n");
    }

    return 0;
}
