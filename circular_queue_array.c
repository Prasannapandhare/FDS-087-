#include<stdio.h>
#include<stdlib.h>
#define max 5

int s[max];
int front=-1,rear=-1;

void enqueue()
{
    int d;
    printf("Enter element:");
    scanf("%d",&d);
    
    if(front==0 && rear==max-1 || (rear+1)%max==front)
    {
        printf("Queue is full.");
    }
    else
    {
        if(front==-1)
        {
            front=rear=0;
            s[rear]=d;
        }
        else if(rear==max-1 && front!=0)
        {
            rear=(rear+1)%max;
            s[rear]=d;
        }
        else
        {
            rear=(rear+1)%max;
            s[rear]=d;
        }
    }
}
int dequeue()
{
    int p;
    if(front==-1)
    {
        printf("Queue is empty.");
    }
    else
    {
        p=s[front];
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        if(front==max-1)
        {
            front=(front+1)%max;
        }
        else
        {
            front=(front+1)%max;
        }
    }
    return p;
}
void display()
{
    int i;
    if(front==-1)
    {
        printf("Empty Queue.");
    }
    else
    {
        printf("Elements in the Queue:\n");
        for(i=front;i<=rear;i=(i+1)%max)
        {
            printf("%d\t",s[i]);
        }
    }
}

void main()
{
    int ch;
    do
    {
        printf("\n1.Insert.\n2.Delete.\n3.Display.\n4.Exit.\n");
        printf("Enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:enqueue();
                break;

            case 2:printf("Element deleted is %d.",dequeue());
                break;

            case 3:display();
                break;

            case 4:exit(0);
        }
    }while(ch!=4);
}
