#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 100
int main(){

int k;
int v[MAX+1];
int i;

for(i=0; i<=MAX; i++){
	
	v[i]=0;
	
	}

i = 2;
while(i<=sqrt(MAX)){
	
	if(v[i]!=1){
		
		for(k = 2; k<=((MAX)/i); k++ ){
			
			v[i*k]=1;
			
			i++;
			
			}
		}
	}
	
	
	for(i = 2; i<(MAX+1); i++){
		
		if(v[i] != 1){
			
			printf("%d ", i);
			
			}
		}





return 0;
}
