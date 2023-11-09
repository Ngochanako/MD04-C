#include<stdio.h>

int main()
{
	int input,output,price,money;
	scanf("%d %d",&input,&output);
	int num=output-input;
	if(num<50){
	  price=10000;	
	}
	else if (num<100){
		price=15000;
	}
	else if(num<150){
		price=20000;
	}
	else if(num<200){
		price=25000;
	}
	else {
		price=30000;
	}
	money=num*price;
	printf("Gia dien la: %d VND",money);
	return 0;
	
}
