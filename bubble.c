#include<stdio.h>
#include<assert.h>
#define SIZE 100
//not finish yet
int main(void)
{
    int m;
    scanf("%d",&m);
    assert(m>=1&&m<=SIZE);//make sure the 
    int n[SIZE];
    for(int i=0;i<SIZE;i++)
    {
        scanf("%d",&n[i]);
    }
    //start to bubble
    int temp;
    for(int i=0;i<SIZE;i++)
    {
        for(int j=0;j<SIZE;j++)
        {
            if(n[i-1]>n[i])//swap
            {
                temp=n[i-1];
                n[i-1]=n[i];
                n[i]=temp;
            }
        }
    }

    for(int i=0;i<SIZE;i++)
    {
    printf("%d\n",n[i]);
    }
    
    return 0;
}