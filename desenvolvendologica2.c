#include <stdio.h>

    typedef struct {
    char pais[20];
    int populacao;
    float area;
    float pib;
    int pontos;
    float densidade;
    
    int valor1, valor2;

    } Carta; 

    int main(){
        Carta carta1, carta2;
        int escolha;

        printf("Bem vindo! Faça sua carta 01:\n");

        printf("1.Digite o nome do seu pais:\n");
        scanf(" %s", carta1.pais);

        printf("2.Digite a populacao da cidade:\n");
        scanf(" %d",&carta1.populacao);

        printf("3.Digite a area da cidade:\n");
        scanf(" %f", &carta1.area);
        
        printf("4.Digite o pib da cidade:\n");
        scanf(" %f", &carta1.pib);

        printf("5.Digite o numero de pontos turisticos:\n");
        scanf(" %d", &carta1.pontos);

        printf("6.Digite a densidade demografica do pais:\n");
        scanf("%f", &carta1.densidade);

        printf("Perfeito, agora vamos fazer sua segunda carta!\n");
    
        carta1.densidade = carta1.populacao / carta1.area;

        printf("\n--- Agora faça sua carta 02 ---\n");

        printf("1.Digite o nome do seu pais:\n");
        scanf(" %s", carta2.pais);

        printf("2.Digite a populacao da cidade:\n");
        scanf(" %d",&carta2.populacao);

        printf("3.Digite a area da cidade:\n");
        scanf(" %f", &carta2.area);
        
        printf("4.Digite o pib da cidade:\n");
        scanf(" %f", &carta2.pib);

        printf("5.Digite o numero de pontos turisticos:\n");
        scanf(" %d", &carta2.pontos);

        printf("6.Digite a densidade demografica do pais:\n");
        scanf("%f", &carta2.densidade);
    
        carta2.densidade = carta2.populacao / carta2.area;

        printf("Escolha o atributo para comparacao(2-6):\n");
        scanf("%d", &escolha);

        switch (escolha)
        {
        case 2:
            printf("Atributo escolhido: Populacao\n");
            printf("%s : %d", carta1.pais, carta1.populacao);
            printf("%s ; %d", carta2.pais, carta2.populacao);
            
            if(carta1.populacao > carta2.populacao)
               printf("Vencedor: %s\n", carta1.pais);
            else if (carta2.populacao > carta1.populacao)
               printf("Vencedor: %s\n", carta2.pais);
               else
               printf("Empate!\n");
            break;

        case 3:   // Área
        printf("\nAtributo escolhido: AREA\n");

        printf("%s: %.2f\n", carta1.pais, carta1.area);
        printf("%s: %.2f\n", carta2.pais, carta2.area);

        if (carta1.area > carta2.area)
            printf("Vencedor: %s\n", carta1.pais);
        else if (carta2.area > carta1.area)
            printf("Vencedor: %s\n", carta2.pais);
        else
            printf("Empate!\n");
        break;

        case 4:   // PIB
        printf("\nAtributo escolhido: PIB\n");

        printf("%s: %.2f\n", carta1.pais, carta1.pib);
        printf("%s: %.2f\n", carta2.pais, carta2.pib);

        if (carta1.pib > carta2.pib)
            printf("Vencedor: %s\n", carta1.pais);
        else if (carta2.pib > carta1.pib)
            printf("Vencedor: %s\n", carta2.pais);
        else
            printf("Empate!\n");
        break;

        case 5:   // Pontos turísticos
        printf("\nAtributo escolhido: PONTOS TURISTICOS\n");

        printf("%s: %d\n", carta1.pais, carta1.pontos);
        printf("%s: %d\n", carta2.pais, carta2.pontos);

        if (carta1.pontos > carta2.pontos)
            printf("Vencedor: %s\n", carta1.pais);
        else if (carta2.pontos > carta1.pontos)
            printf("Vencedor: %s\n", carta2.pais);
        else
            printf("Empate!\n");
        break;

        case 6:   // Densidade (MENOR vence)
        printf("\nAtributo escolhido: DENSIDADE (menor vence)\n");

        printf("%s: %.2f\n", carta1.pais, carta1.densidade);
        printf("%s: %.2f\n", carta2.pais, carta2.densidade);

        if (carta1.densidade < carta2.densidade)
            printf("Vencedor: %s\n", carta1.pais);
        else if (carta2.densidade < carta1.densidade)
            printf("Vencedor: %s\n", carta2.pais);
        else
            printf("Empate!\n");
        break;
        
        default:
            break;
        }

        printf("\n---Menu de comparacao---\n");

        printf("Nome do primeiro pais:%s\n", carta1.pais);
        printf("Nome do segundo pais:%s\n", carta2.pais);



        if (carta1.populacao > carta2.populacao) {
        printf("Resultado: Carta 1 venceu! População: %d\n", carta1.populacao);
        }
        else {
        printf("Resultado: Carta 2 venceu! População: %d\n", carta2.populacao);
        }
    
}