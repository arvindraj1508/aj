#include <stdio.h>
#include <limits.h>

int main() {
    int n, i;
    int arr[100];
    int largest = INT_MIN, secondLargest = INT_MIN;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) 
    {
        if (arr[i] > largest) 
	{
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest) 
	{
            secondLargest = arr[i];
        }
    }
    if (secondLargest == INT_MIN)
        printf("Second largest element does not exist.");
    else
        printf("Second largest element = %d", secondLargest);
   return 0;
}
