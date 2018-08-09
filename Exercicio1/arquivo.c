#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

double media(int* lista, int tamanho);
double desvio(int *lista, int tamanho, double media);

 int main(int argc, char const *argv[]) {

if (argc == 1) {
  printf("Sem argumentos para mostrar.\n");

}
else {
  int tamanhoArray = atoi(argv[1]);

int *lista = (int*) malloc(tamanhoArray * sizeof(int));
 srand(time(NULL) );

 for(int i = 0; i<tamanhoArray; i++) {
   lista[i] = rand()%11;
 }


double mediaVar = media(lista, tamanhoArray);

double desvioVar = desvio(lista, tamanhoArray,mediaVar);

printf("A Média calculada é de: %g, e o seu Desvio Padrão é de %g\n",mediaVar,desvioVar );

free(lista);
}

  return 0;
}

double media (int *lista, int tamanho) {
double auxMedia=0;

for(int i = 0; i < tamanho; i++){
auxMedia += lista[i];
}
auxMedia = auxMedia/tamanho;

  return auxMedia;
}

double desvio (int *lista, int tamanho, double media) {
double auxDiferenca=0;

for(int i = 0; i <tamanho; i++){
  auxDiferenca = auxDiferenca + pow((lista[i]-media),2);
}
auxDiferenca = sqrt(auxDiferenca/tamanho);
  return auxDiferenca;
}
