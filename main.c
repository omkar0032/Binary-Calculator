#include <stdio.h>
#include <string.h>
#include "bc.h"

int main(){
	printf("\n------------------BINARY CALCULATOR------------------\n");
	printf("\nEnter \"exit\" to exit the program.\n");
	
	int isExitCalled = 0;
	char expr[500];
	List ans;

	do{
		printf("\n>> ");
		fgets(expr, 500, stdin);
		expr[strcspn(expr, "\n")] = '\0';

		if(!strcmp(expr, "exit")){
			isExitCalled = 1;
		}
		else if(!strncmp(expr, "sqr(", 4)){
			ans = handleFunctions(expr, 1);
			displayLL(ans);
			printf("\n");
			freeLL(&ans);
			ans = NULL;
		}     
		else{
			ans = solveExpr(expr);
			displayLL(ans);
                        printf("\n");
                        freeLL(&ans);
                        ans = NULL;
		}

	} while(!isExitCalled);
	
	return 0;
}
