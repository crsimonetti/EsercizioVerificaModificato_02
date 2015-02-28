#include <stdio.h>
#include <stdlib.h>
#define N 5

int main(int argc, char** argv) {
    int i,massimo,minimo,somma,cont;
    float media;
    
    media=0;
    somma=0;
    cont=0;
    int eta[N];
    
    printf("Inserisci l'età di %d persone\n",N);
    
    for(i=0; i<N; i++)
    {
        printf("Inserisci l'eta' della %da persona:", i+1);
        scanf("%d", &(eta[i]));
        somma += eta[i];
        if(eta[i]>=50)
        {
            cont++;
        }
    }
    massimo = eta[0];
    minimo = eta[0];
    
    for(i=1; i<N; i++)
    {
     if(massimo < eta[i]){
         massimo = eta[i];
     }
     if(minimo > eta[i]){
         minimo = eta[i];
     }
     
    }
    
    media = (float)somma / N;
    
    printf("Eta' media: %f\n", media);
    printf("Eta' massima: %d\n", massimo);
    printf("Eta' minima: %d\n", minimo);
    printf("Numero di potenziali Presidenti della Repubblica: %d\n",cont);
    
    

    return (EXIT_SUCCESS);
}
