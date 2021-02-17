/*
*
*chap06-preprocesser.c
* 전처리기 예제
* 
*/
/*

전처리기

#으로 시작하고 세미콜론 ; 을 찍지 않는다.

ex) #include <stdio.h>  //통상적으로 라이브러리 형태로 제공될때 사용
						// 라이브러리 패스(위치path) 지정되있어야 함

	#include "헤더파일명.h"  //자신의 프로젝트에 포함된 파일일때 사용
							 // 파일을 포함하는 자신의 폴더인 경우 패스를 지정않아도 됨
							 // 현재 프로젝트와 다른 경로에 있을시 패스를 지정해야함
							 // 1.(맥,유닉스,리눅스) '.../include/헤더파일명.h' 와 같이 헤더파일 모음 폴더에 넣어 지정한다
							 //    ( 윈  도  우 )    '...\include\헤더파일명.h'
							 // 2. 헤더파일들을 따로 모으지 않고 저장되어있는 위치를 지정한다(권장 X )


*/

#include <stdio.h>
// define문은 변수명을 대문자를 쓴다.
// 상수 ( 변하지 않는 값, 식별자 )
#define PI 3.141592
// 코드 맨 아래처럼 main()함수 밖에 다른 함수로서 선언할 수도 있지만 그렇게 하면 반복호출되면서 메모리상 문제가 발생할 수 있다.
// 아래처럼 define하여 미리 선언하여 사용하면 위의 문제를 방지할 수 있다.
#define POWX(x) (x * x)
#define CIRCLE_AREA(r) (PI * (r*r))
#define CIRCLE_AREA2(r) (PI * POWX(r))
#define CIRCLE_AREA3(r) PI * POWX(r)
#define CIRCLE_ROUND(r) (PI * 2 * r)
// PI [ 3.141592 ] * POWX(r) [ x * x ]
// ((3.141592f) * (r * r))
// 3.0f 입력시 프로그램이 자동으로 치환하는 값 
//  ㄴ>(3.141592f * (3.0f * 3.0f))

// TRUE(참,1 ), FALSE(거짓, 0 )
//
#define TRUE 1
#define FALSE 0

float circle_area(float r);
float circle_round(float r);




// float pi = 3.141592f		//전역변수

void main() {
	float pi = 3.141592f;

	printf("pi(%f)\n", pi);
	printf("Pi(%f)\n", PI);
	printf("함수화 원의넓이 : 반지름(%f), 넓이(%f)\n", 3.0f, circle_area(3.0f));
	printf("함수화 원의둘레 : 반지름(%f), 둘레(%f)\n", 3.0f, circle_round(3.0f));
	printf("define 원의넓이 : 반지름(%f), 넓이(%f)\n", 3.0f, CIRCLE_AREA(3.0f));
	printf("define 원의둘레 : 반지름(%f), 둘레(%f)\n", 3.0f, CIRCLE_ROUND(3.0f));

	float x1 = 10.0f / (CIRCLE_AREA(3.0f));	//뒤에 CIRCLE_AREA와 CIRCLE_AREA3에 괄호를 치면 값이 같게 나오고 치지 않으면 다르게 나옴
	float x2 = 10.0f / (CIRCLE_AREA3(3.0f));
	printf("x1 원의넓이 : 반지름(%f), 넓이(%f)\n", 3.0f, x1);
	printf("x2 원의넓이 : 반지름(%f), 넓이(%f)\n", 3.0f, x2);
}
// 원의 넓이 circle_area
float circle_area(float r)
{
	return PI * (r * r);
}



// 원의 둘레 circle_round
float circle_round(float r)
{
	return 2 * PI * r;
}
