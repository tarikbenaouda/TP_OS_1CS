#include<stdio.h>
#include<unistd.h>

int main(){
    int code_retour;
    code_retour = fork();
    switch (code_retour){
        case -1 :
            printf("probleme lore de la creation du processus\n");
            break;
        case 0 :
            printf("Je suis le processus fils\n");
            break;
        default:
            printf("Je suis le processus pere et je viens de creer le processus fils dont le pid est %d\n",code_retour);
            break;
    }
    return 0;
}