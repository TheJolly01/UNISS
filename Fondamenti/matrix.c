#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define DIM 5

int mat[DIM][DIM];

int verificaProprieta(int c, int r, int k){

int ok = 1;
int i = r;
while(i<r+k-1) {

	if(mat[i][c]>mat[i+1][c]){
	ok = 0;
	}
	i++;
}
return(ok);
}


int main(){
	
	int col, row, k;
	
	printf("Lunghezza cercata: ");
	scanf("%d, &k");
	
srand((double)time(NULL));

for(row=0; row < DIM; row++){
	for(col=0; col<DIM; col++){
		
		mat[row][col] = rand() % (DIM*DIM);
		printf("%3d", mat[row][col]);
		
		}
		printf("\n");
	
	
	} 
	
	for(int col = 0; col < DIM; col++)
		for(int row=0; row <=DIM-k; row++)
		if(verificaProprieta(col, row, k))
			printf("ok in posizione %d %d", )
	
	
	
	
	
	
	
	return 0;}
