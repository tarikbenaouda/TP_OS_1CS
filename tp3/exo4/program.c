#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <stdlib.h>

int main () {
    for (int i = 0; i < 4; i++)
    {
        switch (fork())
        {
        case -1:
            break;
        case 0:
            for(int j = 1; j < 4; j++){
                printf("%d",j);
            }
            printf("\n");
            break;
        default:   
            return 0;
        }
        
    }
      return 0;
}