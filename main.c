#include <stdio.h>
#include <stdlib.h>

int const N = 6;

int main(int argc, char** argv) {
    int i,max,min;
    int somma = 0;
    float media = 0;
    int conta = 0;
    int vet[N];
    
    printf("Inserisci l'età di %d persone\n",N);
    
    for(i=0; i<N; i++)
    {
        printf("Inserisci l'eta' della %da persona:", i+1);
        scanf("%d", &(vet[i]));
        somma = somma + vet[i];
        if(vet[i]>=50)
        {
            conta++;
        }
    }
    max = vet[0];
    min = vet[0];
    
    for(i=1; i<N; i++)
    {
     if(max < vet[i]){
         max = vet[i];
     }
     if(min > vet[i]){
         min = vet[i];
     }
     
    }
    
    media = (float)somma / N;
    
    printf("Eta' media: %f\n", media);
    printf("Eta' massima: %d\n", max);
    printf("Eta' minima: %d\n", min);
    printf("Numero di potenziali Presidenti della Repubblica: %d\n",conta);
    
    

    return (EXIT_SUCCESS);
}

