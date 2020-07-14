#include<stdio.h>
int sum(int a , int b); 
void printstart(int n)

{
    for (int i = 0; i < n; i++)
    {
      printf("%c", '*');
    }
    
    
}

int takenumber(){
    int i;
    printf("Enter a number\n");
    scanf("%d", &i);
    return i;
}
    
int main(int argc, char const *argv[])

{
    int a,b,c ;
    a=9;
    b=87;
    c=sum(a,b);
    // printstart(7);
    c=takenumber();
    // printf("This sum is %d\n", c);
    printf("the number entered is %d \n", c);
    return 0;
}

int sum(int a, int b)
    {
        return a + b;
    }
