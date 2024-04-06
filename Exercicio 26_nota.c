#include<stdio.h>

main(){

    float liquido, bruto, dependentes, inss, imp_r, minimo, vhr, ht;

    printf("\n\tDigite o valor do salario minimo:");
    scanf("%f", &minimo);
    printf("\n\tDigite o numero de dependentes:");
    scanf("%f", &dependentes);
    printf("\n\tDigite o valor de cada hora:");
    scanf("%f", &vhr);
    printf("\n\tDigite o numero de horas trabalhadas:");
    scanf("%f", &ht);

    bruto=vhr*ht+minimo;
    dependentes=minimo*(0.05*dependentes);
    inss=bruto*0.075;
    imp_r=bruto*0.105;
    liquido=bruto-inss-imp_r-dependentes;

    printf("\n\tSalario liquido: R$ %2.f", liquido);
    printf("\n\tSalario bruto: R$ %2.f", bruto);
    printf("\n\tDesconto IRPF: R$ %.2f", imp_r);
    printf("\n\tDesconto INSS: R$ %.2f", inss);
    printf("\n\tDescontos somados: R$ %.2f", inss+imp_r);
    printf("\n\tDescontos dependentes:  R$ %.2f", dependentes);



}
