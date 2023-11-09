#include<stdio.h>

int main()
{
	int num1,num2,num3;
	scanf("%d %d %d",&num1,&num2,&num3);
	
	if(num2<num1)
	{
		num1=num1+num2;
		num2=num1-num2;
		num1=num1-num2;
	}
	if(num2>num3)
	{
		num2=num2+num3;
		num3=num2-num3;
		num2=num2-num3;
	}
	printf("So lon nhat la: %d,so nho nhat la: %d, so o giua la: %d",num3,num1,num2);
	return 0;
	
}
