#include <stdio.h>
#include <string.h>

int main()
{
    char line[20];
    int t = 1, m = 0, i = 0;
    printf("Enter string: ");
    fgets(line, sizeof(line), stdin);
    line[strlen(line) - 1] = '\0'; // Remove the newline character

    printf("mem\top\ta1\ta2\tres\n");

    for (i = 0; i < strlen(line) - 3; i++)
    {
        printf("\n(%d)\t%c\t%c\t%c\tt%d\n", m, line[i + 2], line[i + 1], line[i + 3], i);
        printf("\n(%d)\t%c\tt%d\t%c\tt%d\n", m + 1, line[i + 4], i, line[i + 5], i + 1);
        printf("\n(%d)\t%c\t%c\tt%d\n", m + 2, line[i], line[i - 1], i + 1);
    }

    return 0;
}