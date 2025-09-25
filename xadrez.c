#include <stdio.h>

    int main () {


            int Torre=0, Bispo=0, Rainha=0; // Declaração das variáveis 

            // Move a Torre 5 casas a direita Usando o FOR

            for( Torre = 0; Torre < 5; Torre++)  { // Condição para execução do código
                printf("Torre move para direita\n");
            }
            // Move o Bispo 5 casas a Cima e a Direita Usando o DO WHILE
            do {
                printf("Bispo move para Cima\n");
                printf("Bispo move para Direita\n");
                Bispo++;
            }while (Bispo<5);
            // Move a Rainha 8 casas a Esquerda Usando  WHILE
            while (Rainha <8)
            {
                printf("Rainha Move para a esquerda\n");
                Rainha++;
            }
            

            return 0;
            

    }