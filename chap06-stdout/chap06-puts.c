/*  // �� stdout.c ���� main()�Լ��� �ֱ� ������ ������Ʈ��-> �Ӽ� -> [ ���忡�� ���� ] -> �� 
* chap06-stdout.c
* C ǥ�� ���̺귯���� ǥ�� ����Լ�

* -------------------------------------------------
* _ACRTIMP int __cdecl puts(
        _In_z_ char const* _Buffer
        );

    //puts(_In_z_ char const* _Buffer);
    //const : constant(�����, �Һ�)
    //variable : ����
*/


#include <stdio.h>

#define TITLE "C ǥ�� ���̺귯���� ǥ�� ����Լ�"

/*
* //putx(char* str)
* putx(char const* str)
* str : ����ϰ��� �ϴ� ���ڿ�
* return : ����
* -----------------------------------------------------------
* puts(char const* _Buffer)�� �ǹ̰� �������� Ȯ��
*/

void putx(char const* str) {
    //puts(str);

    // str[0] = 'X';        //const�� �Һ��̹Ƿ� ���� �ٲ� �� ����.
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
    //second ���� �����(�Ƹ� putv�� puts�� const(������� / constant)�� ���߱� ������ ���� �����)
    putv(second);
    printf("\n");
    puts(second);

}

