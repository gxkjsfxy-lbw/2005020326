#include<stdio.h>
#include<string.h>
void main()
{
    int a=6;
    int b;
    char c[]="请回答天王盖地虎的下一句 ";
    printf("%s\n",c);
    scanf("%s",&c);
    if(strcmp(c,"宝塔镇河妖")){
        printf("验证成功，开始游戏\n");
    while(1)
    {
        scanf("%d",&b);
        if(b==6)
        {
            printf("答对了，牛逼！！");
        }
        else if(b>a)
        {
            printf("太大了\n");
        }
        else
        {
            printf("太小了\n");
        }
    }
    }
    else
    {
        printf("请输入正确的答案");
    }

}
