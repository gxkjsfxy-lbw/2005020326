#include<stdio.h>
void main()
{
int n;
scanf("%d",&n);
if(n<=0){
printf("花呗人\n");
}
 else if(n>=1&&n<=500){
printf("赤贫人\n");
}
 else if(n>=501&&n<=1500){
printf("贫困人\n");
}
 else if(n>=1501&&n<=3000){
printf("打工人\n");
}
 else if(n>=3001&&n<=5000){
printf("尾款人\n");
}
 else if(n>=5001&&n<=10000){
printf("入门程序员\n");
}
 else if(n>=10001&&n<=50000){
printf("资深程序员\n");
}
 else if(n>=50001&&n<=1000000){
printf("顶级程序员\n");
}
 else if(n>=1000001&&n<=150000){
printf("秃头程序员\n");
}
 else if(n>=150001&&n<=5000000){
printf("人上人\n");
} 
else{
printf("爹\n");
}
}
