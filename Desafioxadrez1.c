#include <stdio.h>

int main() {

 int torre = 5;
 int contadortorrei = 1;
 
 //Movimento da torre

 printf("Movimento da torre:\n");

 for (contadortorrei = 1; contadortorrei <= 5; contadortorrei++)
 {
    printf("Direita.\n");
 }
 

 int bispo = 5;
 int contadorbispoi = 1;

//Movimento do bispo

 printf("Movimento do bispo:\n");

 while (contadorbispoi <= bispo)
 {
   printf("Cima, direita.\n");
   contadorbispoi++;
 }

 int rainha = 8;
 int contadorrainhai = 1;

//Movimento da rainha 

 printf("Movimento da rainha:\n");

 do
 {
   printf("Esquerda:\n");
   contadorrainhai++; 
} while (contadorrainhai <= rainha);

return 0; 
    
}