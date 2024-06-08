#include <stdio.h>
int main(void){
	int op1,op2;
	printf("Entrer le premier entier ");
	scanf("%d",&op1);
	printf("Entrer le socnd entrier ");
	scanf("%d",&op2);
	printf("Le plus grand est %d\n", plusgrand(op1,op2));
	return 0;
}

