#include <stdio.h>

void movimentarTorre();
void movimentarBispo();
void movimentarRainha();
void movimentarCavalo();

int main()
{
    printf("Movimentação torre:\n");
    movimentarTorre();
    printf("\nMovimentação bispo:\n");    
    movimentarBispo();
    printf("\nMovimentação rainha:\n");
    movimentarRainha();
    printf("\nMovimentação cavalo:\n");
    movimentarCavalo();
    return 0;
}

// Seu programa deverá simular o movimento da Torre cinco casas para a direita. Move-se em linha reta horizontalmente ou verticalmente. Seu programa deverá simular o movimento da Torre cinco casas para a direita.
void movimentarTorre()
{
    for (size_t i = 0; i < 5; i++)
    {
        printf("Direita\n");
    }
}

// Move-se na diagonal. Seu programa deverá simular o movimento do Bispo cinco casas na diagonal para cima e à direita. Para representar a diagonal, você imprimirá a combinação de duas direções a cada casa (ex: "Cima, Direita").
void movimentarBispo()
{
    size_t move = 0;
    while (move < 5)
    {
        printf("Cima, Direita\n");
        move++;
    }
}

// Move-se em todas as direções. Seu programa deverá simular o movimento da Rainha oito casas para a esquerda.
void movimentarRainha()
{
    size_t move = 0;
    do
    {
        printf("Esquerda\n");
        move++;
    } while (move <= 8);
}

// Mova-se em L. Seu programa deverá simular o movimento do Cavalo duas casas para baixo e uma para esquerda.
void movimentarCavalo()
{
    size_t j = 0;
    for (size_t i = 0; i < 1; i++)
    {
        while (j < 2)
        {
            printf("Baixo\n");
            j++;
        }

        printf("Esquerda\n");
    }
}