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
    va_list num;
    va_start(num, a);

    int i;
    int answer = a;

    for(i=1; i<n; i++)
    {
        answer += va_arg(num, int);
    }

    va_end(num);
    return answer;
}
int main(void)
{
    printf("%d\n", sum(4, 3));
    printf("%d\n", add(4, 3, 2, 6));
    return 0;
}