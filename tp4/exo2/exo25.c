#include<stdio.h>
#include<unistd.h> 
#include<stdlib.h>
#include<sys/types.h>
#include<signal.h>
/*Programme 5*/
int main() {
int p =fork();
if (p==-1) {printf("erreur \n");}
else if (p==0) { printf("i am %d \n" ,getpid());
while(1) {printf("hello \n");}}
else if (p>0) {
sleep(1);
printf("Le processus %d est stopé par le signal %d \n",p,SIGSTOP);
kill(p,SIGSTOP);
sleep(1);
printf("le processus %d peut reprendre après le signal %d \n",p,SIGCONT);
kill(p,SIGCONT);
sleep(1);
printf("Le processus %d est tué par le signal %d \n",p,SIGKILL);
kill(p,SIGKILL);}
return 0;}