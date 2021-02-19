/*
	chap07-logical.c
	���������� ( Logical operator )
	-------------------------------------------------------
	&& : AND	������ : ���� �� ���̾�� ��
	|| : OR		������ : �����̶� ���̸� ��
	!  : NOT	����   : ���̸� ����, �����̸� ��(togle ���)
	--------------------------------------------------------
	0�� ����
	0�� �ƴѰ��� ���̴�. -1, �ڷ����� ��Ʈ�� �ϳ��� 1�̸� ��
	--------------------------------------------------------
	-1�� ��� ��Ʈ�� 1�� ���� �׷��Ƿ� ��
	2�� ����
*/

#include <stdio.h>


void main() {
	int data1 = 5, data2 = 3; // �κ����� �ʱⰪ�� 5�� 3���� ����

	int result1 = 0 || 1;
	int result2 = 3 && -1;
	int result3 = data1 == 3 || data2 ==3;
	int result4 = data1 == 3 && data2 == 3;
	int result5 = !data1;

	printf("result : %d, %d, %d, %d, %d \n", result1, result2, result3, result4, result5);
}
