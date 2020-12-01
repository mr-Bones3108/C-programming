// //By declaring array as the parameter in the function

// #include <stdio.h>

// int func1(int array[])

// {
//     for (int i = 0; i < 6; i++)
//     {
//         printf("the value at %d is %d\n",i,array[i]);
//     }

// //array[0]=453; // very important point that if you change any value here,
// // it gets reflected in main()

//     return 0;

// }

// int main()
// {
//     int arr[] = {23, 4, 5, 7, 9, 8};
//     printf("the value at index 0 is %d\n", arr[0]);
//     func1(arr);
//      printf("the value at index 4 is %d\n", arr[4]);
//     return 0;
// }

// //by passing array's base address to the function

// #include <stdio.h>

// int func1(int array[])

// {
//     for (int i = 0; i < 4; i++)
//     {
//         printf("the value at %d is %d\n", i, array[i]);
//     }
//     return 0;
// }

// void func2(int* ptr)
// {
//     for (int i = 0; i < 4; i++)
//     {
//         printf("the value at %d is %d\n", i, *(ptr + i));
//     }
//     *(ptr + 2) = 6534;
// }

// int main()
// {
//     int arr[] = {23,13,3,4};
// func2(arr);
// func2(arr);
//     return 0;
// }

// multidimension arry to pass in functon

#include <stdio.h>

int func1(int array[])

{
    for (int i = 0; i < 4; i++)
    {
        printf("the value at %d is %d\n", i, array[i]);
    }
    return 0;
}

void func2(int *ptr)
{
    for (int i = 0; i < 4; i++)
    {
        printf("the value at %d is %d\n", i, *(ptr + i));
    }
    *(ptr + 2) = 6534;
}

void func3(int arr[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("the value at %d, %d is %d\n", i, j, arr[i][j]);
        }
    }
}

int main()
{
    int arr[][2] = {{3, 14}, {8, 12}};
    func3(arr);
    return 0;
}
