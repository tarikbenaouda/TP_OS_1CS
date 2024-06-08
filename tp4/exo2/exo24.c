#include<stdio.h>
#include<unistd.h> 
#include<stdlib.h>
#include<sys/types.h>
#include<signal.h>
/*programme 4 */
int k;
void segv(){
    printf("Signal SIGSEGV %d Reçu, %d a provoqué la violation de mémoire\n",SIGSEGV,k);
    exit(EXIT_FAILURE);
}
int main() {
    signal(SIGSEGV,segv);
    char *buffer[2]={"Hello1","Hello2"};
    for (k=0;;k++) {
    printf("%s num %d\n",buffer[k],k);
    }
    return 0;
}