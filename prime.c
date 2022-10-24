#include<stdio.h>
#include<stdbool.h>
#include<assert.h>
#define SIZE 101
int main(void)
{
    //print out all prime before n
    printf("hi eeee\n");
    int n=0;
    scanf("%d",&n);
    assert(n>=2&&n<SIZE);
    bool prime[SIZE];
    //initialize it
    for(int i=2;i<SIZE;i++) 
    {
        prime[i]=true;
    }
    int j=2;//從2開始找是否為質數
    while(j*j<=n)//不大於n的和數必有一個不大於根號n的質因數，所以到根好n即可
    {
        while(!prime[j])//!prime[j]為true代表prime[j]是flase,不是質數，用第一個質數幹掉後面的數
        {
            j++;
        }
        //找到一個質數，j
        for(int i=2*j;i<=n;i+=j)//質數的倍數(i)都是合數，把他們幹掉
        {
            prime[i]=false;
        }
        j++;
    }
    for(int i=2;i<n;i++)
    {
        if(prime[i])//true 代表是質數
        printf("%d\n",i);
    }

    return 0;
}