#include <stdio.h>
int isPerfect(int n)
{
    int sum = 0;
    for (int i = 1; i <= n / 2; i++) 
    {
        if (n % i == 0)
            sum += i;
    }
    return sum == n;
}
int main() 
{
    int N, n;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) 
    {
        scanf("%d", &n);
        if (isPerfect(n))
            printf("%d ", n);
    }
    return 0;
}
