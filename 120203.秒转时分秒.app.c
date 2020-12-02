#include<stdio.h>
void main()
{
int a,b,c,d;
scanf("%d",&a);
if (a<=86400)
	{
		b=a/3600;
		c=(a%3600)/60;
		d=(a%3600)%60;
		printf("%02d:%02d:%02d\n",b,c,d);
	}
else
	{
	  printf("输入错误\n");
	}
}
