#include<stdio.h>
#include<conio.h>
int main()
{
int n;
clrscr();
scanf("%d",&n);
if(n==0)
{
printf("Zero");
}
else if(1<=n<=100000)
 {
printf("positive");
}
else
{
 printf("negative");
}
getch();
return 0;
}