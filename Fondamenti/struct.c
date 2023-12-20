#include <stdio.h>
#include <stdlib.h>


struct art{

char nome[31];
int categoria;
float prezzo;

};
	
	
int categoriaArticolo(){
		
	int catArticolo;
	
	printf("Inserisci la categoria dell'articolo\n");
	scanf("%d", &catArticolo);
	
	return catArticolo;
	
	}
	
	
float prezzoArticolo(){
		
	float prArticolo;
	
	printf("Inserisci il prezzo dell'articolo\n");
	scanf("%f", &prArticolo);
	
	return prArticolo;
	
	}

int main(){

int nArticoli;


printf("Quanti articoli vuoi inserire?\n");
scanf("%d", &nArticoli);

struct art articoli[nArticoli];

for(int i = 0; i<nArticoli; i++){
	
	
	printf("Inserisci il nome dell'articolo\n");
	scanf("%s", articoli[i].nome);
	articoli[i].categoria = categoriaArticolo();
	articoli[i].prezzo = prezzoArticolo();
	}
	
for(int i = 0; i<nArticoli; i++){
	
	printf("Nome: %s\n", articoli[i].nome);
	printf("Categoria: %d\n", articoli[i].categoria);
	printf("Prezzo: %.2f\n", articoli[i].prezzo);
	printf("\n------------------\n");
	}

return 0;
}
