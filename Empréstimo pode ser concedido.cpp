#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
		/*

ATIVIDADE I  - QUEST�O 5

*/

int main()<%

	setlocale(LC_ALL, "Portuguese");
	
		 float salbruto, prestacao, porcent;
 
	printf("Informe o salario bruto: ");
		scanf("%f",&salbruto);

	printf("Informe o valor da presta��o: ");
		scanf("%f",&prestacao);



	 porcent = salbruto * 0.30;
 
	 if (prestacao > porcent)
		printf("\nO empr�stimo n�o pode ser concedido.\n");
		 
 		else
 		printf("O empr�stimo pode ser concedido.\n");
%>
