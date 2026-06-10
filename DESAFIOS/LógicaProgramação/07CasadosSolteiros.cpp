/*
	Name: CasadosSolteiro.cpp
	Author: Alef Castro 
	Date: 07/10/25 09:54
	Description: Programa para ler e contabilizar HOMENS e MULHERES, solteiro e casados.
*/
#include <stdio.h>
int main()
{
	char sexo, casado; //char é resposta
	int casadosM, solteirosM, casadosH, solteirosH;

	casadosM = solteirosM = casadosH = solteirosH = 0;
	int cont = 0;
	
	puts("Casado ou solteiro?\n");
	
	while (cont < 10)
	{
		printf("Sexo (M / F): "); scanf(" %c", &sexo);
		printf("Casado (S / N): "); scanf(" %c", &casado);
		
		if(sexo == 'M' || sexo == 'm')
			if(casado == 'S' || casado == 's')
				casadosH = casadosH + 1;
			else
				solteirosH = solteirosH + 1;
		else // é mulher
			if(casado == 'S' || casado == 's')
				casadosM = casadosM + 1;
			else
				solteirosM = solteirosM +1;
	cont++;
	}//fim da repetição

	printf("Qtde de Homens casados: %d", casadosH);
	printf("\nQtde de Homens solteiros: %d", solteirosH);
	printf("\nQtde de Mulhers casadas: %d", casadosM);
	printf("\nQtde de Mulhers solteiras %d", solteirosM);

    return 0;
}//fim do programa

