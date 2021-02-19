/*
	chap07-logical.c
	논리연산자 ( Logical operator )
	-------------------------------------------------------
	&& : AND	논리곱 : 양쪽 다 참이어야 참
	|| : OR		논리합 : 한쪽이라도 참이면 참
	!  : NOT	부정   : 참이면 거짓, 거짓이면 참(togle 토글)
	--------------------------------------------------------
	0은 거짓
	0이 아닌것은 참이다. -1, 자료형의 비트가 하나라도 1이면 참
	--------------------------------------------------------
	-1은 모든 비트가 1로 세팅 그러므로 참
	2의 보수
*/

#include <stdio.h>


void main() {
	int data1 = 5, data2 = 3; // 두변수에 초기값을 5와 3으로 설정

	int result1 = 0 || 1;
	int result2 = 3 && -1;
	int result3 = data1 == 3 || data2 ==3;
	int result4 = data1 == 3 && data2 == 3;
	int result5 = !data1;

	printf("result : %d, %d, %d, %d, %d \n", result1, result2, result3, result4, result5);
}

