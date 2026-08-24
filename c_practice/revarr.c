#include <stdio.h>
int reverse(int n)
{
    int rev=0,digit;
    while(n!= 0)
    {
        digit=n%10;
        rev=rev*10+digit;
        n=n/10;
    }
    return rev;
}
int main()
{
    int n,i,count = 0;
    printf("number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements:\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n;i++)
    {
        if(arr[i] == reverse(arr[i]))
        {
            count++;
        }
    }
    printf("number unchanged = %d\n", count);
    return 0;
}
