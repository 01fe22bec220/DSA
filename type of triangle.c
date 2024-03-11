/*Program to compute type of triangle*/
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b&&b==c)
        printf("Triangle is equilateral");
    else if(a==b&&b!=c)
        printf("Triangle is isoscles");
    else if(a!=b&&b!=c)
        printf("Triangle is saclene\n");
    else ((a*a)==(b*b)+(c*c));
        printf(" and Triangle is right angled");
    return 0;

}
