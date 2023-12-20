#include <stdio.h>

int main(){
	
	int n1, n2, n3, n4, temp;
	printf("Inserisci quattro interi: ");
	scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
	
	//ordino n1 e n2
	if (n1 > n2) {
		
		temp = n1;
		n1 = n2;
		n2 = temp;
		
		}
		
	//ordino n3 e n4
	if (n3 > n4){
		
		temp = n3;
		n3=n4;
		n4 = temp;
		
		}
	
	if(n1 < n3){
		printf("%d", n1);
		if(n3 < n2){
			printf("%d", n3);
			if(n2 < n4){
				printf("%d %d", n4, n2);
			} else {
					printf("%d %d", n2, n4);
				}
		} else {
				printf("%d %d %d", n2, n3, n4);
				}
	} else {
			printf("%d", n3);
			}
	if (n1 < n4) {
		printf("%d", n1);
		if(n2 < n4){
			printf("%d %d", n2, n4);
		} else{
			printf("%d %d", n4, n2);
			}
		} else {
			printf ("%d %d %d", n4, n1, n2);
			}

	
	
	return 0;
	}
