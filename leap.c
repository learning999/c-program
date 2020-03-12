///leap year inding (lerap is come over 4 years and the mod is 0 then ist is valled as a leap 
#include<stdio.h>
int main(){
	int n;
	printf("entre the year");
	scanf("%d",&n);
	if(n%4==0)
		printf(" this is a leap year");
	else
		printf("this not a leap year");
	return 0;
}
