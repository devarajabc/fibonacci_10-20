#include<stdio.h>
#include<stdbool.h>
#include<assert.h>
#define len 101

int main(void)
{
    bool prime[len]={};
    //get n
    int n;
    scanf("%d",&n);
    assert(n>0&&n<len);
    for(int i=2;i<len;i++)
    {
        prime[i]=true;
    }
    int j=2;// NO.j prime
    while(j*j<n)
    {
        if(!prime[j])
            j++;//再下一位
        else//是質數，幹掉他的倍數
        {
            for(int i=2*j;i<n;i+=j)//如果j=0程式會卡在這
            {
                prime[i]=false;
            }
            j++;//下一位
        }
    }
    for(int i=0;i<n;i++)
    {
        if(prime[i])
        {
            printf("%d\n",i);
        }
    }

    return 0;
}

