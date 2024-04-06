#include <stdio.h>

main(){

int led, qled;
float salario, inss, bruto, imp_r, desconto, vled, vqled;
printf("\n\tInforme o salario fixo: R$ ");
scanf("%f", &salario);
printf("\n\tQuantas TVs de LED o funcionario vendeu?");
scanf("%i", &led);
printf("\n\tQuantas TVs de QLED o funcinario vendeu?");
scanf("%i", &qled);
inss=salario*0.10;
if(led<=10){
    vled=led*150;
}
else if(led>10){
    vled=((led-10)*250)+1500;
}
if(qled<=10){
    vqled=qled*300;
    bruto=salario+vqled+vled;
}
else if(qled>10){
    vqled=((qled-10)*550)+3000;
    bruto=salario+vqled+vled;
}
if(bruto<2000.01){
    printf("\n\tIsento de IRPF");
}
else if(bruto>2000.01 && bruto<3500){
    imp_r=bruto*0.10;
    salario=salario-imp_r;
    printf("\n\tCobrado 10%% de imposto");
}
else if(bruto>3500){
    imp_r=bruto*0.15;
    salario=salario-imp_r;
    printf("\n\tCobrado 15%% de imposto");
}
printf("\n\tComissao: R$%.2f", vled+vqled);
printf("\n\tSalario bruto: R$%.2f", bruto);
printf("\n\tDescontos inss: R$%.2f", inss);
printf("\n\tComissao LED: R$%.2f", vled);
printf("\n\tComissao QLED: R$%.2f", vqled);
printf("\n\tImposto de renda: R$%.2f", imp_r);
printf("\n\tTotal dos descontos: R$%.2f", imp_r+inss);
printf("\n\tSalario liquido: R$%.2f", bruto-inss-imp_r);
}
