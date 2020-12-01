// #include<stdio.h>

// void changeValue(int* address)
// {
//    *address = 345;
// }
// int main(int argc, char const *argv[])
// {
//     int a= 34 , b= 56;
//     printf("the value of a now is %d \n", a);
//     changeValue(&a);  
//     printf("the value of a now is %d \n", a);
//     return 0;
// }




// quick quiz :
// given two numbers a and b, add them then sub them and assign them to a & b using call by reference:-

// a= 4
// b= 3

// after running the function The value of a & b should be:
// a = 7
// b = 1





#include<stdio.h>

void add(int *x, int *y){
    int = a;
    a= a+b;
    return;
}

void sub(int *x, int *y){
    int = b;
    b=a-b;
    return;
}

int main(int argc, char const *argv[])
{
    int a=4 , b=3;
    printf("%d and %d\n", a,b);
    add(&a,&b);
    sub(&a,&b);
    printf("%d and %d\n", a,b);
    return 0;
}