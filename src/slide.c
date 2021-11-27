#include "slide.h"


void Conjunto1(){
    int reg[] = {10,2,7,5,3,9,16,4,11,1,6,23,14};
	Tree *raiz = CreateTree();
	Record r;

	for(int i = 0; i < 13; i++){
		r.key = reg[i];
		r.value = 1;
		insertTree(&raiz, r);
	}

    printf("Raiz:%d\tFilho esq:%d\tFilho dir:%d\n",raiz->reg.key, raiz->esq->reg.key,raiz->dir->reg.key);
	
	printf("\nRemovendo a chave 10\n");
	r.key = 10;
	removeTree(&raiz, &raiz, r);
	printf("\n");

	printf("Raiz:%d\tFilho esq:%d\tFilho dir:%d\n",raiz->reg.key, raiz->esq->reg.key,raiz->dir->reg.key);
	printf("\n");

	printf("\nRemovendo a chave 5\n");
	r.key = 5;
	removeTree(&raiz, &raiz, r);
	printf("\n");

	printf("Raiz:%d\tFilho esq:%d\tFilho dir:%d\n",raiz->reg.key, raiz->esq->reg.key,raiz->dir->reg.key);
	printf("\n");

	printf("\nRemovendo a chave 4\n");
	r.key = 4;
	removeTree(&raiz, &raiz, r);
	printf("\n");

	printf("Raiz:%d\tFilho esq:%d\tFilho dir:%d\n",raiz->reg.key, raiz->esq->reg.key,raiz->dir->reg.key);
	printf("\n");

	printf("\nRemovendo a chave 11\n");
	r.key = 11;
	removeTree(&raiz, &raiz, r);
	printf("\n");

	printf("Raiz:%d\tFilho esq:%d\tFilho dir:%d\n",raiz->reg.key, raiz->esq->reg.key,raiz->dir->reg.key);
	printf("\n");

	printf("\nRemovendo a chave 6\n");
	r.key = 6;
	removeTree(&raiz, &raiz, r);
	printf("\n");

	printf("Raiz:%d\tFilho esq:%d\tFilho dir:%d\n",raiz->reg.key, raiz->esq->reg.key,raiz->dir->reg.key);
	printf("\n");

	printf("METODO PRE ORDEM: { ");
	preordem(raiz);
	printf("}\n\n");
}

void Conjunto2(){
    int reg[] = {78,44,67,92,22,110,16,54,23,32,37};
	Tree *raiz = CreateTree();
	Record r;

	for(int i = 0; i < 11; i++){
		r.key = reg[i];
		r.value = 1;
		insertTree(&raiz, r);
	}
    
    printf("Raiz:%d\tFilho esq:%d\tFilho dir:%d\n",raiz->reg.key, raiz->esq->reg.key,raiz->dir->reg.key);
	
	printf("METODO PRE-ORDEM: { ");
	preordem(raiz);
  	printf("}\n\n");
}

void menu(){
	printf("\n1)Resultados do primeiro conjunto de dados");
	printf("\n2)Resultados do segundo conjunto de dados");
	printf("\n3)Sair\n");
}
