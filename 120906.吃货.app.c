#include<stdio.h>
#include<string.h>
void main()
{
	char n1[]="春节";
	char n2[]="元宵节";
	char n3[]="端午节";
	char n4[]="中秋节";
	char n5[]="";
	printf("吃货小程序，请问现在是什么节日？\n");
	scanf("%s",&n5);
	if(strcmp(n1,n5)==0){
		printf("饺子");
	}
	else if(strcmp(n2,n5)==0){
		printf("元宵");
	}
	else if(strcmp(n3,n5)==0){
		printf("粽子");
	}
	else if(strcmp(n4,n5)==0){
		printf("月饼");
	}
	else{
		printf("输入错误");
	}
}
