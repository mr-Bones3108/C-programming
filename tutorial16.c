#include<stdio.h>

int main(int argc, char const *argv[])
{
    printf("Hello World\n");
    int i, age;
    for (i=0; i<10; i++){
    printf("%d\n enter your age\n", i);
        scanf("%d", &age);
    //     if (age>10)
    // {
    //     break;
    // }
    if(age>10)
    {
        continue;
    }
    printf("we have not cross any cont. statements\n");
    printf("we have not cross any cont. statements\n");
    printf("we have not cross any cont. statements\n");
    printf("Nikhil is good boy\n");
      }
    return 0;
}   