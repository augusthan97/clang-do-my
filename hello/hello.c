/* 지정단위 주석
* file name : hello.c

*/

#include <stdio.h> // 주석 : 설명문(comment) standard input/output
/* Ctrl + c : 복사
   Ctrl + v : 붙여넣기
   Ctrl + z : 되돌리기
   위 3가지 단축어는 클립보드(clipboard)를 이용한 기능이다. 어떤 운영체제이든 프로그램이든 지원하는 기능이기 때문에 보안에 취약하다.
*/
void main() { // main : 주함수, 진입 함수 - 하나의 프로젝트(솔루션)에 1개의 main만 존재해야함
			  // void : 뒤에 적은 함수를 실행하고 반환(return)하는 값이 없다.
	//printf("Hello World!!!\n");
	printf("Hello World!!!\nAnnyeong-haseyo~~\n Hello This is Han YongGu / 저는 한용구입니다.");

	// return -1;	//return(-1) or return -1
}

/*
-----------------------------
2진수 Binary Digit
0,1로 이루어진 수, 값

메모리 : RAM Random Access Memory  / 현재 4 GB

bit연산
-32비트 : 최대 4 GB 처리 가능
-64비트 : 최대 B 처리 가능

자료형 == 그릇
자료형에 따라 필요한 공간 byte수가 다르다
*/