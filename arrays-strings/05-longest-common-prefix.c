#include <stdio.h>
#include <string.h>

int main()
{
    char str[3][100] = {"dog", "racecar", "car"};
    int n = 3;
    int i, j;

    for (j = 0; str[0][j] != '\0'; j++)
    {
        for (i = 1; i < n; i++)
        {
            if (str[i][j] != str[0][j] || str[i][j] == '\0')
            {
                str[0][j] = '\0';
                break;
            }
        }

        if (str[0][j] == '\0')
            break;
    }

    printf("Longest Common Prefix: %s\n", str[0]);

    return 0;
}