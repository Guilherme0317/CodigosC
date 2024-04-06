#include<stdio.h>

main(){

    float chico, ano, juca, crescimento1, crescimento2;


    for(int i=0;i<=41;i++){
        crescimento1=0.03*i;
        crescimento2=0.02*i;
        chico=crescimento2+1.70;
        juca=crescimento1+1.10;
        ano=1*i;
    }


    printf("\n\tSerao necessarios %.2f anos para que Juca ultrapasse Chico.", ano);
    printf("\n\t altura de Chico apos %.2f anos: %.2f", ano, chico);
    printf("\n\t altura de Juca apos %.2f anos: %.2f\n\n", ano, juca);
}
