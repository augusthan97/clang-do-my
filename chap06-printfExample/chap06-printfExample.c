/*
*   chap06-printfExample.c 
*   챕터6 printf 연습문제 실습
*/
#include <stdio.h>


void chap06_0501();
void chap06_0502();
void chap06_0503();
void chap06_0504();
void chap06_0505();
void chap06_0506();
void chap06_0507();
void chap06_0508();
void chap06_0509();
void chap06_0510();
void chap06_0511();

void main()
{
    printf("C언어 표준출력함수 printf 연습문제\n\n");
    chap06_0501();
    chap06_0502();
    chap06_0503();
    chap06_0504();
    chap06_0505();
    chap06_0506();
    chap06_0507();
    chap06_0508();
    chap06_0509();
    chap06_0510();
    chap06_0511();
}

void chap06_0501() {
    printf("06-05-01.c 아스키 값으로 문자 출력하기\n");
    printf("65의 ASCII 값은 %c입니다.\n\n\n", 65);
}

void chap06_0502() {
    printf("06-05-02.c char 변수를 %%c와 %%d로 각각 출력해 보기\n");
    char data = 65;
    printf("%c의 ASCII 값은 %d입니다.\n\n\n", data, data);
}

void chap06_0503() {
    printf("06-05-03.c 실수 형식의 변수 값 출력하기\n");
    float value = 2.1f;
    printf("%f\n\n\n", value);
}

void chap06_0504() {
    printf("06-05-04.c 실수형 데이터의 출력과 잘못된 출력 비교하기\n");
    float value = 2.1f;
    printf("%f, %d\n\n\n", value, value);
}

void chap06_0505() {
    printf("06-05-05.c %% 키워드 중심의 출력 특성 확인하기\n");
    int data1 = -1;
    unsigned int data2 = 4294967295;
    printf("%d, %u, %d, %u\n\n\n", data1, data1, data2, data2);
}

void chap06_0506() {
    printf("06-05-06.c %% 키워드에 의한 데이터 크기 변화 확인하기\n");
    char data = -1;
    printf("%d, %u\n\n\n", data, data);
}

void chap06_0507() {
    printf("06-05-07.c 정수 값을 여러 가지 진법으로 출력하기\n");
    int data1 = 10;
    int data2 = 010;
    int data3 = 0x10;
    printf("%x, %d, %o\n\n\n", data1, data2, data3);
}

void chap06_0508() {
    printf("06-05-08.c 실수 값을 지수 형태로 출력하기\n");
    float data = 12.34f;
    printf("%f, %e, %E\n\n\n", data, data, data);
}

void chap06_0509() {
    printf("06-05-09.c %% 키워드로 출력 칸 수 지정하기\n");
    int data = 7;
    printf("[%d] [%5d] \n\n\n", data, data);
}

void chap06_0510() {
    printf("06-05-10.c 왼쪽 또는 오른쪽으로 정렬해서 출력하기\n");
    int data = 7;
    printf("[%5d] [%05d] [%-5d] \n\n\n", data, data, data);
}

void chap06_0511() {
    printf("06-05-11.c 실수 칸 출력할 때 칸 수 지정하기\n");
    double data = 3.141592;
    printf("[%f] [%.4f] [%8.4f] [%-8.4f]\n\n\n", data, data, data, data);
}