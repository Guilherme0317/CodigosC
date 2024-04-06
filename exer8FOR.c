#include<stdio.h>

main(){

    int num;


    for(int cont=0;cont<10;cont++){
        printf("\n\nInforme o %d%c numero:", cont+1, 167);
        scanf("%d", &num);

        if(num<50){
            printf("\n\t%d\t%d", num, num*3);
        }
        if(num>50 && num<=100){
            printf("\n\t%d\t%d", num, num+num);
        }
        if(num>100){
            printf("\n\t%d", num);
        }
    }
}


