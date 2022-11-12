#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void create();
void sort(); 
void display(); 
struct city
{
    int data;
    char city[100];
    struct city* next;
};

struct city* head;

int main()
{
    int d;
    char str[100];
    head=(struct city*)malloc(sizeof(struct city));
    printf("Enter data in head node:");
    scanf("%d",&d);
    printf("Enter name of the city:");
    scanf(" %s",str);
    head->data=d;
    strcpy(head->city,str);
    head->next=NULL;
    create();
    printf("\n");
    sort();
    printf("Sorted Data:\n");
    display();
    return 0;
}

void create()
{
    int n;
    printf("\nEnter the number of nodes tobe added: ");
    scanf("%d", &n);
    int d;
    char str[100];
    struct city* new,*temp;
    temp=head;
    for (int i = 1; i <= n; i++)
    {
        new= (struct city*)malloc(sizeof(struct city));
        printf("\nEnter data:");
        scanf("%d", &d);
        printf("Enter name of the city:");
        scanf(" %s",new->city);
        new->data= d;new->next=NULL;
        temp->next= new;temp=temp->next;
    }
}

void sort()
{
    struct city* p = head;
    struct city* q;
    char r[100];
    int temp;
    while (p != NULL)
    {
        q= p->next;
        while (q != NULL)
        {
            if (p->data>q->data)
            {
                temp=p->data;
                p->data=q->data;
                q->data=temp;
                strcpy(r,p->city);
                strcpy(p->city,q->city);
                strcpy(q->city,r);
            }
            q = q->next;
        }
        p = p->next;
    }
}

void display()
{
    struct city* temp;
    temp = head;
    while (temp != NULL)
    {
        printf(" %s <==>%d\n",temp->city,temp->data);
        temp = temp->next;
    }
}
