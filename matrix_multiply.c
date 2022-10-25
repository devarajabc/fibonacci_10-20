#include<stdio.h>
#define ROWA 2
#define COLA 3
#define ROWB 3
#define COLB 4
#define ROWC 2
#define COLC 4
int main(void)
{
    //declare the martix
    int A[ROWA][COLB],B[ROWB][COLB];
    int C[ROWC][COLC]={};
    //scan the matrix
    for(int i=0;i<ROWA;i++)
    {
        for(int j=0;j<COLA;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    for(int i=0;i<ROWB;i++)
    {
        for(int j=0;j<COLB;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
   //time to multiply
   for(int i=0;i<ROWC;i++)
   {
    for(int j=0;j<COLC;j++)
    {
        for(int k=0;k<ROWB;k++)
        {
            C[i][j]+=(A[i][k])*(B[k][j]);
        }
    }
   }
    for(int i=0;i<ROWC;i++)
   {
    for(int j=0;j<COLC;j++)
    {
        printf("%d ",C[i][j]);
    }
    printf("\n");
   }
  
    return 0;
}