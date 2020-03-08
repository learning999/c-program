// switch case in c
#include<stdio.h>
int main()
{
	char opt;
	int a,b,c;
	printf("enter the opt('+,-,/,*,%):");
	
	scanf("%c",&opt);
	printf("entre the first number\n");
	scanf("%d",&a);
	printf("entre the second number\n");
	scanf("%d",&b);

	
	switch(opt)

		{
			case '+':
				c=a+b;
				printf("sum is =%d",c);
				break;
                        case '-':
				c =a-b;
				printf("sub is =%d",c);
				break;
			case '*':
				c =a*b;
				printf("mul is =%d",c);
				break;
			case '/':
				c =a/b;
				printf("div is =%d",c);
				break;
		////**	case '%':
		////		c = a%b;
		////		printf("mod is =%.1lf",c);
		////		break; 

			default:
				printf("wrong input");
			
			}
        
			return 0;
		
}



