#include<stdio.h>
#include<stdbool.h>

int main(){
    int size1,size2,size3;
    bool condition1,condition2;
    
    scanf("%d %d %d",&size1,&size2,&size3);
    if((size1+size2)>size3 && (size1+size3 )>size2 &&(size3+size2 )>size1){
    	printf("Tam giac thuong\n");
	}
	if(size1==size2 || size1==size3||size3==size2){
		condition1=true;
		printf("Tam giac can\n");
	}
	if((size1*size1+size2*size2)==size3*size3 || (size1*size1+size3*size3 )==size2*size2 &&(size3*size3+size2*size2 )==size1*size1){
		condition2=true;
    	printf("Tam giac vuong\n");}
    if(condition1 && condition2)
    {
    	printf("Tam giac vuong can\n");
	}
	else 
	{
		printf("Khong la tam giac vuong can\n");
	}
    if(size1==size2==size3)
	{
		printf("Tam giac deu");
		}	
 
}
