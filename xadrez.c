#include <stdio.h>

void movimentarTorre();
void movimentarBispo();
void movimentarRainha();
void movimentarCavalo();

const size_t ENTRY_POINT = 0;

int main()
{
    printf("Movimentação torre:\n");
    movimentarTorre(ENTRY_POINT);
    printf("\nMovimentação bispo:\n");
    movimentarBispo(ENTRY_POINT);
    printf("\nMovimentação rainha:\n");
    movimentarRainha(ENTRY_POINT);
    printf("\nMovimentação cavalo:\n");
    movimentarCavalo(ENTRY_POINT);
    return 0;
}

// Seu programa deverá simular o movimento da Torre cinco casas para a direita. Move-se em linha reta horizontalmente ou verticalmente. Seu programa deverá simular o movimento da Torre cinco casas para a direita.
void movimentarTorre(size_t i)
{
    if (i < 5)
    {
        printf("Direita\n");
        movimentarTorre(++i);
    }
    
}

// Move-se na diagonal. Seu programa deverá simular o movimento do Bispo cinco casas na diagonal para cima e à direita. Para representar a diagonal, você imprimirá a combinação de duas direções a cada casa (ex: "Cima, Direita").
void movimentarBispo(size_t i)
{   
    if (i < 5)
    {
        printf("Cima, Direita\n");
        movimentarBispo(++i);
    }
}

// Move-se em todas as direções. Seu programa deverá simular o movimento da Rainha oito casas para a esquerda.
void movimentarRainha(size_t i)
{    
    if (i < 8)
    {
        printf("Esquerda\n");
        movimentarRainha(++i);
    }
}

// Mova-se em L. Seu programa deverá simular o movimento do Cavalo duas casas para baixo e uma para esquerda.
void movimentarCavalo(size_t i)
{
    if (i < 1)
    {
        while (i < 2)
        {
            printf("Cima\n");
            ++i;
        }

        printf("Direita\n");
        movimentarCavalo(++i);
    }
}