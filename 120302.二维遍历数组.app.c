#include<stdio.h>
void main()
{
int a,b;
int n[3][3]={
	{1,2,3},
	{4,5,6},
	{7,8,9}
};
for(a=0;a<3;a++)
	{
	for(b=0;b<3;b++)
		{
		printf("%d ",n[a][b]);
		}
	printf("\n");
	}
}
