#include <stdio.h>

int main(void)
{

int a = 3;
int b = 5;
int c = 9;

 printf("%p \n", &a);
 printf("%p \n", &b);
 printf("%p \n", &c);

printf("\n");
/* printing address using pointer*/

int *A = &a;
int *B = &b;
int *C = &c;

 printf("%p \n", A);
 printf("%p \n", B);
 printf("%p \n", C);

printf("\n");
 
/* operations in pointers*/
return(0);
}
