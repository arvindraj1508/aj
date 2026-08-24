#include <stdio.h>
int isPalindrome(int n)
{
    int original=n;
    int reverse=0,digit;
    while (n > 0)
    {
        digit = n % 10;
        reverse=reverse*10+digit;
        n=n/10;
    }
   return original==reverse;
}
int main()
{
    int n, i, arr[100];

    printf("Number of elements: ");
    scanf("%d", &n);
    printf("Enter the element:\n");
    for (i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i=0;i<n;i++)
    {
        if (!isPalindrome(arr[i]))
        {
            printf("not palindrome number: %d\n", arr[i]);
            return 0;
        }
    }
    printf("palindrome number only\n");
    return 0;
}
