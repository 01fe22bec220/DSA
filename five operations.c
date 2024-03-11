#include<stdio.h>
int main()
{
int choice,s;
int n1,n2;
printf("1.ADD\n 2.DIFFERENCE\n 3.PRODUCT\n 4.DIVISION\n 5.REMAINDER\n");
scanf("%d",&choice);
printf("Enter two numbers");
scanf("%d%d",&n1,&n2);
   switch(choice)
{
   case 1:s=n1+n2;
          break;
   case 2:s=n1-n2;
          break;
   case 3:s=n1*n2;
          break;
   case 4:s=n1/n2;
          break;
   case 5:s=n1%n2;
          break;

 default:printf("Invalid input\n");
}
 printf("The result is\t%d",s);
}
