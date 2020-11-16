#include <stdio.h>
#include <stdlib.h>

void ordenarCaracteres(char caracteresOrden[]);
void quitarVocales(char caracteresQuitar[]);

int main()
{
    char caracteresOrden [20]="algoritmo";
    printf("ORDENADO\n\n");
    printf("%s\n\n", caracteresOrden);
    printf("DESORDENADO\n\n");
    ordenarCaracteres(caracteresOrden);
    printf("%s\n", caracteresOrden);

    char caracteresQuitar[20]="democracia";
    printf("%s\n\n", caracteresQuitar);

    quitarVocales(caracteresQuitar);
    printf("%s\n", caracteresQuitar);

    return 0;
}

void ordenarCaracteres(char caracteresOrden []){

    char auxChar;

    for(int i=0; i<strlen(caracteresOrden) - 1;i++){
        for(int j=i+1; j<strlen(caracteresOrden);j++){
            if(caracteresOrden[i]>caracteresOrden[j]){

            auxChar = caracteresOrden[j];
            caracteresOrden[j] = caracteresOrden[i];
            caracteresOrden[i] = auxChar;
        }
     }
   }
}


void quitarVocales(char caracteresQuitar[])
{

   for(int i = 0; i < strlen(caracteresQuitar); i++)
    {
        if(caracteresQuitar[i] == 'a'||caracteresQuitar[i]=='e'||caracteresQuitar[i]=='i'||caracteresQuitar[i]=='o'||caracteresQuitar[i]=='u')
        {
            caracteresQuitar[i] = ' ';
        }
    }
}
