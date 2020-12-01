#include<stdio.h>
int main()
{
int i, j, n;
printf("Enter number of rows: ");
scanf("%d",&n);
for(i = n; i >= 1; i--)
{
for(j = 1; j <= i; j++)
{
printf("* ");
}
// ending line after each row
printf("\n");
}
return 0;
}

// *
// **
// ***
// **** -> triangular pattern

// **** -> reverse triangular pattern
// ***
// **
// *