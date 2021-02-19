/*
	chap07-arithmetic.c
	산술연산자 예제
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
	int data1 =5, data2 = 3; // 두변수에 초기값을 5와 3으로 설정

	int result1 = data1 + data2;	//덧셈
	int result2 = data1 - data2;	//뺄셈
	int result3 = data1 * data2;	//곱셈
	int result4 = data1 / data2;	//나눗셈 (몫)
	int result5 = data1 % data2;	//나누셈 (나머지)

	printf("result : %d, %d, %d, %d, %d \n", result1, result2, result3, result4, result5);
}

void arithBasic2() {
	float data1 = 5.0f, data2 = 3.0f; // 두변수에 초기값을 5와 3으로 설정

	float result1 = data1 + data2;	//덧셈
	float result2 = data1 * data2;	//곱셈
	float result3 = data1 / data2;	//나눗셈 (몫)

	printf("result : %f, %f, %20.10f, %20.10f \n", result1, result2, result3, (data1 / data2));
}

/*
증감연산자		*/
void arithPlusMinus() {
	int x = 5;
	//후위 증감
	x++;	// x = x + 1
	x--;	// x = x - 1
	//전위증감
	++x;	// x = x + 1
	--x;	// x = x + 1

	printf("x=%d\n", x);

	int p1 = ++x;	//x의 값을 1 더한 후에 그결과를 p1에 대입
	int p2 = x++;	//x의 값을 p1에 대입한 후에 x에 1을 더한다.
	int p3 = --x;	//x의 값을 1 뺀 후에 그결과를 p1에 대입
	int p4 = x--;	//x의 값을 p1에 대입한 후에 x에 1을 뺀다.

	printf("p1(%d),  p2(%d),  p3(%d),  p4(%d)\n", p1, p2, p3, p4);
}

