#include <stdio.h>

int main() {
	//SimpleAddTwo
	int num1 = 3;
	int num2 = 4;
	int result = num1 + num2;

	printf("���� ��� = %d\n", result);
	printf("%d + %d = %d\n", num1, num2, result);
	printf("%d�� %d�� ���� %d�Դϴ�.\n\n", num1, num2, result);
	
	//������ ����������
	int num = 10;
	printf("num 10����ǥ��    : %d(%#d)\n", num, num);
	printf("num 8����ǥ��     : %o(%#o)\n", num, num);
	printf("num 16����ǥ��(1) : %x(%#x)\n", num, num);
	printf("num 16����ǥ��(2) : %X(%#X)\n", num, num);

	//OperatorOne
	num1 = 9;
	num2 = 2;
	printf("%d + %d = %d\n", num1, num2, num1 + num2);
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	printf("%d * %d = %d\n", num1, num2, num1 * num2);
	printf("%d / %d = %d\n", num1, num2, num1 / num2);
	printf("%d %% %d = %d\n\n", num1, num2, num1 % num2);
	//%��� ��ȣ�� ����ϱ� ���ؼ��� �����(escape sequence)�̿�

	//OperatorTwo
	num1 = 2, num2 = 4;
	int num3 = 6;
	num1 += 3;		//num1 = num1 + 3 �� num1�� 3�� ���� ���� num1�� ����
	num2 *= 4;		//num2 = num2 * 4 �� num2�� 4�� ���� ���� num2�� ����
	num3 %= 5;		//num1 = num3 % 5 �� num3�� 5�� ���� �������� num3�� ����
	printf("result : num1 += 3 �� %d, num2 *= 4 �� %d, num3 %= 5 �� %d\n\n", num1, num2, num3);

	//OperatorThree
	num1 = -2, num2 = 4;
	num1 = -num1, num2 = -num2;
	printf("result : num1 = %d, num2 = %d\n\n", num1, num2);

	//OperatorFour
	num1 = 12, num2 = 12;
	printf("num1 = %d\n", num1);
	printf("num1++ = %d\n", num1++);	//����� �� ����. ���� �ڵ�� �Ѿ�� ���������� �����
	printf("num1 = %d\n", num1);
	printf("num2 = %d\n", num2);		
	printf("++num2 = %d\n", ++num2);	//������Ų �� ���
	printf("num2 = %d\n\n", num2);

	//OperatorFive
	num1 = 10;
	num2 = (num1--) + 2;
	//���� ������ �����߸� ���ҿ����� ����Ǳ� ������ num1�� 10�λ��·� �������, ���Կ��� ����
	//�Ұ�ȣ�� �ִ��� ���ҿ����ڴ� �� ������ ������ ������ �����
	// num2 = (10) + 2;
	// num2 = 12����� �� num1�� 9�� �پ�������
	printf("num1 = %d\n", num1);	
	//line54����� ���� ����ϰ������Ƿ� num1�� 1�پ�� ������ 9�� ��µ�
	printf("num2 = %d\n", num2);
	//line54�� �������� ���Կ����� ����� num2���� 12�� ���ԵǾ������� 12��µ�

	//OperatorSix
	

	return 0;
}