/*
* 기본자료형
* [숫자]
* int  : 정수형(소수점이 아닌 일반 유리수 : - 123~~~, 0, + 123~~~)
* - short int : 2 바이트
* - long int  : 4 바이트
* -----------------------------------------------------------------------------
* 2 바이트
* unsigned short int : 0 ~ 65535
* signed short int : -32768 ~ 32767
* 
* -----------------------------------------------------------------------------
* 4 바이트
* unsigned long int : 
* signed long int	: 
* 
* -----------------------------------------------------------------------------
* 변수 variable
* underscore(_), 영문자 시작,
* 영문자, 숫자, under score 조합

*/
#include <limits.h>
#include <stdio.h>

void main() {
	
	//short int 2바이트
	signed short int si1 = 32767;
	signed short int si2 = -32768;
	signed short int si3 = 32768;		//저장범위를 넘어 오버플로우 되어 음수 값으로 변환됨

	unsigned short int us1 = 65535;
	unsigned short int us2 = us1 + 1;	//unsigned 부호가 없는경우 크기범위를 1 정도 넘으면 0 값으로 넘어감

	printf("short int : si1(%d), si2(%d), si3(%d), us1(%d), us2(%d)\n", si1, si2, si3, us1, us2);
	
	// long int 4바이트
	signed long int li1 = 2147483647;
	signed long int li2 = -2147483647 - 1;
	signed long int li3 = 2147483648;		//저장범위를 넘어 오버플로우 되어 음수 값으로 변환됨

	unsigned long int ul1 = 4294967295;
	unsigned long int ul2 = ul1 + 1;	//unsigned 부호가 없는경우 크기범위를 1 정도 넘으면 0 값으로 넘어감

	printf("long int : li1(%d), li2(%d), li3(%d), ul1(%u), ul2(%u)\n", li1, li2, li3, ul1, ul2);

	printf("$$$$ INT_MIN(%d)\n", INT_MIN); //-2147483647 - 1
}