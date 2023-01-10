#include<stdio.h>
#include<stdlib.h>

void main()
{
    int i,j,k,min;
    int D[3][3];
    printf("Enter Elements in Matrix D:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter element in D[%d][%d]:",i+1,j+1);
            scanf("%d",&D[i][j]);
        }
    }
    printf("Matrix D is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",D[i][j]);
        }
        printf("\n");
    }
    printf("For Saddle Point:\n");
    for(i=0;i<3;i++)
    {
        min=D[i][0];
        int c=0;
        for(j=1;j<3;j++)
        {
            if(min>D[i][j])
            {
                min=D[i][j];
                c=j;
            }
        }
        for(k=0;k<3;k++)
        {
            if(min<D[k][c])
            {
                break;
            }
        }
        if(k==3)
        {
            printf("%d is Saddle point\n",min);
        }
    }
}