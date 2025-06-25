#include <stdio.h>

// Movimento da Torre usando recursividade
void moverTorre(int cima, int direita) {
    if (cima > 0) {
        printf("Cima\n");
        moverTorre(cima - 1, direita);
    } else if (direita > 0) {
        printf("Direita\n");
        moverTorre(0, direita - 1);
    }
}

// Movimento do Bispo usando recursividade + loops aninhados
void moverBispo(int diagonais) {
    if (diagonais == 0) return;

    for (int i = 0; i < 1; i++) { // movimento vertical (loop externo)
        for (int j = 0; j < 1; j++) { // movimento horizontal (loop interno)
            printf("Cima\n");
            printf("Direita\n");
        }
    }

    moverBispo(diagonais - 1);
}

// Movimento da Rainha com recursividade (horizontal e vertical)
void moverRainha(int cima, int direita) {
    if (cima > 0) {
        printf("Cima\n");
        moverRainha(cima - 1, direita);
    } else if (direita > 0) {
        printf("Direita\n");
        moverRainha(0, direita - 1);
    }
}

// Movimento do Cavalo com loops complexos (para cima e direita)
void moverCavalo(int saltos) {
    for (int i = 0; i < saltos; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Cima\n");
        }

        int k = 0;
        while (k < 1) {
            printf("Direita\n");
            k++;
        }
    }
}

int main() {
    // Entrada de dados fixas (constantes)
    int passosTorreCima = 2;
    int passosTorreDireita = 3;

    int passosBispo = 2; // quantidade de diagonais (cima + direita)

    int passosRainhaCima = 1;
    int passosRainhaDireita = 2;

    int saltosCavalo = 2;

    // Movimentos
    printf("Torre:\n");
    moverTorre(passosTorreCima, passosTorreDireita);
    printf("\n");

    printf("Bispo:\n");
    moverBispo(passosBispo);
    printf("\n");

    printf("Rainha:\n");
    moverRainha(passosRainhaCima, passosRainhaDireita);
    printf("\n");

    printf("Cavalo:\n");
    moverCavalo(saltosCavalo);
    printf("\n");

    return 0;
}
