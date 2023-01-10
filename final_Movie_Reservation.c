#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct tic
{
    int data;
    char name[100];
    struct tic *next;
    struct tic *prev;
};

void kantara();
void kgf();
void avatar();

void display();
void displayk();
void displayg();
void displaya();
void prmank();
void prmang();
void prmana();
void customerk();
void customerg();
void customera();
void cancelk();
void cancelg();
void cancela();

struct tic *headk;
struct tic *headg;
struct tic *heada;

void main()
{
    int ch,y;
    printf("------------------------------------------------");
    printf("\n...Welcome to Movie Ticket Reservation System...\n");
    printf("------------------------------------------------");
    P:
    printf("\n1.Kantara.\n2.KGF-2\n3.Avatar.\n");
    printf("Enter Movie Choice:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:kantara();
            break;

        case 2:kgf();
            break;

        case 3:avatar();
            break;

        default:
            printf("Invalid Choice..!");
    }
    printf("Press 1 to continue with movie slection else 0:");
    scanf("%d",&y);
    if(y==1)
    {
        goto P;
    }
    display();
}

void kantara()
{
    int ch,y,n;
    int data,c;
    char str[100];
    headk=(struct tic*)malloc(sizeof(struct tic));
    printf("------------------------------------------------");
    printf("\n...Welcome to Movie Ticket Reservation System...\n");
    printf("------------------------------------------------");
    printf("\nKANATRA MOVIE RESERVATION");
    printf("\nEnter Name of Owner:");
    scanf("%s",str);
    printf("Number of tickets booked by Owner:");
    scanf("%d",&data);
    headk->data=data;
    strcpy(headk->name,str);
    headk->next=NULL;
    headk->prev=NULL;
    prmank();
    Z:
    printf("1.Booking.\n2.Cancellation.\n3.Display.\n");
    printf("Enter Choice:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:printf("Enter number of customer to be added:");
            scanf("%d",&n);
            for(int i=0;i<n;i++)
            {
            customerk();
            }
            break;

        case 2:cancelk();
            break;

        case 3:displayk();
            break;

        default:
            printf("Invalid Choice..!");
    }
    printf("Press 1 to continue with Kantara movie else 0:");
    scanf("%d",&y);
    if(y==1)
    {
        goto Z;
    }
}

void kgf()
{
    int ch,y,n;
    int data,c;
    char str[100];
    headg=(struct tic*)malloc(sizeof(struct tic));
    printf("------------------------------------------------");
    printf("\n...Welcome to Movie Ticket Reservation System...\n");
    printf("------------------------------------------------");
    printf("\nKGF-2 MOVIE RESERVATION.");
    printf("\nEnter Name of Owner:");
    scanf("%s",str);
    printf("Number of tickets booked by Owner:");
    scanf("%d",&data);
    headg->data=data;
    strcpy(headg->name,str);
    headg->next=NULL;
    headg->prev=NULL;
    prmang();
    Z:
    printf("1.Booking.\n2.Cancellation.\n3.Display.\n");
    printf("Enter Choice:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:printf("Enter number of customer to be added:");
            scanf("%d",&n);
            for(int i=0;i<n;i++)
            {
            customerg();
            }
            break;

        case 2:cancelg();
            break;

        case 3:displayg();
            break;

        default:
            printf("Invalid Choice..!");
    }
    printf("Press 1 to continue with KGF-2 movie else 0:");
    scanf("%d",&y);
    if(y==1)
    {
        goto Z;
    }
}

void avatar()
{
    int ch,y,n;
    int data,c;
    char str[100];
    heada=(struct tic*)malloc(sizeof(struct tic));
    printf("------------------------------------------------");
    printf("\n...Welcome to Movie Ticket Reservation System...\n");
    printf("------------------------------------------------");
    printf("\nAVATAR MOVIE RESERVATION.");
    printf("\nEnter Name of Owner:");
    scanf("%s",str);
    printf("Number of tickets booked by Owner:");
    scanf("%d",&data);
    heada->data=data;
    strcpy(heada->name,str);
    heada->next=NULL;
    heada->prev=NULL;
    prmana();
    Z:
    printf("1.Booking.\n2.Cancellation.\n3.Display.\n");
    printf("Enter Choice:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:printf("Enter number of customer to be added:");
            scanf("%d",&n);
            for(int i=0;i<n;i++)
            {
            customera();
            }
            break;

        case 2:cancela();
            break;

        case 3:displaya();
            break;

        default:
            printf("Invalid Choice..!");
    }
    printf("Press 1 to continue with Avatar movie else 0:");
    scanf("%d",&y);
    if(y==1)
    {
        goto Z;
    }
}

void prmank()
{
    struct tic *newk;
    int data;
    char str[100];
    newk=(struct tic*)malloc(sizeof(struct tic));
    printf("\nEnter Name of Project-man:");
    scanf("%s",str);
    newk->data=1;
    strcpy(newk->name,str);
    newk->next=NULL;
    headk->next=newk;
    newk->prev=headk;
}
void prmang()
{
    struct tic *newg;
    int data;
    char str[100];
    newg=(struct tic*)malloc(sizeof(struct tic));
    printf("\nEnter Name of Project-man:");
    scanf("%s",str);
    newg->data=1;
    strcpy(newg->name,str);
    newg->next=NULL;
    headg->next=newg;
    newg->prev=headg;
}
void prmana()
{
    struct tic *newa;
    int data;
    char str[100];
    newa=(struct tic*)malloc(sizeof(struct tic));
    printf("\nEnter Name of Project-man:");
    scanf("%s",str);
    newa->data=1;
    strcpy(newa->name,str);
    newa->next=NULL;
    heada->next=newa;
    newa->prev=heada;
}

void customerk()
{
    struct tic *newk;
    newk=(struct tic*)malloc(sizeof(struct tic));
    printf("Enter Name of Customer:");
    scanf(" %s",newk->name);
    printf("Enter number of tickets customer want to book:");
    scanf("%d",&newk->data);
    newk->next=NULL;
    newk->prev=NULL;
    newk->next=headk->next;
    headk->next=newk;
    newk->prev=headk;
    newk->next->prev=newk;
}
void customerg()
{
    struct tic *newg;
    newg=(struct tic*)malloc(sizeof(struct tic));
    printf("Enter Name of Customer:");
    scanf(" %s",newg->name);
    printf("Enter number of tickets customer want to book:");
    scanf("%d",&newg->data);
    newg->next=NULL;
    newg->prev=NULL;
    newg->next=headg->next;
    headg->next=newg;
    newg->prev=headg;
    newg->next->prev=newg;
}
void customera()
{
    struct tic *newa;
    newa=(struct tic*)malloc(sizeof(struct tic));
    printf("Enter Name of Customer:");
    scanf(" %s",newa->name);
    printf("Enter number of tickets customer want to book:");
    scanf("%d",&newa->data);
    newa->next=NULL;
    newa->prev=NULL;
    newa->next=heada->next;
    heada->next=newa;
    newa->prev=heada;
    newa->next->prev=newa;
}

void cancelk()
{
    printf("Enter the name of a customer to delete : ");
    char member[20];
    scanf(" %s",member);
    struct tic  *temp,*back;
    temp=headk->next;
    back=headk;
    while((strcmp(temp->name,member)) && temp->next!=NULL)
    {
        back=temp;
        temp=temp->next;
    }
    if(temp->next==NULL)
    {
        printf("Customer is not in the list..\n");
    }
    else
    {
        back->next=temp->next;
        free(temp);
        printf("The selected customer has been deleted..\n");
    }
}
void cancelg()
{
    printf("Enter the name of a customer to delete : ");
    char member[20];
    scanf(" %s",member);
    struct tic  *temp,*back;
    temp=headg->next;
    back=headg;
    while((strcmp(temp->name,member)) && temp->next!=NULL)
    {
        back=temp;
        temp=temp->next;
    }
    if(temp->next==NULL)
    {
        printf("Customer is not in the list..\n");
    }
    else
    {
        back->next=temp->next;
        free(temp);
        printf("The selected customer has been deleted..\n");
    }
}
void cancela()
{
    printf("Enter the name of a customer to delete : ");
    char member[20];
    scanf(" %s",member);
    struct tic  *temp,*back;
    temp=heada->next;
    back=heada;
    while((strcmp(temp->name,member)) && temp->next!=NULL)
    {
        back=temp;
        temp=temp->next;
    }
    if(temp->next==NULL)
    {
        printf("Customer is not in the list..\n");
    }
    else
    {
        back->next=temp->next;
        free(temp);
        printf("The selected customer has been deleted..\n");
    }
}

void displayk()
{
    struct tic *temp;
    temp=headk;
    while(temp!=NULL)
    {
        printf("Name:%s",temp->name);
        printf("\t");
        printf("Tickets:%d",temp->data);
        printf("\n");
        temp=temp->next;
    }
}
void displayg()
{
    struct tic *temp;
    temp=headg;
    while(temp!=NULL)
    {
        printf("Name:%s",temp->name);
        printf("\t");
        printf("Tickets:%d",temp->data);
        printf("\n");
        temp=temp->next;
    }
}
void displaya()
{
    struct tic *temp;
    temp=heada;
    while(temp!=NULL)
    {
        printf("Name:%s",temp->name);
        printf("\t");
        printf("Tickets:%d",temp->data);
        printf("\n");
        temp=temp->next;
    }
}
void display()
{
    printf("\nFollowing are the details of Ticket confirmed:\n");
    printf("Kanatara Movie:\n");
    displayk();
    printf("KGF-2 Movie:\n");
    displayg();
    printf("Avatar Movie:\n");
    displaya();    
}
