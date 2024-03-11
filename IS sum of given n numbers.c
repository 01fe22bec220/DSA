//Program to return sum of n given numbers
#include<stdio.h>
int find_sum(int n)
{
    int sum=0;
    int num;
    int i=1;
    while(i<=n)
    {
        printf("Enter num\n");
        scanf("%d",&num);
        sum=sum+num;
        i++;
    }
    return sum;
}
    int main()
    {
        int n,s;
        printf("enter n\n");
        scanf("%d",&n);
        s=find_sum(n);
        printf("%d",s);
        return 0;
    }
