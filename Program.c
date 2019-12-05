#include<stdio.h>
#include<stdlib.h>
int main()
{
int a, b, res;
int ch;
printf("Enter two numbers\n");
printf("Enter 1st number\n");
scanf("%d", &a);
printf("Enter 2nd  number\n");
scanf("%d", &b);
while(1)
{
printf("Opeartions...\n1.Add\n2.Sub\n3.Mul\n4.Div\n5.exit\n");
printf("Enter your choice\n");
scanf("%d", &ch);
switch(ch)
{
case 1:printf("Addition == %d\n", a+b);
break;
case 2:printf("Subtraction == %d\n", a-b);
break;
case 3:printf("Multiplication == %d\n", a*b);
break;
case 4:printf("Division == %d\n", a/b);
break;
case 5:printf("All done....\n");
exit(0);
break;
default:printf("Wrong choice\n");
break;
}

}
return 0;
}
