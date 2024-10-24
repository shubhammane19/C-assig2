#include<stdio.h>

int main(){
	
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
		
	if(num % 7 == 0){
		
		if(num > 21){
			
			printf("Number is divisible by 7 and greater than 21");
		}else{
			
			printf("Number is divisible by 7 and less than 21");
		}
	}
}