#include<stdio.h>

int main(){
	
	
	int angle1;
	int angle2;
	int angle3;
		
	printf("Enter Angel 1: ");
	scanf("%d",&angle1);
	
	printf("Enter Angle 2: ");
	scanf("%d",&angle2);
	
	printf("Enter Angle 3: ");
	scanf("%d",&angle3);
	
	if(angle1+angle2+angle3 == 180){
		
		printf("Triangle is valid");
	}else{
		
		printf("Triangle is invalid");
	}
}