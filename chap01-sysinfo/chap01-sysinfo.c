/*
* chap01-sysinfo.c
* 시스템 정보확인
* -----------------------------------------
* sizeof(type 자료형) 내장함수(Built-in Function)
* 자료형의 크기를 알 수 있는 함수
*/

#include <stdio.h>

int main()
{
    printf(">>> system information <<< \n");

    printf("sizeof(char)(%d)\n", sizeof(char));
    printf("sizeof(short)(%d)\n", sizeof(short));
    printf("sizeof(int)(%d)\n", sizeof(int));
    printf("sizeof(long)(%d)\n", sizeof(long));
    printf("sizeof(float)(%d)\n", sizeof(float));
    printf("sizeof(double)(%d)\n", sizeof(double));

    printf("\n\n\n\n pointer sizeof\n");
    printf("sizeof(char*)(%d)\n", sizeof(char*));
    printf("sizeof(short*)(%d)\n", sizeof(short*));
    printf("sizeof(int*)(%d)\n", sizeof(int*));
    printf("sizeof(long*)(%d)\n", sizeof(long*));
    printf("sizeof(float*)(%d)\n", sizeof(float*));
    printf("sizeof(double*)(%d)\n", sizeof(double*));

    printf("\n\n\n\n void pointer sizeof\n");
    printf("sizeof(void*)(%d)\n", sizeof(void*));

}

