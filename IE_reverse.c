#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],len=0,i;
    printf("Enter the String:");
    gets(str);
    printf("Entered String is:%c",str);
    while(str[len]!='\0')
    {
        len++;
    }
    printf("\nLength of the string is %d.",len);
    int n=len;
    printf("\nReversed String is:");
    for(i=n-1;i>=0;i--)
    printf("%c",str[i]);
    return 0;
}
