#include <stdio.h>

void jeuMultiPoints(int number) {
    int erreur=0;
    int answer;
    int i;
    for(i=1;i<=9;i++){
        printf("%d x %d = ",i,number);
        scanf("%d",&answer);
        if(answer!=number*i){
            erreur++;
            printf("Erreur ! %d x %d = %d pas %d\n",i,number,i*number,answer);
        }
    }
    if(erreur==0){
        printf("Felicitation 0 erreur\n");
    }else{
        printf("%d erreurs\n",erreur);
    }
}
