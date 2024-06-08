#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/wait.h>

int main () {

pid_t pid1, pid2;
int status;


pid1 = fork();
if (pid1 < 0){
    printf("Can't create first child :(\n");
    return 1;
} else if (pid1 == 0){
    sleep(4);
    printf("Child 1 (PID=%d) : exec terminated :)\n",getpid());
    return 0;
}

pid2 = fork();
if (pid2 < 0){
    printf("Can't create second child :(\n");
    return 1;
} else if (pid2 == 0) {
    sleep(10);
    printf("Child 2 (PID=%d) : exec terminated :)\n",getpid());
    return 0;
}

waitpid(pid1,NULL,0);
printf("Parent process (PID=%d) : Child 1 (PID=%d) terminated.\n",getpid(),pid1);

waitpid(pid2,NULL,0);
printf("Parent process (PID=%d) : Child 2 (PID=%d) terminated.\n",getpid(),pid2);

return 0;
}