#include<stdio.h>
int main()
{
    int i,j,rows,cols;
    printf("enter the rows,cols: ");
    scanf("[%d],[%d]",&rows,cols);

    int matrix1[i][j], matrix2[i][j],result[i][j];

     printf("enter the elements of matrix1: ");

     for(int i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            printf("enter the elements:[%d][%d] ",i+1,j+1);
            scanf("[%d]",matrix1[i][j]);
        }
    }

    printf("enter the elements of matrix2: \n");

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            printf("enter teh elements:[%d][%d]",i+1,j+1);
            scanf("[%d]",matrix2[i][j]);
        }
    }

    for(int i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            result[i][j]=matrix1[i][j]+matrix2[i][j];
        }
    }
     printf("result matrix after addition: ");

     for(int i=0;i<rows;i++)
     {
         for(int j=0;j<rows;j++)
         {
             printf("[%d]",result[i][j]);
         }
     }
     printf("\n");
     return 0;
}
