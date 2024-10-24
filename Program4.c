#include<stdio.h>

int main(){
	
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
		
	if(num >= 18){
		printf("Eligible for voting");
	}else{
		printf("Not Eligible for voting");
	}
}