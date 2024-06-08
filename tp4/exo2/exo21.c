#include<stdio.h>
#include<unistd.h> 
#include<stdlib.h>
#include<sys/types.h>
#include<signal.h>
/*programme 1 */
void erreur(){
printf("erreur division par zero\n");
exit(1);
}
int main(){

    signal(SIGFPE,erreur);
    int p;
    int z=0;
    printf("Chiffre \n");
    scanf("%d",&p);
    p=p/z;
    return 0;
}