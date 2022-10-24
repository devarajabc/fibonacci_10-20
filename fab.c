#include<stdio.h>
#include<stdlib.h>
#define SIZE 100
int main(void)
{
    //find n-th item
    int fab[SIZE]={};
    int n;
    scanf("%d",&n);
    
    fab[0]=0;
    fab[1]=1;
    for(int i=2;i<SIZE;i++)
    {
        fab[i]=fab[i-1]+fab[i-2];
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\n",fab[i]);
    }
    


    return 0;
}