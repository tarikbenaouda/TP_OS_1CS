#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/wait.h>

int main () {

pid_t p1=fork ();


if (p1==0){
    printf("Fils p1=%d\n",getpid());
    sleep(10);
    printf("P1 quitte \n");
    return 0;
}
pid_t pid1 = wait(NULL) ;


if  (pid1 ==-1) exit(EXIT_FAILURE);
else if (pid1>0) printf("pid1=%d\n",pid1);


return 0;
}