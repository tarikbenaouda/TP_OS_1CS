#include<stdio.h>
#include<unistd.h> 
#include<stdlib.h>
#include<sys/types.h>
#include<signal.h>
/*programme 2 */
void fin_attente() {
    printf("signal reçu arret de la pause");
}
int main() {
    printf("mon PID=%d\n",getpid());
    signal(SIGKILL,fin_attente);
    pause();
    printf("je vais faire mon travail\n");
    return 0;
}