#include <stdio.h>

  //funções recursivas

    //função recursiva da Torre
    void moverTorre(int casas) {
        if (casas <= 0) return;
        printf("Direita\n");
        moverTorre(casas - 1);
    }

    //função recursiva Bispo
    void moverBispo(int casas) {
        if (casas <= 0) return;
        int vertical, horizontal;
        
        // loop externo = movimento vertical cima
        for (vertical = 0; vertical < 1; vertical++) {
            printf("Cima\n");

            // loop interno = movimento horizontal Direita
            for (horizontal = 0; horizontal < 1; horizontal++){
               printf("Direita\n");
            }
    } 
    moverBispo(casas - 1); //1 casa diagonal a menos
    }


    //função recursiva Rainha
    void moverRainha(int casas){
        if (casas <= 0) return;
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
int main() {
    //declaração de variáveis
    int i; //controle do for da Torre
    int casasBispo; //controle do while do Bispo
    int casasRainha; //controle do do-while da Rainha
    int passoCavalo; //controle do loop interno Cavalo
    int etapasCavalo; //controle do loop externo Cavalo
    int subida; //controle de subida do Cavalo
    int direita; //controle de direita do Cavalo

  
    printf("\n=======Xadrez nível Mestre=======\n");
    
    //MOVIMENTAÇÃO DA TORRE - 5 casas para direita

    i = 5;
    printf("\nMovimento da torre: \n");
    moverTorre(i);
        printf("\n"); //apenas para separar visualmente
    
    //MOVIMENTAÇÃO DA BISPO - 5 casas para cima e à diteita

    casasBispo = 5;
    printf("Movimentação do Bispo: \n");
    moverBispo(casasBispo); //função recursiva
        printf("\n");

    //MOVIMENTAÇÃO DA RAINHA - 8 casas para a esquerda

    casasRainha = 8;
    printf("Movimentação da Rainha: \n");
    moverRainha(casasRainha);
        printf("\n");

    //MOVIMENTAÇÃO DO CAVALO - 2 casas para cima + 1 casa para direita
    printf("Movimento do cavalo: \n");
    
    for (etapasCavalo = 1; etapasCavalo <= 1; etapasCavalo++){
        subida = 0;
        direita = 0;
        while (1) {
            if (subida < 2){
                printf("Cima\n");
                subida++;
                continue; // volta para o inicio
            }
            if (direita < 1){
                printf("Direita\n");
                direita++;
                continue;
            }

            break; //quando completar 2 subidas e 1 direita, sai do loop
        }
        
    }
    printf("\n");
    return 0;
}
