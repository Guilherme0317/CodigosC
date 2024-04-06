#include<stdio.h>

main(){

    int num;
    int maior, menor;


    for(int cont=0;cont<10;cont++){
        printf("Informe o %d%c numero:", cont+1, 167);
        scanf("%d", &num);

        if(cont==0){
            maior=num;
            menor=num;
        }
        if(num>maior){
            maior=num;
        }
        if(num<menor){
            menor=num;
        }
    }
    printf("\nO maior e %d", maior);
    printf("\nO menor e %d", menor);
}

