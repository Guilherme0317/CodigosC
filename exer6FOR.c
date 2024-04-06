#include<stdio.h>

main(){

    int num1, num2;

    printf("Informe o primeiro numero:");
    scanf("%d", &num1);
    printf("Informe o segundo numero:");
    scanf("%d", &num2);
    for(int cont=num1;cont<=num2;cont++){
        if(cont%2==0)
            printf("\n%d - Par", cont);
        else
            printf("\n%d - Impar", cont);
    }
}
