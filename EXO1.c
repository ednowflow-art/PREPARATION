#include <stdio.h>
int main(){
    int i,n,j,nbrdiv,somdiv,nbrdivp,val,somspecial, nbrhypocrite,nbrdivpre;
    do{
        printf("saisir un entier");
        scanf("%d",&n);
        nbrdiv=0;
        for(i=1;i<=n;i++){
            if(n%i==0){
                nbrdiv++;
            }
        }

    }while(n<0 && nbrdiv!=0);
     nbrhypocrite=0;
     somspecial=0;
    for(i=1;i<=n;i++){
        printf("saisir une valeur");
        scanf("%d",&val);
    nbrdivp=0;
    somdiv=0;
    nbrdivpre=0;
     for(j=1;j<=val;j++){
        if(val%j==0){
            nbrdiv=nbrdiv+1;
            somdiv=somdiv+j;
            nbrdivpre=nbrdivpre+1;
        }
        }
    if(nbrdiv>2 && somdiv==val*2 && val%2==0 ){
      somspecial=somspecial+val;
    }
    if(nbrdivpre==2 && val%2==0){
        nbrhypocrite=nbrhypocrite+1;
    }
    }
     printf("somme %d",somspecial);
     printf("nombre %d",nbrhypocrite);
    return 0;
}
