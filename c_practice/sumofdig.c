#include <stdio.h>
int digitSum(int n)
{
    int sum=0;
    if (n<0)
       n=-n;
    while (n>0)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main()
{
    int n,i;
    printf("Enter number of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements:\n");
    for (i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Numbers with even digit sum:\n");
    for (i=0;i<n;i++)
    {
        if (digitSum(arr[i])%2==0)
        {
            printf("%d\n",arr[i]);
        }
    }
    return 0;
}
