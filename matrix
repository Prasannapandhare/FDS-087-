// Operation on matrices
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int A[3][3],B[3][3],C[3][3],D[3][3],min,i,j,k,choice,finish=0;
    printf("Enter elements of Matrice A :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("A%d%d:",i+1, j+1);
			scanf("%d", &A[i][j]);			
		}	
	}
    printf(" Matrice A :\n");
    for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",A[i][j]);
					
		}
        printf("\n");	
	}
    printf("Enter elements of Matrice B :\n");
    for(i=0;i<3;i++)
    {
		for(j=0;j<3;j++)
		{
			printf("B%d%d:",i+1, j+1);
			scanf("%d", &B[i][j]);			
		}	
	}
    printf(" Matrice b :\n");
    for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",B[i][j]);
					
		}
                 printf("\n");	
	}
    do
    {
        printf("\nEnter the operation you want to perform\n");
        printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Transpose\n5.Saddle point\n6.Exit\n");
        scanf("%d",&choice);
        switch(choice)
        {   
// Addition : 
        case 1:
	        printf("Addition of the two matrice :\n");
	        for(i=0;i<3;i++)
	        {
		        printf("\n");
		        for(j=0;j<3;j++)
		        {
	                printf("%d\t", A[i][j]+B[i][j]);
		        }
	        }
            break;
// Subtraction : 
        case 2:
	        printf("\nSubtraction of the two matrice :\n");
	        for(i=0;i<3;i++)
	        {
		        printf("\n");
		        for(j=0;j<3;j++)
		        {
			
                    printf("%d\t", A[i][j]-B[i][j]);
		        }
	        }
            break;
// Multiplication : 
        case 3:
	        for(i=0;i<3;i++)
	        {
		        for(j=0;j<3;j++)
		        {
			        C[i][j] = 0; 		
		        }		
	        }
            printf("\nMultiplication of the two matrice : \n");
	        for(i=0;i<3;i++)
	        {
		    printf("\n");
		    for(j=0;j<3;j++)
		    {
			    for(k=0;k<3;k++)
			    {
				    C[i][j] = C[i][j] + A[i][k] * B[k][j];			
			    }
			    printf("%d\t", C[i][j]);	
            }
	    }
	    printf("\n");
        break;
// Transpose : 
        case 4:
            printf("Transpose of Matrice A :\n");
            for(i=0;i<3;i++)
	        {
		        for(j=0;j<3;j++)
		        {
			        printf("%d\t",A[j][i]);
	            }
                 printf("\n");	
	        }
            printf("Transpose of Matrice B :\n");
            for(i=0;i<3;i++)
	        {
		        for(j=0;j<3;j++)
		        {
			        printf("%d\t",B[j][i]);
		        }
                printf("\n");	
	        }
            break;

// Saddle Point : 
        case 5:
            printf("Saddle point\n");
            printf("Enter elements of Matrice d :\n");
	        for(i=0;i<3;i++)
	        {
		        for(j=0;j<3;j++)
		        {
			        printf("D%d%d : ",i+1, j+1);
			        scanf("%d", &D[i][j]);			
		        }	
	        }
            printf(" Matrice D :\n");
            for(i=0;i<3;i++)
	        {
		        for(j=0;j<3;j++)
		        {
			        printf("%d\t",D[i][j]);				
		        }
                printf("\n");	
        	}
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
                    printf("%d is saddle point\n",min);
                }
            }
            break;
        case 6:
            exit(0);
        }
    }while(choice!=6);
return 0;
}
