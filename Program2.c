#include<stdio.h>

int main(){
	
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
		
	if(num % 5==0 || num % 10==0){
	
		printf("Number is divisible");
	}else{
		
		printf("Number is not divisible");
	}
}