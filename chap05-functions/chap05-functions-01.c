/*
* Project : chap05-functions
* Module : chap05-functions-01.c
* 결과값 : main function!
*		  print function!
*/
#include <stdio.h>

void print();	// 함수 선언(declare)(앞으로 사용할 함수 미리 선언) : 함수의 프로토타입
void printx(int x);
int sum(int value1, int value2);
int minus(int value1, int value2);

void main() {
	printf("main function!\n");
	//print();	// 함수 호출
	//printx(10.9f);	//정수형에 실수형 값을 넣으면 반올림이 아니라 자료소실(소수점 버리기)이 발생한다.
	//프로젝트 -> 속성 -> C/C++ -> [특정경고를 오류로 처리] 활성화시 자료소실이 아닌 에러가 발생히여 빌드실패
	//printx(10);
	int result = sum(10, 50);	//호출자caller
	printx(result);

	int result_minus = minus(10, 50);	//호출자caller
	printx(result_minus);
}
/*
void print(){	// 함수 정의 : 본체, 내용이 기술
	printf("print function!\n");
}
*/

void printx(int x) {
	printf("printx: result(%d)!\n", x);
}

int sum(int value1, int value2) {
	int result = value1 + value2;
	return result;
}
int minus(int value1, int value2) {
	int result_minus = value1 - value2;
	return result_minus;
}