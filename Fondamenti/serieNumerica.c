#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int n = 100, contacicli = 0;
	double somma = 0, somma2 = 0;
	
	for (double i = 1; i < n; i++){
		
		somma += (1/(4*i*i - 1));
		
		if(somma-somma2 < 0.0001){
			
			printf("Il programma si chiudera'\n");
			printf("Numero di cicli svolti con successo: %d", contacicli);
			return 0;
			
			}
		
		somma2 = somma;
		contacicli ++;
		
		}
	
	printf("La somma e': %lf", somma);
	
	return 0;
	}
