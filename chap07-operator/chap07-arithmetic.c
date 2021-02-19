/*
	chap07-arithmetic.c
	��������� ����
*/

#include <stdio.h>
void arithBasic();
void arithBasic2();
void arithPlusMinus();




void main() {
	arithBasic();
	arithBasic2();
	arithPlusMinus();
}

void arithBasic() {
	int data1 =5, data2 = 3; // �κ����� �ʱⰪ�� 5�� 3���� ����

	int result1 = data1 + data2;	//����
	int result2 = data1 - data2;	//����
	int result3 = data1 * data2;	//����
	int result4 = data1 / data2;	//������ (��)
	int result5 = data1 % data2;	//������ (������)

	printf("result : %d, %d, %d, %d, %d \n", result1, result2, result3, result4, result5);
}

void arithBasic2() {
	float data1 = 5.0f, data2 = 3.0f; // �κ����� �ʱⰪ�� 5�� 3���� ����

	float result1 = data1 + data2;	//����
	float result2 = data1 * data2;	//����
	float result3 = data1 / data2;	//������ (��)

	printf("result : %f, %f, %20.10f, %20.10f \n", result1, result2, result3, (data1 / data2));
}

/*
����������		*/
void arithPlusMinus() {
	int x = 5;
	//���� ����
	x++;	// x = x + 1
	x--;	// x = x - 1
	//��������
	++x;	// x = x + 1
	--x;	// x = x + 1

	printf("x=%d\n", x);

	int p1 = ++x;	//x�� ���� 1 ���� �Ŀ� �װ���� p1�� ����
	int p2 = x++;	//x�� ���� p1�� ������ �Ŀ� x�� 1�� ���Ѵ�.
	int p3 = --x;	//x�� ���� 1 �� �Ŀ� �װ���� p1�� ����
	int p4 = x--;	//x�� ���� p1�� ������ �Ŀ� x�� 1�� ����.

	printf("p1(%d),  p2(%d),  p3(%d),  p4(%d)\n", p1, p2, p3, p4);
}

