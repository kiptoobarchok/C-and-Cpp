#include <stdio.h>

/**
 * main- entry point
 * Return: 0
 * 
*/

int main(void)
{
    int i = 3;
    char c = 'a';
    float d =  2.12;
    
    int *ptr = &i;
    char *cc = &c;
    float *dd = &d;

    printf("\nAddress of i = %p", &i);
    printf("\nvalue of i = %d\n", i);
    printf("i = %d\n", *(&i));
    printf("Address of i = %p\n", ptr);

    printf("\nvalue of c = %s\n", *(&cc));
    printf("addr. of d = %p\naddr of c = %p\n", dd, &c);

    return (0);
}