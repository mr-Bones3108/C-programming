#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char s1[]= "harry";
    char s2[]= "ravi";
    char s3[54];
    printf("the strcmp for s1, s2 returned %d\n",strcmp(s1,s2)); 
    puts(strcat(s1, s2));
    printf("the length of s1 is %d\n", strlen(s1));
    printf("the length of s2 is %d\n", strlen(s2));
    printf("the reversed string s1 is: ");
    puts(strrev(s1)); 
     printf("the reversed string s2 is: "); 
    puts(strrev(s2)); 


    strcpy(s3, strcat(s1, s2));
    puts(s3);

    return 0;
}





// allow users to enter two strings and then concatenate them by saying 
//str1 is a friend of str2


#include<stdio.h>
int main(int argc, char const *argv[])
{
    char s1[10];
    char s2[10];
    return 0;
}
