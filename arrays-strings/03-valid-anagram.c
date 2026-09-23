#include <stdio.h>
#include <string.h>

int main()
{
    char s[100], t[100];
    int count[256] = {0};
    int i;

    printf("Enter first string: ");
    scanf("%s", s);

    printf("Enter second string: ");
    scanf("%s", t);

    if (strlen(s) != strlen(t))
    {
        printf("Not Anagram\n");
        return 0;
    }

    for (i = 0; s[i] != '\0'; i++)
    {
        count[(unsigned char)s[i]]++;
        count[(unsigned char)t[i]]--;
    }

    for (i = 0; i < 256; i++)
    {
        if (count[i] != 0)
        {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");

    return 0;
}