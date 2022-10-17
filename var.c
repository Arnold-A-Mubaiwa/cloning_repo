#include <stdio.h>
#include <stdarg.h>

int sum(int a, int b)
{
    return (a + b);
}

int main(void)
{
    printf("%d", sum(2, 3));
    return 0;
}