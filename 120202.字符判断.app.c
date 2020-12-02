#include<stdio.h>
void main()
{
	char n;
	printf("请点击键盘:");
	scanf("%c",&n);
	printf("你在点击");
	switch(n)
	{
	case 'w':printf("上键\n");break;
	case 's':printf("下键\n");break;
	case 'a':printf("左键\n");break;
	case 'd':printf("右键\n");break;
	default:printf("错误按键\n");
	}
}
