#include<stdio.h>
int main()
{
int x,y,choice;
int sum=0,sub=0,mul=0,div=0;
printf("Enter 1 : Addition\n");
printf("Enter 2 : Substraction\n");
printf("Enter 3 : Multiplication\n");
printf("Enter 4 : Division\n");
scanf("%d",&choice);
switch(choice)
{
case 1: printf("Enter Numbers:");
	scanf("%d %d",&x,&y);
	sum=x+y;
	printf("Addition is :%d\n",sum);
	break;
case 2: printf("Enter Numbers:");
	scanf("%d %d",&x,&y);
	sub=x-y;
	printf("Substraction is :%d\n",sub);
	break;
case 3: printf("Enter Numbers:");
	scanf("%d %d",&x,&y);
	mul=x*y;
	printf("Multipication is :%d\n",mul);
	break;
case 4: printf("Enter Numbers:");
	scanf("%d %d",&x,&y);
	div=x/y;
	printf("Division is :%d\n",div);
	break;
default:
printf("Choice is incorrect");
}
return 0;
}