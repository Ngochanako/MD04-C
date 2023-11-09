#include<stdio.h>

int main()
{
	float salary;
	int day_reality;
	scanf("%f %d",&salary,&day_reality);
	if(day_reality>26)
	{
		salary=salary*(day_reality-26)*1.5/26+ salary;
	}
	else
	{
		salary=salary*day_reality/26;
	}
	printf("Luong la: %f",salary);
	return 0;
}
