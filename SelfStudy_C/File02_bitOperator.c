#include <stdio.h>

int main() {

	//Notation
	int num1 = 0xA7;
	int num2 = 0x43;
	int num3 = 032;
	int num4 = 024;

	printf("0xA7의 10진수 정수 값 : %d\n", num1);
	printf("0x43의 10진수 정수 값 : %d\n", num2);
	printf("032의 10진수 정수 값 : %d\n", num3);
	printf("024의 10진수 정수 값 : %d\n", num4);

	printf("%d - %d = %d\n", num1, num2, num1-num2);
	printf("%d + %d = %d\n\n", num3, num4, num3+num4);

	//FloatError
	//	실수 표현방식에 의한 '부동소수점오차'가 발생해
	//	결과(10.000002)에 오차가 발생함을 확인할 수 있음
	float num = 0.0;

	for (int i = 0; i < 100; i++) {
		num += 0.1;
	}
	printf("0.1을 100번 더한 결과 = %f\n\n", num);
	
	//BitAndOperation
	num1 = 15;			//00000000 00000000 00000000 00001111
	num2 = 20;			//00000000 00000000 00000000 00010100
	num3 = num1 & num2;	//num1, num2 비트단위 AND : … 00000100
	printf("AND비트연산의 결과 = %d\n\n", num3);

	//BitOrOperation
	num1 = 15;			//00000000 00000000 00000000 00001111
	num2 = 20;			//00000000 00000000 00000000 00010100
	num3 = num1 | num2;	//num1, num2 비트단위 OR  : … 00011111
	printf("OR비트연산의 결과 = %d\n\n", num3);

	//BitXorOperation
	num1 = 15;			//00000000 00000000 00000000 00001111
	num2 = 20;			//00000000 00000000 00000000 00010100
	num3 = num1 ^ num2;	//num1, num2 비트단위 XOR : … 00011011
	printf("XOR비트연산의 결과 = %d\n\n", num3);

	//BitNotOperation
	num1 = 15;			//					 00000000 00000000 00000000 00001111
	num2 = ~num1;		//num1 비트단위 NOT : 11111111 11111111 11111111 11110000
	printf("NOT비트연산의 결과 = %d\n\n", num2);

	//BitLeftShift
	int n = 15;

	int result1 = n << 1;
	int result2 = n << 2;
	int result3 = n << 3;

	printf("비트 1칸 왼쪽으로 이동한 결과 : %d\n", result1);
	printf("비트 2칸 왼쪽으로 이동한 결과 : %d\n", result2);
	printf("비트 3칸 왼쪽으로 이동한 결과 : %d\n\n", result3);

	//BitRightShift
	n = -16;
	printf("2칸 오른쪽 이동 결과 : %d\n", n >> 2);
	printf("3칸 오른쪽 이동 결과 : %d\n\n", n >> 3);

	//book p100-04-4-1 ★
	//입력받은 정수를 비트연산자 이용해 부호 반대로 바꾸는 프로그램 작성
	//→ 2의 보수가 부호바꾸는 기능을 한다는 것을 기억
	printf("Enter an integer >> ");
	scanf_s("%d", &n);
	printf("입력한 정수    : %d\n", n);
	n = ~n;		//비트를 전부 역전시킨 후(0 ↔ 1)
	n += 1;		//1을 더해서 2의 보수 완성!
	printf("부호 바꾼 결과 : %d\n\n", n);

	//book p100-04-4-2
	// *, / 연산자를 사용하지 않고 3×8÷4 연산하는 프로그램 작성
	int result = (3 << 3) >> 2;
	printf("3×8÷4 = %d\n\n", result);

	return 0;
}