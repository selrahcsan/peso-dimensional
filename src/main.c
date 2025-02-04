/* Calcular o peso dimensional de uma caixa de 12"x10"x8" que é definido como:

Peso dimensional = volume da caixa / 166

O resultado esperado tem que ser o valor inteiro da operação arredondado para cima.
Espera-se as dimensões da caixa em polegadas (inteiro).

Desafios:

 * Pedir ao usuário que insira as dimensões da caixa (comprimento, largura e altura) por meio da entrada do programa.
Definir como constante o número 166 (que nessa expressão significa polegadas cúbicas por libra).*/

#include <stdio.h>
#include <math.h>

int main(void) {
    double pesoDimensional;
    int dimensoesCaixa[3];
    int volumeTotal = 1;
    const int polegadasCubicasPorLibra = 166;

    printf("Digite o comprimento da caixa em polegadas: ");
    scanf("%d", &dimensoesCaixa[0]);

    printf("Digite a largura da caixa em polegadas: ");
    scanf("%d", &dimensoesCaixa[1]);

    printf("Digite a altura da caixa em polegadas: ");
    scanf("%d", &dimensoesCaixa[2]);

    for (int i = 0; i < 3; i++) {
        volumeTotal *= dimensoesCaixa[i];
    }

    pesoDimensional = (double)volumeTotal / polegadasCubicasPorLibra;
    pesoDimensional = ceil(pesoDimensional);   //ceil é para arredondar o valor
    printf("O peso dimensional da caixa é: %.0f libras\n", pesoDimensional);

  return 0;
}
