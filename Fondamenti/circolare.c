/*Facendo uso di un array di cinque elementi interi, implementare una
 * semplice coda ciroclare, comprensiva dielle due funzioni push() e
 * pop(). Aggiungere a tali funzioni le tre ulteriori funzoni init_queue(),
 * is empty() e is_full() arre ad inizializzare e verificare lo stato della coda e la funzione print queue(), atta a stampare lo stato della stessa.
 * Disporre i prototipi delle funzioni in testa al codice e il corpo delle funzioni a valle del main()
 * Implementare un semplice programma principale che consenta di utilizzare la coda (inserendo e togliendo valori a discrezione)*/

#include "stdio.h"
#include "stdlib.h"
#define TRUE 1
#define FALSE 2

void push(int item);
void pop();
void initQueue();
int isEmpty();
int isFull();
void printQueue();

struct {
	int circ[6];
	int testa;
	int coda;
	}queue;
	


int main(){
	
	initQueue();
	
	push(1);
	printQueue();
	push(2);
	printQueue();
	push(3);
	printQueue();
	push(4);
	printQueue();
	push(5);
	printQueue();
	push(6);
	printQueue();
	
	pop();
	printQueue();
	pop();
	printQueue();
	pop();
	printQueue();
	pop();
	printQueue();
	pop();
	printQueue();
	pop();
	printQueue();
	
	
	return 0;
	}


void push(int item){
	
	if(isFull() == 1){
		
		printf("La coda e' piena!\n");
		
		} else {
			
			queue.circ[queue.coda]= item;
			queue.coda = queue.coda+1;
			}

	
	}
	
void pop(){
	
	if(isEmpty() == 1){
		
		printf("La coda e' vuota!\n");
		
		} else{
			
			printf("Pop dell' elemento %d\n", queue.circ[queue.testa]);
			
			
			queue.circ[0] = queue.circ[1];
			queue.circ[1] = queue.circ[2];
			queue.circ[2] = queue.circ[3];
			queue.circ[3] = queue.circ[4];
			queue.circ[4] = 0;
			queue.coda = queue.coda-1;
			}
	}
	
void initQueue(){
	
	queue.testa = 0;
	queue.coda = 0;
	
	}

int isEmpty(){
	
	if(queue.coda == 0){
		
		return 1;
		} else{
			
			return 0;
			}
	
	}

int isFull(){
	
	if(queue.coda == 5){
		
		return 1;
		} else{
			
			return 0;
			}
	
	
	return 0;
	}
	
void printQueue(){
	
	for(int i = 0; i < 5; i++){
		
		printf("%d\n", queue.circ[i]);
		
		
		}
		printf("END PRINT QUEUE\n");
	
	}
