#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
/*programme 2*/
int main () {
int p;
p=fork();
if (p==-1) { printf("ERREUR \n");}
else if (p>0) { printf(" je suis le pere mon pid %d et j’ai créé le fils\n",getpid(),p);}
else if (p==0) { printf("je suis le fils mon PID = %d et je vais exécuter le code suivant\n",getpid());
char *envp[] = {"HOME=/home/user",NULL};
char *argv[] = {"ls","-l","--color",NULL};
//execve("/bin/ls",argv,envp);
execle("/bin/ls","ls","-l","--color",NULL,envp);
}
return 0; }