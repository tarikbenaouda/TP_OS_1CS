#include<stdio.h>
#include<unistd.h> 
#include<stdlib.h>
#include<sys/types.h>
#include<signal.h>

void alarme_handler() {
    printf("10 secondes écoulées\n"); 
}
int main() {
    signal(SIGALRM,alarme_handler);
    alarm(10);
    pause();
    return 0;
}