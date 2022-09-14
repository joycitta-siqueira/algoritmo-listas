//construa um algoritmo que leia um numero inteiro de horas e mostre
//ao usuario o correspondente em minutos e segundos
#include<stdio.h> //biblioteca para os comandos printf e scanf
int main(){ //inicio do algoritmo
    int horas, minutos, segundos;
    printf("Digite a quantidade de horas: ");
    scanf("%d", &horas);
    minutos = horas * 60;
    segundos = minutos * 60;
    printf("Minutos: %d\n", minutos);
    printf("Segundos: %d", segundos);
}

int main(){ //inicio do algoritmo
    int horas;
    printf("Digite a quantidade de horas: ");
    scanf("%d", &horas);
    printf("Minutos: %d\n", horas * 60);
    printf("Segundos: %d", horas * 3600);
}






} //final do algoritmo