#include <iostream>

using namespace std;

void mostrar(int *vet, int tam) {
  for(int i=0; i<tam; i++)
    printf("%d ", *vet++);
  printf("\n\n");
}

int main()
{
  int vet[] = {12, 32, 4, 6, 7, 19, 27, 34, 37, 16, 49, 69, 48};
    int tam = sizeof vet / sizeof *vet;

    printf("Array NAO ordenado\n");
    mostrar(vet, tam);

    for(int l=0; l< tam; l++){
      for(int j=l; j< tam; j++){
        if(vet[j] < vet[l]) {
          int temp = vet[l];
          vet[l] = vet[j];
          vet[j] = temp;
        }
      }
    }

    printf("Array ordenado\n");
    mostrar(vet, tam);

    return 0;
}
