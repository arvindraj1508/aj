#include <stdio.h>
int countSetBits(unsigned int n)
{
    int count = 0;
    while (n != 0)
    {
        if (n & 1)
            count++;
        n = n >> 1;
    }
    return count;
}
int main()
{
    int N;
    unsigned int value;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%u", &value);
        if (countSetBits(value) == 4)
            printf("%u ", value);
    }
    return 0;
}
