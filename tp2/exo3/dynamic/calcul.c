#include <stdio.h>
#include "calcul.h"
int main(void){
	int op1 = 4;
	int op2 = 7;
    char operator;
	
    printf("Entrer le operateur '-' ou '+': ");
	scanf("%d",&operator);
	int sub = s(op1,op2);
	int add = a(op1,op2);
    if (operator == 1)
	    printf("soustraction %d\n",sub );
    else if (operator == 2)
        printf("addition %d\n", add);
	return 0;
}