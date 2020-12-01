#include<stdio.h>
void printStr(char str[]){
    int i=0;
    while (str[i]!='\0')
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}
int main(int argc, char const *argv[])
{
    // char str[] = {'N', 'I' , 'K' , 'H' , 'I' , 'L' , '\0'};
    char str[56];
    gets(str);
    printf("using custom function printStr\n");
    printStr(str);
    printf("Using printf %s\n", str);
    printf("Using puts: \n");
    puts(str);
    return 0;
}