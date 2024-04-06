#include<stdio.h>

main(){
    int v, V, P, p;
    float dado, valor, vista, prazo;
    char c;
    for(int i=0;i<15;i++){
        printf("Digite o valor da compra:");
        scanf("%f", &valor);
        printf("Digite o codigo da compra:");
        scanf("%c", &c);

        if(c==v || c==V){
            vista+=valor;
        }
        else if(c==p || c==P){
            prazo+=valor;
        }
        else
            printf("Codigo invalido. Digite o V ou o P");

    }


}
