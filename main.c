#include <stdio.h>
#include <stdlib.h>
int buscaBin(int vet[400], int elem, int inf, int sup){
    int meio = (inf+sup)/2;
    if(inf == sup && elem != vet[sup]){ //se a busca terminar e o elemento nao for localizado
        return -1;
    }
    if(elem == vet[meio]){
        return meio;
    }
    else if(elem < vet[meio]){ //se o elemento for menor que o elemento do meio
        return buscaBin(vet, elem, inf, meio-1); //entao  chama a funcao novamente desta vez com o limite superior sendo o numero antes do meio
    }
    else{
        return buscaBin(vet, elem, meio+1, sup);
    }
}

int main()
{
    int i, pos, vet[400], elem;
    for(i=0;i<400;i++){
        vet[i] = i;
    }

    printf("Elemento a ser procurado de 1 a 400 = ");
    scanf("%d", &elem);

    pos = buscaBin(vet, elem, 0, 399);

    if(pos == -1){
        printf("Elemento nao encontrado");
    }
    else{
        printf("Posicao = %d", pos);
    }
    return 0;
}
