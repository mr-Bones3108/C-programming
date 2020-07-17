#include<stdio.h>

int fib_recursive(int n)
{
    if (n==1 || n==2)
    {
        return n-1;
    }else
    {
        return fib_recursive(n-1)+fib_recursive(n-2);
    }
    return 0;
}

int fib_iterative(int n)
{
    int a = 0;
    int b = 1;

    for (int i = 0; i < n-1; i++)
    {
        b= a+b; // 1
         
        a= b-a; // 1
    }
    return a;
}



int main(int argc, char const *argv[])
{
    int number;
    printf("Enter the index to get the fibonacci series\n");
    scanf("%d", &number);
    printf("Enter Value of fibonacci number at the position no %d using iterative approch %d\n", number, fib_iterative(number) );
    printf("Enter Value of fibonacci number at the position no %d using recursive approch %d\n", number, fib_recursive(number) );
    return 0;
}

