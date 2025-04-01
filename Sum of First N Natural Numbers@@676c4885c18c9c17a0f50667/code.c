
#include <stdio.h>
int sum1(int);
int sum1(int N)
{
    if (N == 1)
    {
        return 1;
    }
    else
    {
        return sum1(N - 1) + N;
    }
}
int main()
{
    int N ;
    scanf("%d",&N);
    // int sum1(int n);
    printf(" %d " sum1(N));
    return 0;
}