#include <stdio.h>

main(){

int pecas;
float salario, abono, imp_r, inss, bruto, porc, porc5;

printf("\n\n\tInforme a quantidade de pecas montadas pelo funcionario no mes:");
scanf("%i", &pecas);
salario=1412;
if(pecas<31){
    printf("\n\n\tRecebeu somente o salario minimo.");
    salario=salario;
    abono=0;
}
else if(pecas>=31 && pecas<=50){
    porc=salario*0.03;
    abono=((pecas-30)*(salario*0.03));
    salario=((pecas-30)*(porc))+salario;
    printf("\n\n\tRecebeu o salario e mais abonos.");
}
else{
    porc=salario*0.03;
    porc5=salario*0.05;
    abono=porc5*(pecas-50)+porc*20;
    salario=(20*(salario*0.03))+((pecas-50)*(porc5))+salario;
    printf("\n\n\tRecebeu o salario e mais abonos.");
}
if(salario<2000){
    inss=salario*0.1;
    imp_r=0;
    printf("\n\n\tIsento de IRPF");
}
else if(salario>=2000.01 && salario<=3500.01){
    inss=salario*0.1;
    imp_r=salario*0.1;
    printf("\n\n\tCobrado 10%% de imposto");
}
else{
    inss=salario*0.10;
    imp_r=salario*0.15;
    printf("\n\n\tCobrado 15%% de imposto");
}
printf("\n\n\tValor INSS: R$%.2f %", inss);
printf("\n\n\tValor IRPF: R$%.2f %", imp_r);
printf("\n\n\tDescontos Somados: R$%.2f %", inss+imp_r);
printf("\n\n\tSalario bruto: R$%.2f %", salario);
printf("\n\n\tSalario liquido: R$%.2f %", salario-inss-imp_r);
printf("\n\n\tComissao: R$%.2f\n\n", abono);
}
