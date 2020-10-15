#include<stdio.h>
int main()
{
int  a, b;
float sum, mul, sub, div;
char func;

printf("Enter the function you want to execute\n");
printf("+ , * , - , / \n");
scanf("%c",&func);
printf("Enter the First Number\n");
scanf("%d",&a);
printf("Enter the Second Number\n");
scanf("%d",&b);
sum = a+b;
mul = a*b;
sub = a-b;
div = a/b;
if(func == '+')
printf("Answer : %f",sum);
else if(func == '*')
printf("Answer : %f", mul);
else if(func == '-')
printf("Answer :%f", sub);
else if(func == '/')
printf("Answer :%f", div);




}
