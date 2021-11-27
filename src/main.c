#include "slide.h"


int main(){
	int opc;
  	
	do
	{	
		menu();
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
			break;
		}
	}while (opc != 3);
	
	return 0;
}