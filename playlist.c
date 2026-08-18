#include <stdio.h>
#include <stdlib.h>

int var = 6;
int* ppt;

int main(){
ppt =  malloc(sizeof(int)*3);
*ppt = 12;
*(ppt+sizeof(int)) = 15;
printf("%i\n",var);
printf("%u\n", &ppt);
printf("%i\n",*ppt);
printf("%i\n",*ppt+sizeof(int));
printf("%i", sizeof(int));
free(ppt);
}