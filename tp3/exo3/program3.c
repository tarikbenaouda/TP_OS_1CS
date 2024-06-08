#include <stdio.h>
#include <unistd.h>

int main () {
    if (fork() && (!fork())) {
        if (fork() || fork()) fork();
    };
    return 0;
}