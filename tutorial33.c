#include <stdio.h>

void starPattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void reversestarPattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= rows - i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main(int argc, char const *argv[])
{
    int rows, type;
    printf("enter 0 for star pattern 1 for reversed star pattern\n");
    scanf("%d", &type);

    switch (type)
    {
    case 0:
        printf("enter the number of rows you want to print\n");
        scanf("%d", &rows);
        starPattern(rows);
        break;

    case 1:
        printf("enter the number of rows you want to print\n");
        scanf("%d", &rows);
        reversestarPattern(rows);
        break;

    default:
        printf("you have entered an invalid choice try again");
        break;
    }

    return 0;
}