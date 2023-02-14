#include <stdio.h>
#include <string.h>

int main()
{
    char text[100], ch;
    int i, count = 0;

    printf("Enter a line of text: ");
    fgets(text, 100, stdin);

    printf("Enter a character to count: ");
    scanf("%c", &ch);

    int length = strlen(text);
    for (i = 0; i < length; i++)
    {
        if (text[i] == ch)
            count++;
    }

    printf("The character '%c' occurs %d times in the given text.\n", ch, count);
    return 0;
}
