#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
		/*

ATIVIDADE I  - QUESTÃO 5

*/

int main()<%

	setlocale(LC_ALL, "Portuguese");
	
		 float salbruto, prestacao, porcent;
 
	printf("Informe o salario bruto: ");
		scanf("%f",&salbruto);

	printf("Informe o valor da prestação: ");
		scanf("%f",&prestacao);



	 porcent = salbruto * 0.30;
 
	 if (prestacao > porcent)
		printf("\nO empréstimo não pode ser concedido.\n");
		 
 		else
 		printf("O empréstimo pode ser concedido.\n");
%>
