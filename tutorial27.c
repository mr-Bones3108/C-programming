// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     char a = 3;
//     char *ptra = &a;
//     printf("%d\n", ptra++);
//     printf("%d", ptra-2);
//     return 0;
// }

#include<stdio.h>
int main(int argc, char const *argv[])
{
    // char a = 3;
    // char *ptra = &a;
    // printf("%d\n", ptra++);
    // printf("%d", ptra-2);
    int arr[] = {1,2,3,4,5,6,67};
    printf("value  at position 3 of the array is  %d\n",arr[3]);
    printf("The address of the first element of the array is %d\n", &arr[0]);
    printf("The address of the second element of the array is %d\n", &arr[1]);

    return 0;