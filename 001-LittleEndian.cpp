#include <stdio.h>

int main()
{
    int a = 0;
    char *x;
    x = (char *) &a;
    x[0] = 1;
    x[1] = 2;
    x[2] = 2;
    
    printf("The value of a is %d \n", a);

    return 0;

}