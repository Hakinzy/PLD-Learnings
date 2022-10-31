#include <stdio.h>
// printing the addresses of variables using pointer

int main ()
{
int a, b, c;
int *ptrA = &a; 
int *ptrB = &b;
int *ptrC = &c;


printf("address of a is %p\n", ptrA);
printf("address of b is %p\n", ptrB);
printf("address of c is %p\n", ptrC);

return 0;
}
