#include<stdio.h>
#include<unistd.h>
/*programme 1*/
int main () {
int p;
p=fork();
if (p==-1) { printf("ERREUR \n");}
else if (p>0) { printf(" Je suis le père mon pid %d et j'ai créé le fils %d\n",getpid(),p);}
else if (p==0) { printf("Je suisle fils mon PID = %d et je vaisexécuter le code suivant\n",getpid());
char *const arg[] = {"ls","-l","/",NULL};
//execv("/bin/ls",arg);
// execlp("ls","ls","-l","/",NULL);
execvp("ls",arg);}

return 0; }