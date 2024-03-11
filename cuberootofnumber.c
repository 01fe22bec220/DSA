#include<stdio.h>
#include<math.h>

int main()
{
    int number,cr;
    printf("Enter a number\n");
    scanf("%d",&number);
    cr=cbrt(number);
    printf("Cube root of the given number is %d",cr);
    return 0;

}
