#include <stdio.h>
#include <stdlib.h>

void push(myStack *stack, int n){
	
	if(checkStackStatus(stack->valore1)){
		
		stack->valore1 = n;
		
		}
		else if(checkStackStatus(stack->valore2)){
		
		stack->valore2 = n;
		
		}
		else if(checkStackStatus(stack->valore3)){
		
		stack->valore3 = n;
		
		}
		else if(checkStackStatus(stack->valore4)){
		
		stack->valore4 = n;
		
		}
		else if(checkStackStatus(stack->valore5)){
		
		stack->valore5 = n;
		
		}
		else if(checkStackStatus(stack->valore6)){
		
		stack->valore6 = n;
		
		}
		else if(checkStackStatus(stack->valore7)){
		
		stack->valore7 = n;
		
		}
		else if(checkStackStatus(stack->valore8)){
		
		stack->valore8 = n;
		
		}
		else if(checkStackStatus(stack->valore9)){
		
		stack->valore9 = n;
		
		}
		else if(checkStackStatus(stack->valore10)){
		
		stack->valore10 = n;
		
		}
	
	}


int pop(struct myStack *stack){
	
	
	
	}

bool checkStackStatus(int valore){
	
	bool allow;
	
	if(valore != NULL && valore != 0){
		
		allow = true;
		
		} else {
			
			allow = false;
			
			}
			
	return allow;
	}



int main(){
	
	struct myStack{
		
		int valore1;
		
		int valore2;
		
		int valore3;
		
		int valore4;
		
		int valore5;
		
		int valore6;
		
		int valore7;
		
		int valore8;
		
		int valore9;
		
		int valore10;
		}

	int array[] = {1,2,3,4,5,6,7,8,9,10};





	return 0;
}
