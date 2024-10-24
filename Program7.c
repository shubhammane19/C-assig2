#include<stdio.h>

int main(){
	
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	
	int num2;
	printf("Enter a number2: ");
	scanf("%d", &num2);
	
	if(num > num2){
		
		printf("%d is maximum between %d and %d",num,num,num2);
	}else if(num2 > num){
		
		printf("%d is maximum between %d and %d",num2,num,num2);
	}else{
		
		printf("Numbers are equal");
	}
}