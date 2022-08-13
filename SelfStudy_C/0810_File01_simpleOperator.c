#include <stdio.h>

int main() {
	//SimpleAddTwo
	int num1 = 3;
	int num2 = 4;
	int result = num1 + num2;

	printf("덧셈 결과 = %d\n", result);
	printf("%d + %d = %d\n", num1, num2, result);
	printf("%d과 %d의 합은 %d입니다.\n\n", num1, num2, result);
	
	//정수의 서식지정자
	int num = 10;
	printf("num 10진수표기    : %d(%#d)\n", num, num);
	printf("num 8진수표기     : %o(%#o)\n", num, num);
	printf("num 16진수표기(1) : %x(%#x)\n", num, num);
	printf("num 16진수표기(2) : %X(%#X)\n", num, num);

	//OperatorOne
	num1 = 9;
	num2 = 2;
	printf("%d + %d = %d\n", num1, num2, num1 + num2);
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	printf("%d * %d = %d\n", num1, num2, num1 * num2);
	printf("%d / %d = %d\n", num1, num2, num1 / num2);
	printf("%d %% %d = %d\n\n", num1, num2, num1 % num2);
	//%라는 기호를 출력하기 위해서는 제어문자(escape sequence)이용

	//OperatorTwo
	num1 = 2, num2 = 4;
	int num3 = 6;
	num1 += 3;		//num1 = num1 + 3 ← num1에 3을 더한 값을 num1에 대입
	num2 *= 4;		//num2 = num2 * 4 ← num2에 4을 곱한 값을 num2에 대입
	num3 %= 5;		//num1 = num3 % 5 ← num3을 5로 나눈 나머지를 num3에 대입
	printf("result : num1 += 3 → %d, num2 *= 4 → %d, num3 %= 5 → %d\n\n", num1, num2, num3);

	//OperatorThree
	num1 = -2, num2 = 4;
	num1 = -num1, num2 = -num2;
	printf("result : num1 = %d, num2 = %d\n\n", num1, num2);

	//OperatorFour
	num1 = 12, num2 = 12;
	printf("num1 = %d\n", num1);
	printf("num1++ = %d\n", num1++);	//출력한 후 증가. 다음 코드로 넘어가야 증가연산자 연산됨
	printf("num1 = %d\n", num1);
	printf("num2 = %d\n", num2);		
	printf("++num2 = %d\n", ++num2);	//증가시킨 후 출력
	printf("num2 = %d\n\n", num2);

	//OperatorFive
	num1 = 10;
	num2 = (num1--) + 2;
	//위의 문장이 끝나야만 감소연산자 적용되기 때문에 num1이 10인상태로 산술연산, 대입연산 진행
	//소괄호가 있더라도 감소연산자는 이 문장이 끝나고 나서야 실행됨
	// num2 = (10) + 2;
	// num2 = 12저장된 후 num1이 9로 줄어들어있음
	printf("num1 = %d\n", num1);	
	//line54실행된 이후 출력하고있으므로 num1이 1줄어든 상태인 9로 출력됨
	printf("num2 = %d\n", num2);
	//line54의 산술연산과 대입연산의 결과로 num2에는 12가 대입되어있으니 12출력됨

	return 0;
}