#include<stdio.h>
int main(){
    float altura, resultadoHomem, resultadoMulher;
    char sexo;

    printf("Digite o sexo e a altura:\n");
    scanf("%c%f", &sexo, &altura);
    //m

    if (sexo == 'm' || sexo == 'M' || sexo == '1')
        {
            resultadoHomem = (72.7 * altura) - 58;
            printf("Resultado Homem: %.1f\n", resultadoHomem);
        }
        else 
        {
            resultadoMulher = (62.1 * altura) - 44.7;
            printf("Resultado Mulher: %.1f\n", resultadoMulher);
        }
}