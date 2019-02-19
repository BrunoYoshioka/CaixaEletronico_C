#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // Biblioteca necess�rio para usar o SETLOCALE()
 
int main() {
 
    int notas[] = {100, 50, 20, 10}; 
	int saque = 0, t = 0;
	
	 setlocale(LC_ALL, "Portuguese");      // Instru��o usada para configurar o idioma Portugu�s 
	
	scanf("%d",&saque);
	printf("\nVoc� sacou %d\n",saque);
	
	if (saque <= 0) printf("\nO valor n�o pode ser negativo ou 0");
	else if (saque % 10 == 0)
	do{
		if((saque / notas[t]) > 0)
			printf("\n%d nota(s) de R$ %d,00",saque/notas[t],notas[t]);
		if(saque >= notas[t])
			saque -= notas[t] * (saque/notas[t]);
	} while(notas[t++]!= 1);
	else printf("\nErro de notas indispon�veis");
		
		
    return 0;
}
