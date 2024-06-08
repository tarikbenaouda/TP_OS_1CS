#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<stdlib.h>
int main (void) {
pid_t pid;
pid= fork () ;


if (pid== -1) {
    perror("creation processus impossible") ;
    exit(1) ;
}
if (pid!= 0) printf("Je suis le père, mon pid est %d\n", getpid());
else printf("Je suis le processus fils mon pid est %d\n",getpid());
for (int i = 0; i < 5; i++)
{
    printf("%d\n",i);
}


return 0 ;
}