#include<stdio.h>
#include<assert.h>
#define len 200
int main(void)
{
    int n=0;
    scanf("%d",&n);
    assert(n>0&&n<len);
    int fab[len]={};
    fab[0]=0;
    fab[1]=1;
    
    for(int i=2;i<n;i++)
    {
        fab[i]=fab[i-1]+fab[i-2];
        //printf("%d\n",fab[i]);//
    }
    for(int i=0;i<n;i++)
    {
        
        printf("%d\n",fab[i]);//
    }

    return 0;
}