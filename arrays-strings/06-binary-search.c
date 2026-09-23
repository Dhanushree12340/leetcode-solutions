#include <stdio.h>

int main()
{
    int arr[] = {1, 3, 5, 7, 9, 11};
    int n = 6;
    int target = 7;

    int low = 0;
    int high = n - 1;
    int mid;
    int found = -1;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == target)
        {
            found = mid;
            break;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    printf("Target index: %d\n", found);

    return 0;
}