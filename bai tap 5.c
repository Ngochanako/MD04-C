#include<stdio.h>

int main()
{
	int year,month,day;
	scanf("%d %d %d",&year,&month,&day);
	if(year<0)
	{
		printf("Nam khong hop le");
	}
	if(month<1 || month>12)
	{
		printf("Thang khong hop le");
	}
	else if(month==4||month==6||month==9||month==11)
	{
	    if(day>30)
		{
			printf("Ngay khong hop le");
		}			
	}
	else if(month=2) 
	{
		if(year%4==0)
		{
			if(day>29)
			{
				printf("Ngay khong hop le");
			}
		}
		else
		{
			if(day>28)
			{
				printf("Ngay khong hop le");
			}
		}
	}
	else
	{
	    if(day>31)
	   {
		    printf("Ngay khong hop le");
	   }	
	}	
}
