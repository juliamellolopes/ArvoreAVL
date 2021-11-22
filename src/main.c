#include "avl.h"

int main(){
	int reg[] = {6,4,5,8,7};
	Tree *raiz = CreateTree();
	Record r;

	for(int i=0; i<5; i++){
		r.key = reg[i];
		r.value = 1;
		insertTree(&raiz, r);
	}

	printf("Raiz:%d\tFilho esq:%d\tFilho dir:%d\n",raiz->reg.key, raiz->esq->reg.key,raiz->dir->reg.key);
	
	printf("\nRemovendo a chave 5\n");
	r.key = 5;
	removeTree(&raiz, &raiz, r);
	printf("\n");

	printf("Raiz:%d\tFilho esq:%d\tFilho dir:%d\n",raiz->reg.key, raiz->esq->reg.key,raiz->dir->reg.key);
	printf("\n");
	
	
	return 0;
}