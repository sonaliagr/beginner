#include<stdio.h>
void main(){
	int n,i;
	{
	
	printf("enter number\n");
	scanf("%d",&n);
 
	if(n==0){
		printf("number is Zero");
	
	}
	else if(n>0 && n<=100000){
		printf("number is positive");
	
	}
	else{
		printf("number is negative");
	}
}
}
