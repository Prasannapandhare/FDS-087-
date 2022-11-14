#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node
{
    int  roll;
    char name[100];
    struct node *next;
};

void display(struct node *first)
{
    struct node *temp;
    temp=first;
    printf("\n");
    while(temp!=NULL)
    {
        printf("Name:%s\tRoll:%d\n",temp->name,temp->roll);
        temp=temp->next;
    }
}

void insert(struct node *first)
{
    struct node *temp;
    int d;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter Name new student:");
    scanf("%s",temp->name);
    printf("Enter Roll Number for new student:");
    scanf("%d",&d);
    temp->roll=d;
    temp->next=first;
    display(temp);
}

void delete(struct node *first)
{
    printf("Enter the name of a member to delete:");
    char name[100];
    scanf(" %s",name);
    struct node  *temp,*back;
    temp=first->next;
    back=first;
    while((strcmp(temp->name,name)) && temp->next!=NULL)
    {
        back=temp;
        temp=temp->next;
    }
    
    back->next=temp->next;
    free(temp);
    display(first);
}

void count(struct node *first)
{
    int count=0;
    struct node *temp;
    temp=first;
    while(temp!=NULL)
    {
        temp=temp->next;
        count++;
    }
    printf("Total members are %d\n",count);
}


void main()
{
    int d;
    //char name[100];
    struct node *first;
    struct node *second;
    struct node *third;
    first=(struct node*)malloc(sizeof(struct node));
    printf("Enter Name first student:");
    scanf("%s",first->name);
    printf("Enter Roll Number for first student:");
    scanf("%d",&d);
    first->roll=d;
    first->next=NULL;
    second=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter Name second student:");
    scanf("%s",second->name);
    printf("Enter Roll Number for second student:");
    scanf("%d",&d);
    second->roll=d;
    second->next=NULL;
    first->next=second;
    third=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter Name third student:");
    scanf("%s",third->name);
    printf("Enter Roll Number for third student:");
    scanf("%d",&d);
    third->roll=d;
    third->next=NULL;
    second->next=third;
    display(first);
    int ch,y;
    do
    {
    printf("\n1.Insert\n2.Delete.\n3.Count.\n");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:insert(first);
        break;
        
    case 2:delete(first);
        break;
        
    case 3:count(first);
        break;
        
    default:
        printf("Invalid");
    }   
    printf("1 to continue else 0:");
    scanf("%d",&y);
    }while(y!=0);
}
