#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    char stack[100];
    int top = -1;
    int i;
    int valid = 1;

    printf("Enter parentheses: ");
    scanf("%s", s);

    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
        {
            top++;
            stack[top] = s[i];
        }
        else if (s[i] == ')' || s[i] == ']' || s[i] == '}')
        {
            if (top == -1)
            {
                valid = 0;
                break;
            }

            if ((s[i] == ')' && stack[top] != '(') ||
                (s[i] == ']' && stack[top] != '[') ||
                (s[i] == '}' && stack[top] != '{'))
            {
                valid = 0;
                break;
            }

            top--;
        }
    }

    if (top != -1)
        valid = 0;

    if (valid)
        printf("Valid Parentheses\n");
    else
        printf("Invalid Parentheses\n");

    return 0;
}