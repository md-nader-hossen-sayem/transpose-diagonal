// Transpose & Diagonal by array
#include<stdio.h>
int main()
{
    int matrixNoOne[10][10], transpose[10][10], diagonal=0;
    int row, col, num, sum=0;

     //take input from user row and col
     printf("Enter rows number: ");
     scanf("%d",&row);
     printf("Enter col number: ");
     scanf("%d",&col);

    printf("\n");

    //Take input from user for the first matrix
    printf("Enter value for Matrix No One---\n");
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf("[%d][%d] = ",i,j);
            scanf("%d",&matrixNoOne[i][j]);
        }
        printf("\n");
    }



    //Transpose of Matrix
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            transpose[j][i] = matrixNoOne[i][j];
        }
    }

    //Diagonal of Matrix
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
             if(i==j)
             {
                 diagonal = diagonal + matrixNoOne[i][j];
             }
        }
    }

    //print matrix one
    printf("\n Matrix No One---\n");
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf(" %d  ",matrixNoOne[i][j]);
        }
        printf("\n");
    }


    //print Transpose matrix
    printf("\n Transpose Matrix---\n");
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf("%d  ",transpose[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    //print diagonal matrix
    printf("Diagonal Matrix is = %d",diagonal);


    return 0;
}


