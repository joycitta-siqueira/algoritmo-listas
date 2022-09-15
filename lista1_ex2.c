#include<stdio.h>
#include<math.h> //BIBLIOTECA MATEMATICA
#define PI 3.1 //CONSTANTE
int main(){
//calcular a area do circulo -> area = 3.14159 * raio²
    float area, raio;
    printf("Digite o valor do raio: ");
    scanf("%f", &raio);
    area = PI * pow(raio,2); //POW FUNÇÃO MATEMÁTICA DA BIBLIOTECA MATH.H
    printf("Area: %f", area);
}