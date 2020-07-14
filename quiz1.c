#include <stdio.h>


int main()
{
    int x;
    printf("which subject's quiz you have given");

    printf(" \n if maths then enter 1 \n if science then enter 2 \n if both then enter 3 \n :");

    scanf("%d",&x);

    if (x==1) 
    {
        printf("  you have given maths quiz\n");
        printf(" you were passed\n");
        printf(" you got 15 rupee\n");
    }

    if (x==2)
    {
        printf(" you have given science quiz\n\n");
        printf(" you were passed\n");
        printf(" you got 15 rupee\n");
        
    }
    
    if (x==3)
    {
        printf(" you have given both quiz\n");
        printf(" you were passed\n");
        printf(" you got 45 rupee\n");
    }
    

    return 0;

}

