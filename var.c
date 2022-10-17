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
    va_list num; //declare
    va_start(num, n); //initializing

    int i;
    int answer = 0;

    for(i=1; i<n; i++)
    {
        answer = answer + va_arg(num, int);
    }

    va_end(num);
    return answer;
}

int main(void)
{
    printf("sum = %d\n", sum(4, 3));
    printf("add = %d\n", add(3, 3, 2, 6));
    return 0;
}

