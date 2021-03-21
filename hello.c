#include <stdio.h>

int main(){
	printf("Calculator with if else\n");
	printf("press 1 to cal sum\n");
	printf("press 2 to cal sub\n");
	printf("press 3 to cal mul\n");
	printf("press 4 to cal div\n");
	printf("press 5 to cal mod\n");

	int digit;
	printf("Please Enter a digit: ");
	scanf("%d", &digit);

	if(digit == 1){

		int num1,num2,sum;
		printf("Enter two number: ");
		scanf("%d %d", &num1, &num2); //read two number
		sum = num1 + num2;
		printf("sum is = %d\n", sum);

	}else if(digit == 2){

		int num1,num2,sum;
		printf("Enter two number: ");
		scanf("%d %d", &num1, &num2);
		sum = num1 - num2;
		printf("sum is = %d\n", sum);

	}else if(digit == 3){

		int num1,num2,mul;
		printf("Enter two number: ");
		scanf("%d %d", &num1, &num2);
		mul = num1 * num2;
		printf("mul is = %d\n", mul);

	}else if(digit == 2){

		int num1,num2,div;
		printf("Enter two number: ");
		scanf("%d %d", &num1, &num2);
		div = num1 / num2;
		printf("div is = %d\n", div);

	}else{

		int num1,num2,mod;
		printf("Enter two number: ");
		scanf("%d %d", &num1, &num2);
		mod = num1 % num2;
		printf("mod is = %d\n", mod);

	}
	
	return 0;
}

// my last class was 87
