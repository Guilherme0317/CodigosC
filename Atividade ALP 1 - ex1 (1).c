#include <stdio.h>

main(){

float salario, horas, vhr, inss, imp_r, bruto, valordescontado;

printf("\n\tInforme a quantidade de horas trabalhadas por mes:");
scanf("%f", &horas);
printf("\n\tInforme o valor da hora:");
scanf("%f", &vhr);

if(horas<=160){
    salario=horas*vhr;
    inss=salario*0.1;
}
else{
    salario=(horas-160)*(2*vhr)+(160*vhr);
    inss=salario*0.1;
}
if(salario<2000){
    printf("\n\tIsento de taxas");
}
if(salario>2000 && salario<3000){
    imp_r=salario*0.08;
    printf("\n\tDescontado 8%% do valor");
}
if(salario>3000 && salario<4500){
    imp_r=salario*0.10;
    printf("\n\tDescontado 10%% do valor");
}
if(salario>4500){
    imp_r=salario*0.15;
    printf("\n\tDescontado 15%% do valor");
}

    printf("\n\tSalario liquido: R$ %.2f", salario-imp_r-inss);
    printf("\n\tSalario bruto: R$ %.2f", salario);
    printf("\n\tValor INSS: R$ %.2f", inss);
    printf("\n\tValor Imposto de renda: R$ %.2f", imp_r);
    printf("\n\tDescontos somados: R$ %.2f\n\n", inss+imp_r);
}
