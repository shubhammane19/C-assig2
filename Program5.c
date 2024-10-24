#include<stdio.h>

int main(){
	
	char ch;
	printf("Enter any character: ");
	scanf("%c",&ch);
	
	if(ch >= 65 && ch <= 90){
		
		printf("Character is uppercase");
	}else if(ch >= 97 && ch <= 122){
		
		printf("Character is lowercase");
	}else{
		
		printf("Invalid character");
	}
}