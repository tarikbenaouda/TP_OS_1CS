#include<stdio.h>
#include<unistd.h>

int main(){
    int p;
    p = fork();
    
    if (p == 0) p = fork();
    else p = fork();
    return 0;
}