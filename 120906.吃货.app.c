#include<stdio.h>
#include<string.h>
void main()
{
	char n[]="节日";
	printf("吃货小程序，请问现在是什么节日？\n");
	scanf("%s",&n);
	if(n,"春节"){
	printf("饺子");
	}
	else if(n,"端午节"){
	printf("粽子");
	}
	else if(n,"中秋节"){
	printf("月饼");
	}
	else if(n,"元宵节"){
	printf("元宵");
	}
	else{
	printf("输入错误");
	}
}
