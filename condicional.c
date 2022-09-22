//Escreva um algoritmo que receba uma idade e informe se o usuario podera
// ou não votar.
/*
CÓDIGOS DE FORMATAÇÃO
 int %d ou %i
 float %f
 double %lf
 char %c
 char(string) %s
 bool %b
*/

#include<stdio.h>
int main(){
    int idade;

    printf("Informe a idade desejada: ");
    scanf("%d", &idade); //12

    //Se (idade >= 16)
    // entao: escreva ("Pode votar!");
    // senao: escreva ("NAO Pode votar!");

    
    if (idade >= 16) {
        printf("Idade: %d\n", idade);
        printf("Pode votar!\n"); 
    } else 
        printf("Idade: %d\n", idade);
        printf("printf dentro do else\n"); 
    
}