/* Programme phases de compilation */
#include <stdio.h>
#include <stdlib.h>
#include "myheader.h"
#define MAX 12
int ab = 3;
const int cn = 5;
extern int vex;
int main()
{
int xyz; /* declaration de xyz */
xyz = MAX;
printf("Bonjour : %d\n", ab + cn + vex + xyz);
printf("Bonjour : %d\n",vex);
exit(EXIT_SUCCESS); }