#include <stdio.h>
#include <stdarg.h>

int sum(int a, int b)
{
    return (a + b);
}

// n = number of arguments to be in the function
// a is argument tno 1
int add(int n, int a, ...)
{
    va_list arg; //declare
    va_start(arg, a); //initializing

    int i;
    int answer = a;
    // int v = a;
    for(i=1; i<n; i++)
    {
        answer = answer + va_arg(arg, int);
    }

    va_end(arg);
    return answer;
}

int main(void)
{
    printf("sum = %d\n", sum(4, 3));
    printf("add = %d\n", add(3, 7, 2, 6));
    printf("add = %d\n", add(4, 12, 2, 150, -2));
    printf("add = %d\n", add(5, 5, 7, 9, 10, 11));
    printf("add = %d\n", add(2, 28, 14));

    return 0;
}

