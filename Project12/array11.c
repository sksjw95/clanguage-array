#define _CRT_SECURE_NO_WARNINGS // ������ ���� ����
#include<stdio.h>
#include<string.h>

void main() {
	char data1[10] = { 'a','b','c',0 };
	char result[30];

	// strcpy(������ ����,���� ��� ����);
	strcpy(result, data1);
	// strcat(���� ���� �̸�, �߰��� ����);
	strcat(result, "def");
	printf("%s + \"def\" = %s\n", data1, result);
}