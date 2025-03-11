#include <stdio.h>

// Função recursiva para a Torre (movimento horizontal e vertical)
void moverTorre(int casas, char direcao) {
    if (casas == 0) return;
    printf("%s\n", direcao == 'H' ? "Direita" : "Cima");
    moverTorre(casas - 1, direcao);
}

// Função recursiva para o Bispo (movimento diagonal em todas as direções)
void moverBispo(int casas, int dx, int dy) {
    if (casas == 0) return;
    printf("Diagonal %s-%s\n", dx > 0 ? "Direita" : "Esquerda", dy > 0 ? "Cima" : "Baixo");
    moverBispo(casas - 1, dx, dy);
}

// Função recursiva para a Rainha (combina torre e bispo)
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    printf("Diagonal Direita-Cima\n");
    moverRainha(casas - 1);
}

// Movimento do Cavalo utilizando loops complexos
void moverCavalo(int movimentos) {
    for (int i = 0; i < movimentos; i++) {
        for (int j = 0; j < movimentos; j++) {
            if ((i + j) % 2 == 0) {
                printf("Cima\n");
                printf("Cima\n");
                printf("Direita\n");
                break;
            }
        }
    }
}

// Bispo com loops aninhados
void moverBispoLoops(int casas) {
    for (int i = 0; i < casas; i++) {
        for (int j = 0; j <= i; j++) {
            printf("Diagonal Direita-Cima\n");
        }
    }
}

int main() {
    int casas = 3; // Número de casas a serem movidas
    int movimentosCavalo = 2;
    
    printf("Movimento da Torre:\n");
    moverTorre(casas, 'H');
    moverTorre(casas, 'V');
    printf("\n");

    printf("Movimento do Bispo (Recursivo):\n");
    moverBispo(casas, 1, 1);
    printf("\n");

    printf("Movimento da Rainha:\n");
    moverRainha(casas);
    printf("\n");

    printf("Movimento do Cavalo:\n");
    moverCavalo(movimentosCavalo);
    printf("\n");

    printf("Movimento do Bispo (Loops Aninhados):\n");
    moverBispoLoops(casas);
    printf("\n");

    return 0;
}

