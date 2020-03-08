#include<stdio.h>
int main(){
	int k,i,j;
	for(i=1;i<=5;j++)
	{
		for(j=5;j>=i;j--)
		printf(" ");
			for(k=1;k<=i;k++)
			printf("*");
			printf("\n");

		//for(j=5;j>=i;j--)
		//	printf(" ");
		//for(k=1;k<=i;k++)
		//
		//	printf("*");
		//	printf("\n");
	}
	return 0;
}
