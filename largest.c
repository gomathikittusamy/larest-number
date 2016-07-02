#include<stdio.h>
#include<conio.h>
void main()
{
long a,b,c;
clrscr();
printf("Enter the three number");
scanf("%d %d %d",&a,&b,&c);
if((a>=b)&&(a>=c))
{
printf("%d is largest number",a);
}
else if(b>=c)
{
printf("%d is largest number",b);
}
else
printf("%d is a largest number",c);
getch();
}
