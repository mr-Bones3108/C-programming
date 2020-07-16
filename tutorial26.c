#include<stdio.h>
//pointers
// int main(int argc, char const *argv[])
// {
//     printf("Lets learn about pointers\n");
//     int a=76;
//     int* ptra= &a;
//     printf("the address of pointer to a is %x\n", &ptra);
//     printf("the value of a is %p\n", *ptra);
//     return 0;
// }

//null-pointer

int main(int argc, char const *argv[])
{
    printf("Lets learn about pointers\n");
    int a=76;
    int *ptra= &a;
    int *ptr2 = NULL;
    printf("the address of pointer to a is %x\n", &ptra);
    printf("the value of a is %p\n", *ptra);
    printf("the address of some garbage is %p\n", *ptr2);
    

    return 0;
}