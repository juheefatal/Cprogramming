#include <stdio.h>

int main() {

	//Notation
	int num1 = 0xA7;
	int num2 = 0x43;
	int num3 = 032;
	int num4 = 024;

	printf("0xA7�� 10���� ���� �� : %d\n", num1);
	printf("0x43�� 10���� ���� �� : %d\n", num2);
	printf("032�� 10���� ���� �� : %d\n", num3);
	printf("024�� 10���� ���� �� : %d\n", num4);

	printf("%d - %d = %d\n", num1, num2, num1-num2);
	printf("%d + %d = %d\n\n", num3, num4, num3+num4);

	//FloatError
	//	�Ǽ� ǥ����Ŀ� ���� '�ε��Ҽ�������'�� �߻���
	//	���(10.000002)�� ������ �߻����� Ȯ���� �� ����
	float num = 0.0;

	for (int i = 0; i < 100; i++) {
		num += 0.1;
	}
	printf("0.1�� 100�� ���� ��� = %f\n\n", num);
	
	//BitAndOperation
	num1 = 15;			//00000000 00000000 00000000 00001111
	num2 = 20;			//00000000 00000000 00000000 00010100
	num3 = num1 & num2;	//num1, num2 ��Ʈ���� AND : �� 00000100
	printf("AND��Ʈ������ ��� = %d\n\n", num3);

	//BitOrOperation
	num1 = 15;			//00000000 00000000 00000000 00001111
	num2 = 20;			//00000000 00000000 00000000 00010100
	num3 = num1 | num2;	//num1, num2 ��Ʈ���� OR  : �� 00011111
	printf("OR��Ʈ������ ��� = %d\n\n", num3);

	//BitXorOperation
	num1 = 15;			//00000000 00000000 00000000 00001111
	num2 = 20;			//00000000 00000000 00000000 00010100
	num3 = num1 ^ num2;	//num1, num2 ��Ʈ���� XOR : �� 00011011
	printf("XOR��Ʈ������ ��� = %d\n\n", num3);

	//BitNotOperation
	num1 = 15;			//					 00000000 00000000 00000000 00001111
	num2 = ~num1;		//num1 ��Ʈ���� NOT : 11111111 11111111 11111111 11110000
	printf("NOT��Ʈ������ ��� = %d\n\n", num2);

	//BitLeftShift
	int n = 15;

	int result1 = n << 1;
	int result2 = n << 2;
	int result3 = n << 3;

	printf("��Ʈ 1ĭ �������� �̵��� ��� : %d\n", result1);
	printf("��Ʈ 2ĭ �������� �̵��� ��� : %d\n", result2);
	printf("��Ʈ 3ĭ �������� �̵��� ��� : %d\n\n", result3);

	//BitRightShift
	n = -16;
	printf("2ĭ ������ �̵� ��� : %d\n", n >> 2);
	printf("3ĭ ������ �̵� ��� : %d\n\n", n >> 3);

	//book p100-04-4-1 ��
	//�Է¹��� ������ ��Ʈ������ �̿��� ��ȣ �ݴ�� �ٲٴ� ���α׷� �ۼ�
	//�� 2�� ������ ��ȣ�ٲٴ� ����� �Ѵٴ� ���� ���
	printf("Enter an integer >> ");
	scanf_s("%d", &n);
	printf("�Է��� ����    : %d\n", n);
	n = ~n;		//��Ʈ�� ���� ������Ų ��(0 �� 1)
	n += 1;		//1�� ���ؼ� 2�� ���� �ϼ�!
	printf("��ȣ �ٲ� ��� : %d\n\n", n);

	//book p100-04-4-2
	// *, / �����ڸ� ������� �ʰ� 3��8��4 �����ϴ� ���α׷� �ۼ�
	int result = (3 << 3) >> 2;
	printf("3��8��4 = %d\n\n", result);

	return 0;
}