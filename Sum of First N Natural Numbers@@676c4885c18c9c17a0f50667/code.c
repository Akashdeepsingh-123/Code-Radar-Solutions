
#include <stdio.h>
int sum1(int);
int sum1(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return sum1(n - 1) + n;
    }
}
int main()
{
    int n ;
    scanf("%d",&n);
    // int sum1(int n);
    printf("the sum of %d is %d ", n, sum1(n));
    return 0;
}