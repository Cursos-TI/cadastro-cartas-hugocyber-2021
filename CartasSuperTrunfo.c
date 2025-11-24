#include <stdio.h>

typedef struct {
    char estado;
    char codigo[20];
    char cidade[21];
    int populacao;
    float area;
    float pib;
    int pontos;
    float densidade;
    float pibcapita;
    float media1;
    float media2;
    float media11;
    float media22;
    
    
} Carta;

int main(){
    Carta carta1, carta2;
 
    printf("Seja bem vindo! Digite sua carta 01! \n");
   
    printf("Digite a letra de um estado de A-H:");
    scanf("%c", &carta1.estado);

    printf("Digite o código da carta(A01)\n");
    scanf("%s", &carta1.codigo);

    printf("Digite o nome da cidade:");
    scanf("%s", &carta1.cidade);
    
    printf("Digite a população da cidade:\n");
    scanf(" %d", &carta1.populacao);

    printf("Digite a area da cidade:\n");
    scanf(" %f", &carta1.area);

    printf("Digite o pib da cidade:\n");
    scanf(" %f", &carta1.pib);

    printf("Digite quantos pontos turisticos você visitou:\n");
    scanf("%d", &carta1.pontos);

    printf("Digite a densidade populacional:\n");
    scanf("%f", &carta1.densidade);

    printf("Digite o pib per capita da cidade:\n");
    scanf("%f", &carta1.pibcapita);

    carta1.media1 = (carta1.populacao) / (carta1.area);
    carta1.media11 = (carta1.pib) / (carta1.populacao);
    

    

    //inicio da carta 02

    printf("\n---Perfeito, agora vamos fazer sua segunda carta!---\n");

    printf("Digite a letra de um estado de A-H:\n");
    scanf(" %c", &carta2.estado);

    printf("Digite o código da carta(A02)\n");
    scanf("%s", &carta2.codigo);

    printf("Digite o nome da cidade:");
    scanf("%s", &carta2.cidade);
    
    printf("Digite a população da cidade:\n");
    scanf(" %d", &carta2.populacao);

    printf("Digite a area da cidade:\n");
    scanf(" %f", &carta2.area);

    printf("Digite o pib da cidade:\n");
    scanf(" %f", &carta2.pib);

    printf("Digite quantos pontos turisticos você visitou:\n");
    scanf(" %d", &carta2.pontos);

    printf("Digite a densidade populacional:\n");
    scanf(" %f", &carta2.densidade);

    printf("Digite o pib per capita da cidade:\n");
    scanf(" %f", &carta2.pibcapita);

    carta2.media2 = (carta2.populacao) / (carta2.area);
    carta2.media22 = (carta2.pib) / (carta2.populacao);

    //Resultado das duas cartas
    
    printf("\n---Dados das duas cartas---\n");

    printf("---Carta01---\n");
    printf("Estados:%c\n", carta1.estado);
    printf("Codigo da carta:%s\n", carta1.codigo);
    printf("Nome da cidade:%s\n", carta1.cidade);
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area da cidade:%.2f\n", carta1.area);
    printf("Pib da cidade:%.2f\n", carta1.pib);
    printf("Pontos turisticos visitados:%d\n", carta1.pontos);
    printf("Densidade Populacional:%.2f\n", carta1.media1);
    printf("Pib per capita:%.2f\n", carta1.media11);

    printf("---Carta02---\n");
    printf("Estados:%c\n", carta2.estado);
    printf("Codigo da carta:%s\n", carta2.codigo);
    printf("Nome da cidade:%s\n", carta2.cidade);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area da cidade:%.2f\n", carta2.area);
    printf("Pib da cidade:%.2f\n", carta2.pib);
    printf("Pontos turisticos visitados:%d\n", carta2.pontos);
    printf("Densidade Populacional:%.2f\n", carta2.media2);
    printf("Pib per capita:%.2f\n", carta2.media22);



}