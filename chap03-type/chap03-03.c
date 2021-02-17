/*
* 기본자료형
* [문자]
* char : 문자형
* - signed char : 부호가 있는 + , - / unsigned char 부호가 없는
* 
* char 1바이트
* signed char   : 1비트를 부호 비트, 7비트를 숫자 ( -128 ~ 127)
* unsigned char : 8비트 숫자
* ----------------------------------------------------------------------------
* [숫자]
* int  : 정수형(소수점이 아닌 일반 유리수 : - 123~~~, 0, + 123~~~)
* - short int
* - long int
* 
* -----------------------------------------------------------------------------
* 변수 variable
* underscore(_), 영문자 시작,
* 영문자, 숫자, under score 조합
*/
#include <stdio.h>

void main() {			// char 앞에 미기입시 signed 기본적용
	/* // step 1 char
	char ch = 'a';		// ASCII 코드의 한 문자 저장
	char cd = 97;		// a의 ASCII 코드 10진 값
	char cx = 0x61;		// a의 ASCII 코드 16진 값
	char _co = 0141;	//
	printf("ch=(%c) , cd(%c) , cx(%c)\n", ch, cd, cx); // %c : 변수로부터 값을 받아 문자형으로 출력한다. [  ,  ]뒤에 변수 입력시 해당 변수값 가져오기
	printf("ch=(%d) , cd(%x) , cx(%o) , _co(%c)\n", ch, cd, cx, _co); // %d : 10진수 값으로 출력  /  %x : 16	/	%o : 8진수 값으로 출력
	*/
	
	/* // step 2 signed char / unsigned char
	signed char cc1 = 127;
	signed char cc2 = -128;
	signed char cc3 = 128;	// 저장할수 있는 값의 범위를 넘어서면(-128 ~ +127) 오버플로우가 발생하여 -128로 값이 변한다.
	unsigned char uc1 = 255;
	printf("cc1(%d), cc2(%d), cc3(%d), uc1(%d)\n", cc1, cc2, cc3, uc1);
	*/
	// step 3
	char ch = 'a';		// 문자형 상수(불변의 값)
	char ch1 = ch + 1;	// 
	printf("ch=(%d), ch1(%c)(%d)", ch,ch1,ch1);	// 출력값 97 b 98 -> a의 아스키코드 10진 값 / b 문자값 / b의 아스키코드 10진 값

	
	/*
	* char abc; // 변수 자료형  변수명
	* 메모리번지 : 32 bit 4 Byte
	* 
	*/
}