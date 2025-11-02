#include <stdio.h>

typedef struct {
 //utilizando o struct para separar as duas variações/cartas
    char estado;
    char codigo[21];
    char cidade[22];
    int habitantes;
    float area;
    float pib;
    int pontos;
} Carta;

int main(){
    Carta carta1, carta2;
    printf("Bem vindo, Digite sua carta 01! \n");

    printf("Digite a letra de um estado A-H:");
    scanf("%c", &carta1.estado);

    printf("Digite codigo de sua carta(A01):");
    scanf("%s", &carta1.codigo);

    printf("Digite o nome da cidade visitada:");
    scanf("%s", &carta1.cidade);
     
    printf("Digite os habitantes/populacao da cidade:");
    scanf("%d", &carta1.habitantes);

    printf("Digite o tamanho da area da cidade:\n");
    scanf("%f", &carta1.area);

    printf("Digite o pib da cidade:\n");
    scanf("%f", &carta1.pib);

    printf("Digite o numero de pontos turisticos da cidade:\n");
    scanf("%d", &carta1.pontos);

    printf("\n---Perfeito, agora crie sua carta02---\n\n");
    // Inicio da segunda carta
    
    printf("Digite a letra de um estado A-H:");
    scanf(" %c", &carta2.estado);

    printf("Digite codigo de sua carta(A02):");
    scanf("%s", &carta2.codigo);

    printf("Digite o nome da cidade visitada:");
    scanf(" %s", &carta2.cidade);
     
    printf("Digite os habitantes/populacao da cidade:");
    scanf("%d", &carta2.habitantes);

    printf("Digite o tamanho da area da cidade:\n");
    scanf("%f", &carta2.area);

    printf("Digite o pib da cidade:\n");
    scanf("%f", &carta2.pib);

    printf("Digite o numero de pontos turisticos da cidade:\n");
    scanf("%d", &carta2.pontos);

    //Resultado das informações das duas cartas
     printf("\n---Dados da carta 01----\n");

    printf("Estado:%c\n", carta1.estado);
    printf("Codigo da carta:%s\n", carta1.codigo);
    printf("Nome da cidade:%s\n", carta1.cidade);
    printf("Populacao/habitantes:%d\n", carta1.habitantes);
    printf("Area da cidade:%.2f km2\n", carta1.area);
    printf("PIB: %.2f bilhoes de reais\n", carta1.pib);
    printf("Pontos turisticos: %d\n", carta1.pontos);
    
    //Resultado das informações da carta 02
    printf("\n---Dados da carta 02----\n");
    printf("Estado:%c\n", carta2.estado);
    printf("Codigo da carta:%s\n", carta2.codigo);
    printf("Nome da cidade:%s\n", carta2.cidade);
    printf("Populacao/habitantes:%d\n", carta2.habitantes);
    printf("Area da cidade:%.2f km2\n", carta2.area);
    printf("Pib:%.2f bilhoes de reais\n", carta2.pib);
    printf("Pontos turisticos:%d\n", carta2.pontos);
    return 0;
}
