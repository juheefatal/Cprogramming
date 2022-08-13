#include <stdio.h>

int main() {
	//OperatorSix
	int num1 = 10;
	int num2 = 12;
	int result1, result2, result3;

	result1 = (num1 == num2);
	result2 = (num1 <= num2);
	result3 = (num1 > num2);

	printf("result1 = %d\n", result1);
	printf("result2 = %d\n", result2);
	printf("result3 = %d\n\n", result3);

	//OperatorSeven
	num1 = 10;
	num2 = 12;
	
	result1 = (num1 == 10 && num2 == 12);
	result2 = (num1 < 12 || num2 > 12);
	result3 = (!num1);

	printf("result1 = %d\n", result1);
	printf("result2 = %d\n", result2);
	printf("result3 = %d\n\n", result3);

	//CommaOp
	num1 = 1;
	num2 = 2;
	printf("Hello "), printf("world!\n");
	num1++, num2++;
	printf("%d ", num1), printf("%d ", num2), printf("\n\n");

	//SimpleAddThree
	int result;
	
	printf("정수 one : ");
	scanf_s("%d", &num1);
	printf("정수 two : ");
	scanf_s("%d", &num2);

	result = num1 + num2;
	printf("%d + %d = %d\n\n", num1, num2, result);

	//SimpleAddFour
	int num3;
	printf("Enter three integers >> ");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	result = num1 + num2 + num3;
	printf("%d + %d + %d = %d\n\n", num1, num2, num3, result);

	//book p.74-03-1-1
	printf("Enter two integers >> ");
	scanf_s("%d %d", &num1, &num2);

	int add = num1 + num2;
	int diff = num1 - num2;

	printf("합 : %d, 차 : %d\n\n", add, diff);
	
	//book p.71-03-1-2
	printf("Enter three integers >> ");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	result = num1 * num2 + num3;
	printf("%d×%d+%d=%d\n\n", num1, num2, num3, result);

	//book p.71-03-1-3
	printf("Enter an integer >> ");
	scanf_s("%d", &num1);
	printf("squared %d : %d\n\n", num1, num1 * num1);

	//book p.71-03-1-4
	printf("Enter two integers >> ");
	scanf_s("%d %d", &num1, &num2);
	printf("몫 : %d, 나머지 : %d\n\n", num1/num2, num1%num2);

	//book p.71-03-1-5
	printf("Enter three integers >> ");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	result = (num1 - num2)*(num2 + num3)*(num3 % num1);
	printf("(%d-%d)×(%d+%d)×(%d%%%d)=%d\n\n", num1, num2, num2, num3, num3, num1, result);


	return 0;
}