#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node
{
    int data;
    char name[100];
    struct node *next;
    struct node *prev;
};

void insertS();
void insertM();
void deleteS();
void deleteM();
void deleteP();
void display();
void total();
void reverse();

struct node *head;

void main()
{
    int d;
    int n;
    int ch,y,pos;
    head=(struct node*)malloc(sizeof(struct node));
    printf("Enter PRN of President:");
    scanf("%d",&d);
    printf("Enter name of President:");
    scanf("%s",head->name);
    head->data=d;
    head->next=NULL;
    head->prev=NULL;
    insertS();
    do
    {
        printf("\nEnter the Choice:");
        printf("\n1.Insert Members.\n2.Delete President.\n3.Delete Member.\n4.Delete Secretory.\n5.Display.\n6.Count.\n7.Reverse.\n");
        printf("Choose:");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:printf("\nEnter number of Members to add:");
               scanf("%d",&n);
               for(int i=0;i<n;i++)
               {
                    insertM();
               }
               break;

        case 2:deleteP();
               break;
        
        case 3:printf("\nEnter the position:");
               scanf("%d",&pos);
               deleteM(pos);
               break;

        case 4:deleteS();
               break;

        case 5:display();
               break;

        case 6:total();
               break;
        
        case 7:reverse();
               break;

        default:
            printf("\n//WRONG CHOICE//");
            break;
        }
        printf("\nTo continue press 1 else 0:");
        scanf("%d",&y);
    }while(y!=0);
}

void insertS()
{
    struct node *end;
    end=(struct node*)malloc(sizeof(struct node));
    printf("Enter the PRN for Secratary:");
    scanf("%d",&end->data);
    printf("Enter name of the Secratary:");
    scanf("%s",end->name);
    end->next=NULL;
    end->prev=NULL;
    head->next=end;
    end->prev=head;
}
void display()
{
    struct node *temp;
    if(head==NULL)
        printf("Link list is empty\n");
    else
    {
        printf("\nList is:");
        printf("\n");
        temp=head;
        while(temp!=NULL)
        {
            printf("Name:%s\tPRN:%d\n",temp->name,temp->data);
            temp=temp->next;
        }
    }
}
void insertM()
{
    struct node *new;
    struct node *temp;
    temp=head->next;
    new=(struct node*)malloc(sizeof(struct node));
    printf("Enter PRN:");
    scanf("%d",&new->data);
    printf("Enter Name:");
    scanf("%s",new->name);
    new->next=NULL;
    new->prev=NULL;
    new->prev=head;
    new->next=temp;
    temp->prev=new;
    head->next=new;
}
void deleteS()
{
    struct node *temp;
    struct node *prv;
    prv=temp=head;
    while(temp->next!=NULL)
    {
        prv=temp;
        temp=temp->next;
    }
    free(temp);
    prv->next=NULL;
    printf("\nSecratary is deleted successfully.....");
}
void deleteM(int pos)
{
    struct node *temp,*p;
    temp=head;
    int i=1;
    while(i!=pos)
    {
        p=temp;
        temp=temp->next;
        i++;
    }
    p->next=temp->next;
    free(temp);
}
void deleteP()
{
    struct node *temp;
    temp=head;
    head=temp->next;
    free(temp);
    printf("\nPresident is deleted successfully....");
}
void total()
{
    int c=0;
    struct node *temp;
    temp=head;
    while(temp!=NULL)
    {
        temp=temp->next;
        c++;
    }
    printf("Number of members:%d",c);
}
void reverse()
{
    struct node *temp,*p;
    temp=head;
    while(temp!=NULL)
    {
        p=temp->prev;
        temp->prev=temp->next;
        temp->next=p;
        if(temp->prev==NULL)
        {
            head=temp;
        }
        temp=temp->prev;
    }
}
