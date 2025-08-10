#include <stdio.h>

void movimentarTorre();
void movimentarBispo();
void movimentarRainha();

int main()
{
    movimentarTorre();
    movimentarBispo();
    movimentarRainha();
    return 0;
}

// Seu programa deverá simular o movimento da Torre cinco casas para a direita. Move-se em linha reta horizontalmente ou verticalmente. Seu programa deverá simular o movimento da Torre cinco casas para a direita.
void movimentarTorre()
{
    for (size_t i = 0; i < 5; i++)
    {
        printf("Torre - Direita\n\n");
    }
}

// Move-se na diagonal. Seu programa deverá simular o movimento do Bispo cinco casas na diagonal para cima e à direita. Para representar a diagonal, você imprimirá a combinação de duas direções a cada casa (ex: "Cima, Direita").
void movimentarBispo()
{
    size_t move;
    while (move < 5)
    {
        printf("Bispo - Cima, Direita\n\n");
        move++;
    }
}

// Move-se em todas as direções. Seu programa deverá simular o movimento da Rainha oito casas para a esquerda.
void movimentarRainha()
{
    size_t move;
    do
    {
        printf("Rainha - Esquerda\n\n");
        move++;
    } while (move < 10);
}
