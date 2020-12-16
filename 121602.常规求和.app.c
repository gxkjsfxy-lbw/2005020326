#include<stdio.h>
void main()
{
int a,b;
int n=0;
printf("请输入一个整数a=");
scanf("%d",&a);
for(b=1;b<=a;b++)
	{
	n+=b;
	}
printf("%d\n",n);
}
