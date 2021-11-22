#include "arquivos.h"


int main(){
	int opc;

	do
	{
		printf("\n1)Resultados do primeiro conjunto de dados");
		printf("\n2)Resultados do segundo conjunto de dados");
		printf("\n3)Sair");
		scanf("%d",&opc);

		switch (opc)
		{
		case 1:
			Conjunto1();
		break;
		
		case 2:
			Conjunto2();
		break;
		
		default:
			printf("[ERRO]: Opção Invalida!!");
			break;
		}
	}while (opc != 3);
	
	return 0;
}