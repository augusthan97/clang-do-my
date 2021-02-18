/*  // ※ stdout.c 에도 main()함수가 있기 때문에 프로젝트명-> 속성 -> [ 빌드에서 제외 ] -> 예 
* chap06-stdout.c
* C 표준 라이브러리와 표준 출력함수

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

/*
* //putx(char* str)
* putx(char const* str)
* str : 출력하고자 하는 문자열
* return : 없음
* -----------------------------------------------------------
* puts(char const* _Buffer)의 의미가 무엇인지 확인
*/

void putx(char const* str) {
    //puts(str);

    // str[0] = 'X';        //const는 불변이므로 값을 바꿀 수 없다.
    putchar(str[0]);
    putchar(str[1]);
    putchar(str[2]);
    putchar(str[3]);
    putchar(str[4]);
    putchar(str[5]);
}

void putv(char* str) {
    //puts(str);
    str[0] = 'X';
    putchar(str[0]);
    putchar(str[1]);
    putchar(str[2]);
    putchar(str[3]);
    putchar(str[4]);
    putchar(str[5]);
    putchar(str[6]);
}

void main() {
    char first[] = "firstttttt";
    char second[] = "secondddddd";

    printf("%s\n", TITLE);
    //putx("first\n");
    //printf("\n");
    //putv(TITLE);
    putx(first);
    printf("\n");
    //second 값이 변경됨(아마 putv와 puts는 const(상수설정 / constant)을 안했기 때문에 값이 변경됨)
    putv(second);
    printf("\n");
    puts(second);

}

