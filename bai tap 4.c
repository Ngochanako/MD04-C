#include<stdio.h>

int main(){
	int year,month,day;
	scanf("%d %d",&year,&month);
	switch(month)
	{
		case 1:
		 day=31;
		 break;
		case 2:
		 if(year%4==0) {
		 day=29;} else 
		 {
		 day=28;}
		 break;	
		case 3:
			day=31;
		case 4:
			day=30;
			
		case 5:
			day=31;
		case 6:
			day=30;
		case 7:
			day=31;
		case 8:
			day=31;
		case 9:
			day=30;
		case 10:
			day=31;
		case 11:
			day=30;
		case 12:
			day=31;
		default:
			printf("thang khong hop le");
			
	}
	printf("Thang %d co %d ngay",month,day);
	
}
