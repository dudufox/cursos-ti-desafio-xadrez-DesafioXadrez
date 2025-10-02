#include <stdio.h>

        // Recursividade Movimentação da Torre
        void Torre (int JogadaTorre){
            if (JogadaTorre > 0){
                printf("Torre move para a direita\n");
                Torre(JogadaTorre - 1 );
            }
             }

              // Recursividade Movimentação da Bispo
             void Bispo (int JogadaBispo){
            if (JogadaBispo > 0){
                printf("Bispo move para Cima e direita\n");
                Bispo(JogadaBispo - 1 );
            }
             }


            // Recursividade Movimentação da Rainha
             void Rainha (int JogadaRainha){
            if (JogadaRainha > 0){
                printf("Rainha move para esquerda\n");
                Rainha(JogadaRainha - 1 );
            }
             }

            // Recursividade Movimentação da Cavalo
             void Cavalo (int JogadaCavalo){
            if (JogadaCavalo > 0){
                printf("Cavalo move para Cima e Direita\n");
                Cavalo(JogadaCavalo - 1 );
            }
             }

            
            int main () {
                int JogadaB = 4, JogadaT = 5, JogadaR = 8, JogadaC = 1 ; // Variáveis, jogadas de cada peça
                Torre(JogadaT); 
                Bispo(JogadaB);
                Rainha(JogadaR);
                Cavalo(JogadaC);


            }