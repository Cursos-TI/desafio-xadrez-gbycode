#include <stdio.h>

int main() {
    
    int i; //controle do for da Torre
    int casasBispo; //controle do while do Bispo
    int casasRainha; //controle do do-while da Rainha


    printf("\n=======Xadrez nível novato=======\n");
    //MOVIMENTAÇÃO DA TORRE - 5 casas para direita

    printf("\nMovimento da torre: \n");
    for (i = 1; i <= 5; i++){
        printf("Direita\n");
    }
        printf("\n"); //apenas para separar visualmente
    //MOVIMENTAÇÃO DA TORRE - 5 casas para cima e à diteita

    printf("Movimentação do Bispo: \n");
    casasBispo = 1;
    while (casasBispo <= 5){
        printf("Cima, Direita\n");
        casasBispo++;
    }
        printf("\n");

    //MOVIMENTAÇÃO DA RAINHA - 8 casas para a esquerda

    printf("Movimentação da Rainha: \n");
    casasRainha = 0;
    do {
        printf("Esquerda\n");
        casasRainha++;
    } while (casasRainha < 8);

    return 0;
}
