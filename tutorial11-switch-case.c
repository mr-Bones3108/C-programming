#include<stdio.h>

int main(int argc, char const *argv[])
{
    int age, marks;
    printf("enter your age\n");
    scanf("%d", &age);

     printf("enter your marks\n");
     scanf("%d", &marks);


    switch (age)            
    {
    case 3 :
        printf("your age is 3\n");
        switch (marks)
        {
        case 45:
            printf("your marks are 45");
            break;
        
        default:
            printf("your marks are not 45");
        }
        break;
    case 13 :
        printf("your age is 13\n");
        break;
    case 24 :
        printf("your age is 24\n");
        break;
    
    default:
    printf("Age is not 3, 13 or 24\n");
        break;
    }
    return 0;
}
