#include<stdio.h>

main(){
    float dolar, real, cotacao;
    printf("\n\tValor da cotacao dolar:");
    scanf("%f", &cotacao);
    printf("\n\tValor quantos dolares voce tem:");
    scanf("%f", &dolar);
    real=dolar*cotacao;
    printf("\n\tValor convertido para o real:  R$ %.2f", real);

}
