#include<stdio.h>
int main(){
	int a=1,b=1,c=0,i;
	printf("%d\t%d\t",a,b);
	for (i=0;i<=10;i++)
	{
		c=a+b;

		{
			printf("%d\t",c);
		}
		a=b;
		b=c;
	}
	return 0;
}
