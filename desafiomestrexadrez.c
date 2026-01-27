#include <stdio.h>

//movimento torre
void movertorre(casas){
    if(casas > 0) {
        printf("Direita.\n");
        movertorre(casas - 1);
    }
}

//movimento rainha
void movimentorainha(casas){
    if(casas > 0){
        printf("Esquerda.\n");
        movimentorainha(casas - 1);
    }
}

//movimento bispo
void movimentobispo(casas){
    if(casas > 0){
        //loop vertical
    for (int v = 1; v <= 1; v++){
        //loop horizontal
        for(int h = 1; h <= 1; h++){
            printf("Cima, direita.\n");
        }
    }
  
    movimentobispo(casas - 1);
}
}

int main(){
    printf("Movimento das peças:\n");

    //movimento torre
    printf("Movimento da torre:\n");
    movertorre(5);
    printf("\n");

    //movimento bispo
    printf("Movimento do bispo:\n");
    movimentobispo(5);
    printf("\n");

    //movimento rainha
    printf("Movimento da rainha:\n");
    movimentorainha(8);
    printf("\n");

    //movimento cavalo um pouco complexo, duas casa para cima e uma para direita
    
    printf("Movimento cavalo\n");
    
    int vertical, horizontal;

    for(vertical = 1; vertical <= 2; vertical++){
       printf("Cima.\n");
    }

    //movimento restante do cavalo para direita
    int passo = 1;
    while(passo <= 1){
        printf("Direita\n");
        passo++;
    }
    return 0;
}