#include<stdio.h>
#include<stdlib.h>

struct abc
{
    int data;
    struct abc *left;
    struct abc *right;
};

struct abc *create(int key)
{
    struct abc *new;
    new=(struct abc*)malloc(sizeof(struct abc));
    new->data=key;
    new->right=NULL;
    new->left=NULL;
    return new;
}
struct abc *insert(struct abc *root,int key)
{
    if(root==NULL)
    {
        return create(key);
    }
    else if(key<root->data)
    {
        root->left=insert(root->left,key);
    }
    else
    {
        root->right=insert(root->right,key);
    }
    return root;
}
int search(struct abc * root,int key)
{
    if(root==NULL)
    {
        return -1;
    }
    if(key==root->data)
    {
        return key;
    }
    else if(key<root->data)
    {
        return search(root->left,key);
    }
    else
    {
        return search(root->right,key);
    }
}
void inorder(struct abc *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d\t",root->data);
        inorder(root->right);
    }
}
void preorder(struct abc *root)
{
    if(root!=NULL)
    {
        printf("%d\t",root->data);
        preorder(root->left);
        preorder(root->right);  
    }
}
void postorder(struct abc *root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d\t",root->data);
    }
}
void display(struct abc *root)
{
    printf("Inorder:");
    inorder(root);
    printf("\nPreorder:");
    preorder(root);
    printf("\nPostorder:");
    postorder(root);
}
int inorderS(struct abc *temp)
{
    while(temp->left!=NULL)
    {
        temp=temp->left;
    }
    return temp->data;
}
struct abc *delete(struct abc *root,int key)
{
    if(root==NULL)
    {
        return root;
    }
    if(key<root->data)
    {
        root->left=delete(root->left,key);
    }
    else if(key>root->data)
    {
        root->right=delete(root->right,key);
    }
    else
    {
        if(root->left==NULL)
        {
            struct abc *temp;
            temp=root->right;
            free(root);
            return temp;
        }
        else if(root->right==NULL)
        {
            struct abc *temp;
            temp=root->left;
            free(root);
            return temp;
        }
        else
        {
            struct abc *temp;
            temp=root->right;
            root->data=inorderS(temp);
            root->right=delete(root->right,root->data);
        }
    }
    return root;
}

void main()
{
    struct abc *root=NULL;
    int ch,key;
    do
    {
        printf("\n1.Insert.\n2.Search.\n3.Traverse.\n4.Delete.\n5.Exit.\n");
        printf("Enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("Enter element:");
                scanf("%d",&key);
                root=insert(root,key);
                break;

            case 2:printf("Enter data tobe searched:");
                scanf("%d",&key);
                key=search(root,key);
                if(key==-1)
                {
                    printf("Element not found.");
                }
                else
                {
                    printf("Element %d is found.",key);
                }
                break;

            case 3:display(root);
                break;

            case 4:printf("Enter data to be deleted:");
                scanf("%d",&key);
                root=delete(root,key);
                break;

            case 5:exit(0);
        }
    }while(ch!=5);
}
