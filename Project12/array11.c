#define _CRT_SECURE_NO_WARNINGS // 안전성 에러 무시
#include<stdio.h>
#include<string.h>

void main() {
	char data1[10] = { 'a','b','c',0 };
	char result[30];

	// strcpy(저장할 변수,복사 대상 변수);
	strcpy(result, data1);
	// strcat(기존 변수 이름, 추가할 내용);
	strcat(result, "def");
	printf("%s + \"def\" = %s\n", data1, result);
}