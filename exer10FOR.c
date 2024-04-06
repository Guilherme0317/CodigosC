#include<stdio.h>

main(){
    int p=0;
    char letra='a';
    printf("\t%c.", letra);
    for(int cont=10;cont<=34;cont++){
        if(p<5){
            printf("\t%d", cont);
            p++;
            }
        else if(p>4){
            p=0;
            cont--;
            printf("\n");
            letra=letra+1;
            printf("\t%c.", letra);
        }
    }
}



