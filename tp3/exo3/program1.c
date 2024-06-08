#include <stdio.h>
#include <unistd.h>

int main () {
    int p,i;
    int n = 3;
    for (i=0;i<n;i++){
        p = fork();
        if (p == 0) printf("i: %d pid: %d\n",i,getpid());  
    }
    return 0;
}
