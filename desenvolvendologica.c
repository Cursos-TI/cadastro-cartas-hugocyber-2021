#include <stdio.h>

    typedef struct {
    char estado[20];
    char codigo[21];
    char cidade[22];
    int populacao;
    float area;
    float pib;
    int pontos;
    float densidade;
    float pibcapita;
    } Carta; 

    int main(){
        Carta carta1, carta2;

        printf("Bem vindo! Faça sua carta 01:\n");

        printf("Digite o nome do seu estado:\n");
        scanf(" %s", carta1.estado);

        printf("Digite o codigo da carta(A01):\n");
        scanf(" %s", carta1.codigo);

        printf("Digite o nome da cidade:\n");
        scanf(" %s", carta1.cidade);

        printf("Digite a populacao da cidade:\n");
        scanf(" %d",&carta1.populacao);

        printf("Digite a area da cidade:\n");
        scanf(" %f", &carta1.area);
        
        printf("Digite o pib da cidade:\n");
        scanf(" %f", &carta1.pib);

        printf("Digite o numero de pontos turisticos:\n");
        scanf(" %d", &carta1.pontos);

        printf("Perfeito, agora vamos fazer sua segunda carta!\n");
    
        carta1.densidade = carta1.populacao / carta1.area;
        carta1.pibcapita = carta1.pib / carta1.populacao;

        printf("\n--- Agora faça sua carta 02 ---\n");

        printf("Digite o nome do seu estado:\n");
        scanf(" %s", carta2.estado);

        printf("Digite o codigo da carta(A01):\n");
        scanf(" %s", carta2.codigo);

        printf("Digite o nome da cidade:\n");
        scanf(" %s", carta2.cidade);

        printf("Digite a populacao da cidade:\n");
        scanf(" %d",&carta2.populacao);

        printf("Digite a area da cidade:\n");
        scanf(" %f", &carta2.area);
        
        printf("Digite o pib da cidade:\n");
        scanf(" %f", &carta2.pib);

        printf("Digite o numero de pontos turisticos:\n");
        scanf(" %d", &carta2.pontos);
    
        carta2.densidade = carta2.populacao / carta2.area;
        carta2.pibcapita = carta2.pib / carta2.populacao;

        printf("\n---Comparação das duas cartas(Populacao)---\n");

        printf("Carta 1 (%s): %d\n", carta1.cidade, carta1.populacao);
        printf("Carta 2 (%s): %d\n", carta2.cidade, carta2.populacao);

        if (carta1.populacao > carta2.populacao) {
        printf("Resultado: Carta 1 venceu! População: %d\n", carta1.populacao);
        }
        else {
        printf("Resultado: Carta 2 venceu! População: %d\n", carta2.populacao);
        }
    
}