/*
* chap06-stdout.c
* C 표준 라이브러리와 표준 출력함수
* -------------------------------------------------
* #define stdin  (__acrt_iob_func(0))
  #define stdout (__acrt_iob_func(1))
  #define stderr (__acrt_iob_func(2))
* -------------------------------------------------
* _ACRTIMP int __cdecl puts(
        _In_z_ char const* _Buffer
        );
    
    //puts(_In_z_ char const* _Buffer);
    //const : constant(상수형, 불변)
    //variable : 변수
*/


#include <stdio.h>

#define TITLE "C 표준 라이브러리와 표준 출력함수"

#define PUTCHAR(c) putc((c), stdout)
#define PUTERROR(c) putc((c), stderr)

void putcharTest1();
void putcharTest2();
void putcTest3();
void putsTest4();

void main() {
    printf("%s\n", TITLE);
    putchar(127); //putchar 오류
    putchar('\n');  //정수형 입력값을 문자형으로 변환하는 과정에서 오류 발생
    putchar(128);
    putchar('\n');
    putchar(159);
    putchar('\n');
    putchar(205);
    putchar('\n');
    putchar(208);
    putchar('\n');
    putchar(209);
    putchar('\n');
    //putcharTest1();   //putchar 실습
    //putcharTest2();   //putchar 에러 실습
    //putcTest3();      //putc    실습
    putsTest4();       //puts    실습

}

void putsTest4() {
    puts("표준 String 함수!");
    puts(TITLE);
}

void putcTest3() {
    putc('A', stdout);
    putc('\n', stdout);
    putc('B', stdout);
    putc('\n', stdout);
    putchar('C');
    putc('\n', stdout);

    PUTCHAR('C');
    PUTERROR('E');
}

void putcharTest1() {

    //printf("C 표준 라이브러리와 표준 출력함수\n\n");
    printf("putchar() 출력함수\n");
    //putchar(TITLE); // putchar = 단일문자 출력함수로 String문자열 입력시 출력값에 오류 발생
    putchar('a');
    putchar('\n');  // 작은따옴표 '' 단일문자에 사용     /       큰따옴표 "" 문자열에 사용
    putchar('b');
    putchar('\n');
    putchar('1');
    putchar('\n');
    putchar(65);
    putchar('\n');
    putchar('A');
}

void putcharTest2() {

    //printf("C 표준 라이브러리와 표준 출력함수\n\n");
    printf("putchar() 출력함수 오류 테스트\n");
    char rt = putchar(TITLE);
    putchar('\n');
    char ra = putchar('a');
    putchar('\n');
    // putchar = 단일문자 출력함수로 String문자열 입력시 출력값에 오류 발생

    printf("re(%c), ra(%c)\n", rt, ra);
   
}


/*
*   printf 대신 putchar를 사용하는 이유
*   두 함수는 똑같이 문자를 출력 할 수 있는 함수이다
*   printf는 다양한 자료형(type)을 출력할수 있어 편리하지만
*   , 편리한만큼 다양한 자료형(type, 포맷(ex:%s, %c, %f...))을 지원해야하기 때문에 느리다.
*/