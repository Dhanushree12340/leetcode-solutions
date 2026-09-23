#include <stdio.h>

int main()
{
    int nums[] = {2, 7, 11, 15};
    int n = 4;
    int target = 9;

    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                printf("[%d, %d]\n", i, j);
                return 0;
            }
        }
    }

    printf("No solution\n");

    return 0;
}