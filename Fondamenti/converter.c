#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int numero;
	
	printf("Inserisci un numero\n");
	scanf("%x", &numero);
	
	printf("Esadecimale: %x\n", numero);
	printf("Ottale: %o\n", numero);
	printf("Decimale: %d\n", numero);

	return 0;
}
