#include<stdio.h>
int a(int x)
{
if(x<=0){
       return 0;
        }
     return x+a(x-1);
}

void main()
{
    int n=6;
    printf("%d\n",a(n));
}
